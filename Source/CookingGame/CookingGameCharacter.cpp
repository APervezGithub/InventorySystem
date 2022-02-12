// Copyright Epic Games, Inc. All Rights Reserved.

#include "CookingGameCharacter.h"
#include "HeadMountedDisplayFunctionLibrary.h"
#include "Camera/CameraComponent.h"
#include "Components/CapsuleComponent.h"
#include "Components/InputComponent.h"
#include "Components/ChildActorComponent.h" 
#include "GameFramework/CharacterMovementComponent.h"
#include "GameFramework/Controller.h"
#include "GameFramework/SpringArmComponent.h"
#include "Inventory/InventoryComponent.h"
#include "Inventory/CaptureStudio.h"
#include "Runtime/CoreUObject/Public/UObject/SoftObjectPtr.h"
#include "Kismet/KismetSystemLibrary.h"
#include "Interact/InteractInterface.h"
#include "Character/CookingGameController.h"
#include "Net/UnrealNetwork.h"

//////////////////////////////////////////////////////////////////////////
// ACookingGameCharacter

ACookingGameCharacter::ACookingGameCharacter()
{
	// Set size for collision capsule
	GetCapsuleComponent()->InitCapsuleSize(42.f, 96.0f);

	// set our turn rates for input
	BaseTurnRate = 45.f;
	BaseLookUpRate = 45.f;

	// Don't rotate when the controller rotates. Let that just affect the camera.
	bUseControllerRotationPitch = false;
	bUseControllerRotationYaw = false;
	bUseControllerRotationRoll = false;

	// Configure character movement
	GetCharacterMovement()->bOrientRotationToMovement = true;			 // Character moves in the direction of input...
	GetCharacterMovement()->RotationRate = FRotator(0.0f, 540.0f, 0.0f); // ...at this rotation rate
	GetCharacterMovement()->JumpZVelocity = 600.f;
	GetCharacterMovement()->AirControl = 0.2f;

	// Create a camera boom (pulls in towards the player if there is a collision)
	CameraBoom = CreateDefaultSubobject<USpringArmComponent>(TEXT("CameraBoom"));
	CameraBoom->SetupAttachment(RootComponent);
	CameraBoom->TargetArmLength = 300.0f;		// The camera follows at this distance behind the character
	CameraBoom->bUsePawnControlRotation = true; // Rotate the arm based on the controller

	// Create a follow camera
	FollowCamera = CreateDefaultSubobject<UCameraComponent>(TEXT("FollowCamera"));
	FollowCamera->SetupAttachment(CameraBoom, USpringArmComponent::SocketName); // Attach the camera to the end of the boom and let the boom adjust to match the controller orientation
	FollowCamera->bUsePawnControlRotation = false;								// Camera does not rotate relative to arm

	// Create a inventory component
	Inventory = CreateDefaultSubobject<UInventoryComponent>(TEXT("Inventory"));
	Inventory->SetIsReplicated(true);

	// Create a capture studio component
	CaptureStudio = CreateDefaultSubobject<UChildActorComponent>(TEXT("CaptureStudio"));
	CaptureStudio->SetChildActorClass(ACaptureStudio::StaticClass());
	CaptureStudio->SetupAttachment(RootComponent);

	// Note: The skeletal mesh and anim blueprint references on the Mesh component (inherited from Character)
	// are set in the derived blueprint asset named MyCharacter (to avoid direct content references in C++)
}

void ACookingGameCharacter::BeginPlay()
{
	Super::BeginPlay();
	if (GetController())
	{
		CookingGameController = Cast<ACookingGameController>(GetController());
		CookingGameController->OwnInventory = Inventory;
	}
	CaptureStudioRef = Cast<ACaptureStudio>(CaptureStudio->GetChildActor());
	Inventory->RelevantPlayers.Add(this);
}

void ACookingGameCharacter::Tick(float DeltaSeconds)
{
	FHitResult HitResult;
	FCollisionQueryParams RV_TraceParams = FCollisionQueryParams(FName(TEXT("RV_Trace")), true, this);
	bool bHit = CameraTrace(&HitResult, &RV_TraceParams);
}

