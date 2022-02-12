// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/Pawn.h"
#include "Ship.generated.h"

UCLASS()
class COOKINGGAME_API AShip : public APawn
{
	GENERATED_BODY()
public:
	// Sets default values for this pawn's properties
	AShip();

	UPROPERTY(EditDefaultsOnly, BlueprintReadOnly, Category = Ship, meta = (AllowPrivateAccess = "true"))
	class UStaticMeshComponent* ShipMesh;

	UPROPERTY(EditDefaultsOnly, BlueprintReadOnly, Category = Ship, meta = (AllowPrivateAccess = "true"))
	class UChildActorComponent* Helm;

	UPROPERTY(EditDefaultsOnly, BlueprintReadOnly, Category = Ship, meta = (AllowPrivateAccess = "true"))
	class UChildActorComponent* Cannon1;

	//UPROPERTY(EditDefaultsOnly, BlueprintReadOnly, Category = Ship, meta = (AllowPrivateAccess = "true"))
	//class UBuoyancyComponent* BuoyancyComponent;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = Movement)
	float MaxMovementSpeed = 500;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = Movement)
	float MaxTurningSpeed = 1;

	// class AHelm HelmReference;

	//TArray<class ACannon> CannonArray;

protected:
	// Called when the game starts or when spawned
	virtual void BeginPlay() override;

public:	
	// Called every frame
	virtual void Tick(float DeltaTime) override;

	// Called to bind functionality to input
	virtual void SetupPlayerInputComponent(class UInputComponent* PlayerInputComponent) override;

};
