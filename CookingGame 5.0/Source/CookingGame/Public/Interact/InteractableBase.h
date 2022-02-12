// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/Actor.h"
#include "InteractInterface.h"
#include "InteractableBase.generated.h"

UCLASS()
class COOKINGGAME_API AInteractableBase : public AActor, public IInteractInterface
{
	GENERATED_BODY()

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = Mesh, meta = (AllowPrivateAccess = "true"))
	class UStaticMeshComponent *MeshComp;
	
public:	
	// Sets default values for this actor's properties
	AInteractableBase();

protected:
	// Called when the game starts or when spawned
	virtual void BeginPlay() override;

public:	
	// Called every frame
	virtual void Tick(float DeltaTime) override;

	virtual void OnInteract(AActor* Caller);

	virtual void ReactToInteract_Implementation() override;

	virtual void StartFocus();

	virtual void EndFocus();

	UPROPERTY(BlueprintReadWrite, EditAnywhere)
	struct FInteractableData InteractableData;

};