void ACookingGameCharacter::UpdateInventoryPreviewMesh(class UStaticMesh* NewMesh)
{
	CaptureStudioRef->SetDisplayMesh(NewMesh);
}

void ACookingGameCharacter::OnInteract(AActor *Caller)
{
}

void ACookingGameCharacter::ReactToInteract_Implementation()
{   
}

void ACookingGameCharacter::StartFocus()
{
}

void ACookingGameCharacter::EndFocus()
{
}

bool ACookingGameCharacter::CameraTrace(FHitResult *HitResult, FCollisionQueryParams *RV_TraceParams)
{
	if (Controller == NULL) // access the controller, make sure we have one
	{
		return false;
	}

	// get the camera transform
	FVector CameraLoc = GetFollowCamera()->GetComponentLocation();
	FRotator CameraRot = GetFollowCamera()->GetComponentRotation();
	//GetActorEyesViewPoint(CameraLoc, CameraRot);

	FVector Start = CameraLoc;
	FVector End = CameraLoc + (CameraRot.Vector() * PlayerInteractionDistance);

	TArray<AActor *> ActorsToIgnore;
	//  do the line trace
	bool bHit = UKismetSystemLibrary::LineTraceSingle(this, Start, End, UEngineTypes::ConvertToTraceType(ECC_Camera),
													  false, ActorsToIgnore, EDrawDebugTrace::ForDuration, *HitResult, true, FLinearColor::Yellow, FLinearColor::White,
													  0.1f); 

	// If the line trace hits something
	if (bHit)
	{
		// If the hit object is interactable
		AActor *Interactable = HitResult->GetActor();
		if (Interactable)
		{
			// Change the focuesed actor
			if (Interactable != FocusedActor)
			{
				if (FocusedActor)
				{
					IInteractInterface *Interface = Cast<IInteractInterface>(FocusedActor);
					if (Interface)
					{
						Interface->EndFocus();
					}
					if (!HasAuthority())
					{
						RemoveInteractUI();
					}
				}
				// Set new focused actor
				IInteractInterface *Interface = Cast<IInteractInterface>(Interactable);
				TScriptInterface<IInteractInterface> TInterface;
				TInterface.SetInterface(Interface);
				TInterface.SetObject(Interactable);
				if (Interface)
				{
					Interface->StartFocus();
					if (!HasAuthority())
					{
						AddInteractUI(TInterface, Interactable);
					}
				}
				FocusedActor = Interactable;
			}
		}
	}
	else
	{
		// Remove the focused actor
		if (FocusedActor)
		{
			IInteractInterface *Interface = Cast<IInteractInterface>(FocusedActor);
			if (Interface)
			{
				Interface->EndFocus();
			}
			if (!HasAuthority())
			{
				RemoveInteractUI();
			}
			FocusedActor = nullptr;
		}
	}

	return bHit;
}

void ACookingGameCharacter::InteractLocal()
{
	if (FocusedActor)
	{
		// Tell the focused actor it was interacted with
		IInteractInterface* Interface = Cast<IInteractInterface>(FocusedActor);
		if (Interface)
		{
			Interface->LocalOnInteract(this);
		}
	}
}

void ACookingGameCharacter::InteractServer_Implementation()
{
	// Check if an object is actually in line of sight
	FHitResult HitResult;
	FCollisionQueryParams RV_TraceParams = FCollisionQueryParams(FName(TEXT("RV_Trace")), true, this);
	bool bHit = CameraTrace(&HitResult, &RV_TraceParams);
	if (bHit)
	{
		if (FocusedActor)
		{
			// Tell the focused actor it was interacted with
			IInteractInterface *Interface = Cast<IInteractInterface>(FocusedActor);
			if (Interface)
			{
				Interface->OnInteract(this);
			}
		}
	}
}

bool ACookingGameCharacter::InteractServer_Validate()
{
	return true;
}

void ACookingGameCharacter::InteractPressed()
{
	if (!HasAuthority())
	{
		InteractServer();
	}
	InteractLocal();
}

//////////////////////////////////////////////////////////////////////////
// Input

