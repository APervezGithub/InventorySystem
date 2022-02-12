// Fill out your copyright notice in the Description page of Project Settings.


#include "Inventory/CaptureStudio.h"
#include "Components/StaticMeshComponent.h"
#include "Components/SceneComponent.h" 

// Sets default values
ACaptureStudio::ACaptureStudio()
{
 	// Set this actor to call Tick() every frame.  You can turn this off to improve performance if you don't need it.
	PrimaryActorTick.bCanEverTick = true;
	
	SceneComponent = CreateDefaultSubobject<USceneComponent>(TEXT("SceneComponent"));
	RootComponent = SceneComponent;

	DisplayMesh = CreateDefaultSubobject<UStaticMeshComponent>(TEXT("DisplayMesh"));
	DisplayMesh->SetupAttachment(RootComponent);

	MeshRotation = FRotator(0.0f, 0.0f, 0.0f);

	RotationSpeed = 1.0f;
}

// Called when the game starts or when spawned
void ACaptureStudio::BeginPlay()
{
	Super::BeginPlay();
	
}

// Called every frame
void ACaptureStudio::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);
	MeshRotation.Yaw += RotationSpeed;
	DisplayMesh->SetWorldRotation(MeshRotation);
}
