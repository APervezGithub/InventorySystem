// Fill out your copyright notice in the Description page of Project Settings.


#include "Interact/InteractableBase.h"
#include "Components/StaticMeshComponent.h" 

// Sets default values
AInteractableBase::AInteractableBase()
{
 	// Set this actor to call Tick() every frame.  You can turn this off to improve performance if you don't need it.
	PrimaryActorTick.bCanEverTick = false;

	MeshComp = CreateDefaultSubobject<UStaticMeshComponent>(TEXT("Mesh Component"));
	SetRootComponent(MeshComp);

	MeshComp->SetRenderCustomDepth(true);
}

// Called when the game starts or when spawned
void AInteractableBase::BeginPlay()
{
	Super::BeginPlay();
	
}

void AInteractableBase::OnInteract(AActor* Caller)
{
	
}

void AInteractableBase::ReactToInteract_Implementation()
{
    
}

void AInteractableBase::StartFocus()
{
	//GEngine->AddOnScreenDebugMessage(-1, 15.0f, FColor::Green, TEXT("Start Focus"));
}

void AInteractableBase::EndFocus()
{
	//GEngine->AddOnScreenDebugMessage(-1, 15.0f, FColor::Orange, TEXT("End Focus"));
}

// Called every frame
void AInteractableBase::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);

}

