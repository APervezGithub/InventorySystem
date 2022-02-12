// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/PlayerController.h"
#include "Inventory/InventoryComponent.h"
#include "CookingGameController.generated.h"

/**
 * 
 */
UCLASS()
class COOKINGGAME_API ACookingGameController : public APlayerController
{
	GENERATED_BODY()
	
public:
	void GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const override;

	UFUNCTION(Server, Reliable, WithValidation, BlueprintCallable)
	void Server_TakeFromContainer(class UInventoryComponent* OtherInventory, int SlotIndex, int Quantity);

	UFUNCTION(Server, Reliable, WithValidation, BlueprintCallable)
	void Server_GiveToContainer(class UInventoryComponent* OtherInventory, struct FSlotStructure Item);

	UFUNCTION(Server, Reliable, WithValidation, BlueprintCallable)
	void Server_TransferBetweenInventories(
		class UInventoryComponent* ReceivingInventory,
		class UInventoryComponent* GivingInventory,
		int GivingSlotIndex, int Quantity, struct FSlotStructure Item);

	UFUNCTION(Server, Reliable, WithValidation, BlueprintCallable)
	void Server_UseItem(int32 ItemIndex);

	UPROPERTY(Replicated, EditAnywhere, BlueprintReadWrite)
	class UInventoryComponent* OwnInventory;
	UFUNCTION(Server, Reliable, WithValidation)
	void Server_SetOwnInventory(class UInventoryComponent* NewInventory);

	UPROPERTY(Replicated, EditAnywhere, BlueprintReadWrite)
	class UInventoryComponent* InteractingInventory;
	UFUNCTION(Server, Reliable, WithValidation)
	void Server_SetInteractingInventory(class UInventoryComponent* NewInventory);

	class ACookingGameCharacter* CookingGameCharacter;
};
