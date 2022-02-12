// Fill out your copyright notice in the Description page of Project Settings.


#include "Character/CookingGameController.h"
#include "Net/UnrealNetwork.h"
#include "Inventory/InventoryComponent.h"
#include "CookingGame/CookingGameCharacter.h"

void ACookingGameController::Server_TakeFromContainer_Implementation(class UInventoryComponent* OtherInventory, int SlotIndex, int Quantity)
{
    OtherInventory->RemoveFromSlot(SlotIndex, Quantity);
}

bool ACookingGameController::Server_TakeFromContainer_Validate(UInventoryComponent* OtherInventory, int SlotIndex, int Quantity)
{
    return true;
}

void ACookingGameController::Server_GiveToContainer_Implementation(class UInventoryComponent* OtherInventory, struct FSlotStructure Item)
{
    OtherInventory->AddItem(Item);
}

bool ACookingGameController::Server_GiveToContainer_Validate(UInventoryComponent* OtherInventory, struct FSlotStructure Item)
{
    return true;
}

void ACookingGameController::Server_TransferBetweenInventories_Implementation(class UInventoryComponent* ReceivingInventory, class UInventoryComponent* GivingInventory, int GivingSlotIndex, int Quantity, struct FSlotStructure Item)
{
    GivingInventory->RemoveFromSlot(GivingSlotIndex, Quantity);
    ReceivingInventory->AddToInventory(Item);
    if (CookingGameCharacter)
    {
        CookingGameCharacter->RefreshInventories();
    }
    else
    {
        CookingGameCharacter = Cast<ACookingGameCharacter>(GetPawn());
        CookingGameCharacter->RefreshInventories();
    }
}

bool ACookingGameController::Server_TransferBetweenInventories_Validate(class UInventoryComponent* ReceivingInventory, class UInventoryComponent* GivingInventory, int GivingSlotIndex, int Quantity, struct FSlotStructure Item)
{
    return true;
}

void ACookingGameController::Server_UseItem_Implementation(int32 ItemIndex)
{
    OwnInventory->UseItem(ItemIndex);
}

bool ACookingGameController::Server_UseItem_Validate(int32 ItemIndex)
{
    return true;
}

void ACookingGameController::Server_SetOwnInventory_Implementation(class UInventoryComponent* NewInventory)
{
    OwnInventory = NewInventory;
}

bool ACookingGameController::Server_SetOwnInventory_Validate(class UInventoryComponent* NewInventory)
{
    return true;
}

void ACookingGameController::Server_SetInteractingInventory_Implementation(class UInventoryComponent* NewInventory)
{
    InteractingInventory = NewInventory;
}

bool ACookingGameController::Server_SetInteractingInventory_Validate(class UInventoryComponent* NewInventory)
{
    return true;
}

void ACookingGameController::GetLifetimeReplicatedProps(TArray< FLifetimeProperty >& OutLifetimeProps) const
{
    Super::GetLifetimeReplicatedProps(OutLifetimeProps);
    DOREPLIFETIME(ACookingGameController, OwnInventory);
    DOREPLIFETIME(ACookingGameController, InteractingInventory);
}