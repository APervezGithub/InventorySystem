// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "Interact/InteractableBase.h"
#include "PickupActor.generated.h"

USTRUCT(BlueprintType)
struct FItemStructure
{
	GENERATED_BODY()

	UPROPERTY(BlueprintReadWrite, EditAnywhere)
	FText Name;
	
	UPROPERTY(BlueprintReadWrite, EditAnywhere)
	bool bIsStackable;

	UPROPERTY(BlueprintReadWrite, EditAnywhere)
	UTexture2D* Thumbnail;

	UPROPERTY(BlueprintReadWrite, EditAnywhere)
	FText Description;

	UPROPERTY(BlueprintReadWrite, EditAnywhere)
	bool bIsConsumable;

	UPROPERTY(BlueprintReadWrite, EditAnywhere)
	int32 MaxStackSize;

	UPROPERTY(BlueprintReadWrite, EditAnywhere)
	float Durability;

	UPROPERTY(BlueprintReadWrite, EditAnywhere)
	TSubclassOf<APickupActor> ClassType;

	FItemStructure()
	{
		Name = FText::FromString("NONE");
		bIsStackable = true;
		Thumbnail = nullptr;
		Description = FText::FromString("NONE");
		bIsConsumable = true;
		MaxStackSize = 4;
		Durability = 0.0f;
		ClassType = nullptr;
	}
};

UCLASS()
class COOKINGGAME_API APickupActor : public AInteractableBase
{
	GENERATED_BODY()

public:
	UPROPERTY(BlueprintReadWrite, EditAnywhere)
	struct FItemStructure ItemStructure;

	UPROPERTY(BlueprintReadWrite, EditAnywhere)
	int32 ItemQuantity;

	UFUNCTION(BlueprintCallable, Server, WithValidation, Reliable)
	void UseItem();

	virtual void OnInteract(AActor* Caller);

	virtual void ReactToInteract_Implementation() override;
};