void ACookingGameCharacter::SetupPlayerInputComponent(class UInputComponent *PlayerInputComponent)
{
	// Set up gameplay key bindings
	check(PlayerInputComponent);
	PlayerInputComponent->BindAction("PrimaryInteract", IE_Pressed, this, &ACookingGameCharacter::InteractPressed);

	PlayerInputComponent->BindAction("Jump", IE_Pressed, this, &ACharacter::Jump);
	PlayerInputComponent->BindAction("Jump", IE_Released, this, &ACharacter::StopJumping);

	PlayerInputComponent->BindAxis("MoveForward", this, &ACookingGameCharacter::MoveForward);
	PlayerInputComponent->BindAxis("MoveRight", this, &ACookingGameCharacter::MoveRight);

	// We have 2 versions of the rotation bindings to handle different kinds of devices differently
	// "turn" handles devices that provide an absolute delta, such as a mouse.
	// "turnrate" is for devices that we choose to treat as a rate of change, such as an analog joystick
	PlayerInputComponent->BindAxis("Turn", this, &APawn::AddControllerYawInput);
	PlayerInputComponent->BindAxis("TurnRate", this, &ACookingGameCharacter::TurnAtRate);
	PlayerInputComponent->BindAxis("LookUp", this, &APawn::AddControllerPitchInput);
	PlayerInputComponent->BindAxis("LookUpRate", this, &ACookingGameCharacter::LookUpAtRate);

	// handle touch devices
	PlayerInputComponent->BindTouch(IE_Pressed, this, &ACookingGameCharacter::TouchStarted);
	PlayerInputComponent->BindTouch(IE_Released, this, &ACookingGameCharacter::TouchStopped);

	// VR headset functionality
	PlayerInputComponent->BindAction("ResetVR", IE_Pressed, this, &ACookingGameCharacter::OnResetVR);
}

void ACookingGameCharacter::OnResetVR()
{
	// If CookingGame is added to a project via 'Add Feature' in the Unreal Editor the dependency on HeadMountedDisplay in CookingGame.Build.cs is not automatically propagated
	// and a linker error will result.
	// You will need to either:
	//		Add "HeadMountedDisplay" to [YourProject].Build.cs PublicDependencyModuleNames in order to build successfully (appropriate if supporting VR).
	// or:
	//		Comment or delete the call to ResetOrientationAndPosition below (appropriate if not supporting VR)
	UHeadMountedDisplayFunctionLibrary::ResetOrientationAndPosition();
}

void ACookingGameCharacter::TouchStarted(ETouchIndex::Type FingerIndex, FVector Location)
{
	Jump();
}

void ACookingGameCharacter::TouchStopped(ETouchIndex::Type FingerIndex, FVector Location)
{
	StopJumping();
}

void ACookingGameCharacter::TurnAtRate(float Rate)
{
	// calculate delta for this frame from the rate information
	AddControllerYawInput(Rate * BaseTurnRate * GetWorld()->GetDeltaSeconds());
}

void ACookingGameCharacter::LookUpAtRate(float Rate)
{
	// calculate delta for this frame from the rate information
	AddControllerPitchInput(Rate * BaseLookUpRate * GetWorld()->GetDeltaSeconds());
}

void ACookingGameCharacter::MoveForward(float Value)
{
	if ((Controller != nullptr) && (Value != 0.0f))
	{
		// find out which way is forward
		const FRotator Rotation = Controller->GetControlRotation();
		const FRotator YawRotation(0, Rotation.Yaw, 0);

		// get forward vector
		const FVector Direction = FRotationMatrix(YawRotation).GetUnitAxis(EAxis::X);
		AddMovementInput(Direction, Value);
	}
}

void ACookingGameCharacter::MoveRight(float Value)
{
	if ((Controller != nullptr) && (Value != 0.0f))
	{
		// find out which way is right
		const FRotator Rotation = Controller->GetControlRotation();
		const FRotator YawRotation(0, Rotation.Yaw, 0);

		// get right vector
		const FVector Direction = FRotationMatrix(YawRotation).GetUnitAxis(EAxis::Y);
		// add movement in that direction
		AddMovementInput(Direction, Value);
	}
}
