// Fill out your copyright notice in the Description page of Project Settings.


#include "Floats/Ship.h"
#include "Components/StaticMeshComponent.h" 
#include "Components/ChildActorComponent.h"
//#include "BuoyancyComponent.h"


// Sets default values
AShip::AShip()
{
 	// Set this pawn to call Tick() every frame.  You can turn this off to improve performance if you don't need it.
	PrimaryActorTick.bCanEverTick = true;

	ShipMesh = CreateDefaultSubobject<UStaticMeshComponent>(TEXT("Ship"));
	SetRootComponent(ShipMesh);
	ShipMesh->SetSimulatePhysics(true);

	Helm = CreateDefaultSubobject<UChildActorComponent>(TEXT("Helm"));
	Helm->SetupAttachment(ShipMesh);

	Cannon1 = CreateDefaultSubobject<UChildActorComponent>(TEXT("Cannon1"));
	Cannon1->SetupAttachment(ShipMesh);

	//BuoyancyComponent = CreateDefaultSubobject<UBuoyancyComponent>(TEXT("Buoyancy"));
}

// Called when the game starts or when spawned
void AShip::BeginPlay()
{
	Super::BeginPlay();
	
}

// Called every frame
void AShip::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);

}

// Called to bind functionality to input
void AShip::SetupPlayerInputComponent(UInputComponent* PlayerInputComponent)
{
	Super::SetupPlayerInputComponent(PlayerInputComponent);

}

