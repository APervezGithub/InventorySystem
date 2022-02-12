// Fill out your copyright notice in the Description page of Project Settings.


#include "Inventory/PickupActor.h"
#include "Inventory/InventoryComponent.h"

void APickupActor::UseItem_Implementation()
{
    
}

bool APickupActor::UseItem_Validate()
{
    return true;
}

void APickupActor::ReactToInteract_Implementation()
{
    Destroy();
}

void APickupActor::OnInteract(AActor* Caller)
{
    Super::OnInteract(Caller);

    UInventoryComponent* InvComp = Caller->FindComponentByClass<UInventoryComponent>();

    if (InvComp)
    {
        struct FSlotStructure Slot = FSlotStructure();
        Slot.ItemStructure = ItemStructure;
        Slot.Quantity = ItemQuantity;
        InvComp->AddToInventory(Slot);
    }

    Execute_ReactToInteract(this);
}