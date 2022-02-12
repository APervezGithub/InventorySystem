// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/Actor.h"
#include "CaptureStudio.generated.h"

UCLASS()
class COOKINGGAME_API ACaptureStudio : public AActor
{
	GENERATED_BODY()
	
public:	
	// Sets default values for this actor's properties
	ACaptureStudio();

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	class USceneComponent* SceneComponent;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	class UStaticMeshComponent* DisplayMesh;

	FRotator MeshRotation;

	float RotationSpeed;

	UFUNCTION(BlueprintImplementableEvent)
	void SetDisplayMesh(class UStaticMesh* NewMesh);

protected:
	// Called when the game starts or when spawned
	virtual void BeginPlay() override;

public:	
	// Called every frame
	virtual void Tick(float DeltaTime) override;

};
