// Fill out your copyright notice in the Description page of Project Settings.

#include "Inventory/InventoryComponent.h"
#include "Net/UnrealNetwork.h"
#include "Inventory/PickupActor.h"
#include "CookingGame/CookingGameCharacter.h"

// Sets default values for this component's properties
UInventoryComponent::UInventoryComponent()
{
	// Set this component to be initialized when the game starts, and to be ticked every frame.  You can turn these features
	// off to improve performance if you don't need them.
	PrimaryComponentTick.bCanEverTick = true;

	// ...
}

// Called when the game starts
void UInventoryComponent::BeginPlay()
{
	Super::BeginPlay();

	PrepareInventory();
}

// Called every frame
void UInventoryComponent::TickComponent(float DeltaTime, ELevelTick TickType, FActorComponentTickFunction *ThisTickFunction)
{
	Super::TickComponent(DeltaTime, TickType, ThisTickFunction);

	// ...
}

void UInventoryComponent::PrepareInventory()
{
	Inventory.SetNum(NumberOfSlots);
	for (int i = 0; i < Inventory.Num(); i++)
	{
		if (Inventory[i].Quantity > 0)
		{
			Inventory[i].ItemStructure = Inventory[i].ItemStructure.ClassType.GetDefaultObject()->ItemStructure;
		}
	}
}

void UInventoryComponent::CreateStack(struct FSlotStructure Item)
{
	for (int i = 0; i < Inventory.Num(); i++)
	{
		if (Inventory[i].Quantity == 0)
		{
			Inventory[i].ItemStructure = Item.ItemStructure;
			Inventory[i].Quantity = FMath::Min(Item.Quantity, Item.ItemStructure.MaxStackSize);
			int32 RemainingQuantity = Item.Quantity - Item.ItemStructure.MaxStackSize;
			if (RemainingQuantity > 0)
			{
				struct FSlotStructure NewItem;
				NewItem.ItemStructure = Item.ItemStructure;
				NewItem.Quantity = RemainingQuantity;
				AddItem(NewItem);
			}
			return;
		}
	}
}

void UInventoryComponent::AddToStack(struct FSlotStructure Item, int32 SlotIndex)
{
	int CurrentQuantity = Inventory[SlotIndex].Quantity;
	int MaxStack = Item.ItemStructure.MaxStackSize;
	if (CurrentQuantity + Item.Quantity > MaxStack)
	{
		Inventory[SlotIndex].Quantity = MaxStack;
		int32 RemainingQuantity = Item.Quantity -
								  (MaxStack - CurrentQuantity);
		struct FSlotStructure NewItem;
		NewItem.ItemStructure = Item.ItemStructure;
		NewItem.Quantity = RemainingQuantity;
		AddItem(NewItem);
	}
	else
	{
		Inventory[SlotIndex].Quantity += Item.Quantity;
	}
}

int32 UInventoryComponent::HasPartialStack(struct FSlotStructure Item)
{
	int index = 0;
	while (index < Inventory.Num())
	{
		FSlotStructure Slot = Inventory[index];
		if (Slot.ItemStructure.ClassType == Item.ItemStructure.ClassType &&
			Slot.Quantity < Slot.ItemStructure.MaxStackSize)
		{
			break;
		}
		index += 1;
	}
	if (index == Inventory.Num())
	{
		return -1;
	}
	return index;
}

void UInventoryComponent::AddItem(struct FSlotStructure Item)
{
	struct FItemStructure ItemStruct = Item.ItemStructure;
	int PartialStack = HasPartialStack(Item);
	if (!ItemStruct.bIsStackable || PartialStack == -1)
	{
		CreateStack(Item);
	}
	else
	{
		AddToStack(Item, PartialStack);
	}
}

void UInventoryComponent::AddToInventory(struct FSlotStructure Item)
{
	if (GetOwner()->HasAuthority())
	{
		AddItem(Item);
		OnRep_Inventory();
	}
}

void UInventoryComponent::UseItem(int32 ItemIndex)
{
	if (GetOwner()->HasAuthority() && Inventory[ItemIndex].ItemStructure.bIsConsumable)
	{
		TSubclassOf<APickupActor> ActorClass = Inventory[ItemIndex].ItemStructure.ClassType;
		APickupActor* TempActor = nullptr;
		if (GetWorld())
		{
			FVector Location(0.0f, 0.0f, 0.0f);
			FRotator Rotation(0.0f, 0.0f, 0.0f);
			FActorSpawnParameters SpawnInfo;
			TempActor = GetWorld()->SpawnActor<APickupActor>(ActorClass, Location, Rotation, SpawnInfo);
		}
		if (TempActor)
		{
			//succeeded = TempActor->UseItem();
			TempActor->UseItem();
			TempActor->Destroy();
		}
		RemoveFromSlot(ItemIndex, 1);
	}
}

void UInventoryComponent::ClearSlot(int32 ItemIndex)
{
	if (GetOwner()->HasAuthority())
	{
		Inventory[ItemIndex] = FSlotStructure();
	}
}

void UInventoryComponent::RemoveFromSlot(int32 ItemIndex, int32 amount)
{
	if (GetOwner()->HasAuthority())
	{
		Inventory[ItemIndex].Quantity -= amount;
		if (Inventory[ItemIndex].Quantity == 0)
		{
			ClearSlot(ItemIndex);
		}
		OnRep_Inventory();
	}
}

int UInventoryComponent::FindItem(TSubclassOf<APickupActor> ItemClass, int32 Amount)
{
	int Index = 0;
	int RequiredAmount = Amount;
	while (Index < Inventory.Num())
	{
		FSlotStructure Slot = Inventory[Index];
		if (Slot.ItemStructure.ClassType == ItemClass)
		{
			RequiredAmount -= Slot.Quantity;
			if (RequiredAmount <= 0)
			{
				break;
			}
		}
		Index += 1;
	}
	if (Index == Inventory.Num() && RequiredAmount > 0)
	{
		return -1;
	}
	return Index;
}

void UInventoryComponent::OnRep_Inventory()
{
	for (auto& Player : RelevantPlayers)
	{
		if (Player)
		{
			Player->RefreshInventories();
		}
	}
}

void UInventoryComponent::GetLifetimeReplicatedProps(TArray<FLifetimeProperty> &OutLifetimeProps) const
{
	DOREPLIFETIME(UInventoryComponent, Inventory);
	DOREPLIFETIME(UInventoryComponent, RelevantPlayers);
}