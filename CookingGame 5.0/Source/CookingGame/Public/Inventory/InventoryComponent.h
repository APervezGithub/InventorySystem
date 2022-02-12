// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "Components/ActorComponent.h"
#include "PickupActor.h"
#include "InventoryComponent.generated.h"

USTRUCT(BlueprintType)
struct FSlotStructure
{
	GENERATED_BODY()

	UPROPERTY(BlueprintReadWrite, EditAnywhere)
	struct FItemStructure ItemStructure;

	UPROPERTY(BlueprintReadWrite, EditAnywhere)
	int32 Quantity;

	FSlotStructure()
	{
		ItemStructure = FItemStructure();
		Quantity = 0;
	}
};

UCLASS( ClassGroup=(Custom), meta=(BlueprintSpawnableComponent) )
class COOKINGGAME_API UInventoryComponent : public UActorComponent
{
	GENERATED_BODY()

public:	
	// Sets default values for this component's properties
	UInventoryComponent();

protected:
	// Called when the game starts
	virtual void BeginPlay() override;

public:	
	// Called every frame
	virtual void TickComponent(float DeltaTime, ELevelTick TickType, FActorComponentTickFunction* ThisTickFunction) override;

	void PrepareInventory();

	void CreateStack(struct FSlotStructure Item);

	void AddToStack(struct FSlotStructure Item, int32 SlotIndex);

	void AddItem(struct FSlotStructure Item);

	int32 HasPartialStack(struct FSlotStructure Item);

	UFUNCTION(BlueprintCallable)
	void AddToInventory(struct FSlotStructure Item);

	UFUNCTION(BlueprintCallable)
	void UseItem(int32 ItemIndex);

	UFUNCTION()
	void ClearSlot(int32 ItemIndex);

	UFUNCTION(BlueprintCallable)
	void RemoveFromSlot(int32 ItemIndex, int32 amount);

	UFUNCTION(BlueprintCallable)
	int FindItem(TSubclassOf<class APickupActor> ItemClass, int32 Amount);

	UPROPERTY(BlueprintReadWrite, EditAnywhere)
	FText InventoryName;

	UPROPERTY(BlueprintReadWrite, EditAnywhere)
	int32 NumberOfSlots;

	UFUNCTION()
	void OnRep_Inventory();

	UPROPERTY(BlueprintReadWrite, EditAnywhere, ReplicatedUsing = OnRep_Inventory)
	TArray<FSlotStructure> Inventory;

	UPROPERTY(Replicated)
	TArray<class ACookingGameCharacter*> RelevantPlayers;
};
