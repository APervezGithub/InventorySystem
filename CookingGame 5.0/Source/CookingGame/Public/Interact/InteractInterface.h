// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "UObject/Interface.h"
#include "InteractInterface.generated.h"

USTRUCT(BlueprintType)
struct FInteractableData
{
	GENERATED_BODY()

	UPROPERTY(BlueprintReadWrite, EditAnywhere)
	FText Name;
	
	UPROPERTY(BlueprintReadWrite, EditAnywhere)
	FText PrimaryAction;

	UPROPERTY(BlueprintReadWrite, EditAnywhere)
	FText SecondaryAction;

	FInteractableData()
	{
		Name = FText::FromString("Default Name");
		PrimaryAction = FText::FromString("NONE");
		SecondaryAction = FText::FromString("NONE");
	}
};

// This class does not need to be modified.
UINTERFACE(MinimalAPI, meta = (CannotImplementInterfaceInBlueprint))
class UInteractInterface : public UInterface
{
	GENERATED_BODY()
};

/**
 * 
 */
class COOKINGGAME_API IInteractInterface
{
	GENERATED_BODY()

	// Add interface functions to this class. This is the class that will be inherited to implement this interface.
public:
	// This should be for interactables affecting the caller on client
	virtual void LocalOnInteract(AActor* Caller);

	// This should be for interactables affecting the caller
	virtual void OnInteract(AActor* Caller);
	
	// This should be for things like doors opening, pickups collected
	UFUNCTION(NetMulticast, Reliable)
	virtual void ReactToInteract();

	virtual void StartFocus();

	virtual void EndFocus();
};
