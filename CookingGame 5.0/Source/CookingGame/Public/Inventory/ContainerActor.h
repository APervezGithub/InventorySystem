// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "Interact/InteractableBase.h"
#include "ContainerActor.generated.h"

/**
 * 
 */
UCLASS()
class COOKINGGAME_API AContainerActor : public AInteractableBase
{
	GENERATED_BODY()

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = Inventory, meta = (AllowPrivateAccess = "true"))
	class UInventoryComponent *InventoryComp;

public:
	AContainerActor();

	virtual void LocalOnInteract(AActor* Caller);

	virtual void OnInteract(AActor* Caller);

	virtual void ReactToInteract_Implementation() override;
};
