// Fill out your copyright notice in the Description page of Project Settings.


#include "Inventory/ContainerActor.h"
#include "Inventory/InventoryComponent.h"
#include "CookingGame/CookingGameCharacter.h"
#include "Character/CookingGameController.h"

AContainerActor::AContainerActor()
{
 	// Set this actor to call Tick() every frame.  You can turn this off to improve performance if you don't need it.
	PrimaryActorTick.bCanEverTick = false;

    InventoryComp = CreateDefaultSubobject<UInventoryComponent>(TEXT("Inventory"));
	InventoryComp->SetIsReplicated(true);
}

void AContainerActor::ReactToInteract_Implementation()
{
    
}

void AContainerActor::LocalOnInteract(AActor* Caller)
{
    Super::OnInteract(Caller);

    ACookingGameCharacter* PlayerCharacter = Cast<ACookingGameCharacter>(Caller);
    if (PlayerCharacter)
    {
        PlayerCharacter->OpenInventoryTransfer(this);
        
        ACookingGameController* PlayerController = PlayerCharacter->CookingGameController;
        if (PlayerController)
        {
            PlayerController->InteractingInventory = InventoryComp;
            PlayerController->Server_SetInteractingInventory(InventoryComp);
        }
        else
        {
            GEngine->AddOnScreenDebugMessage(-1, 15.0f, FColor::Yellow, TEXT("no container found [AContainerActor::LocalOnInteract]"));
        }
    }
}

void AContainerActor::OnInteract(AActor* Caller)
{
    Super::OnInteract(Caller);

    ACookingGameCharacter* PlayerCharacter = Cast<ACookingGameCharacter>(Caller);
    if (PlayerCharacter)
    {
        if (InventoryComp->RelevantPlayers.Contains(PlayerCharacter))
        {
            InventoryComp->RelevantPlayers.Remove(PlayerCharacter);
        }
        else
        {
            InventoryComp->RelevantPlayers.Add(PlayerCharacter);
        }
    }
}