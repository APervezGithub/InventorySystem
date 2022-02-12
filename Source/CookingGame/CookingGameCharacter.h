// Copyright Epic Games, Inc. All Rights Reserved.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/Character.h"
#include "Interact/InteractInterface.h"
#include "CookingGameCharacter.generated.h"

UENUM()
enum EEquippedItem
{
	None,
	Pistol,
	Rifle,
	Shotgun,
	Sniper,
	Smg,
	Telescope,
	Bucket,


};

UCLASS(config = Game)
class ACookingGameCharacter : public ACharacter, public IInteractInterface
{
	GENERATED_BODY()

	/** Camera boom positioning the camera behind the character */
	UPROPERTY(VisibleAnywhere, BlueprintReadOnly, Category = Camera, meta = (AllowPrivateAccess = "true"))
	class USpringArmComponent *CameraBoom;

	/** Follow camera */
	UPROPERTY(VisibleAnywhere, BlueprintReadOnly, Category = Camera, meta = (AllowPrivateAccess = "true"))
	class UCameraComponent *FollowCamera;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = Inventory, meta = (AllowPrivateAccess = "true"))
	class UInventoryComponent *Inventory;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = Inventory, meta = (AllowPrivateAccess = "true"))
	class UChildActorComponent *CaptureStudio;

public:
	ACookingGameCharacter();

	/** Base turn rate, in deg/sec. Other scaling may affect final turn rate. */
	UPROPERTY(VisibleAnywhere, BlueprintReadOnly, Category = Camera)
	float BaseTurnRate;

	/** Base look up/down rate, in deg/sec. Other scaling may affect final rate. */
	UPROPERTY(VisibleAnywhere, BlueprintReadOnly, Category = Camera)
	float BaseLookUpRate;

	/** How far the player can interact with an object */
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = Camera)
	float PlayerInteractionDistance;

	UPROPERTY(BlueprintReadWrite, EditAnywhere)
	struct FInteractableData InteractableData;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = Inventory, meta = (AllowPrivateAccess = "true"))
	class ACaptureStudio* CaptureStudioRef;

	AActor* FocusedActor;

	class ACookingGameController* CookingGameController;

	UFUNCTION(BlueprintImplementableEvent)
	void OpenInventoryTransfer(class AContainerActor *Container);

	UFUNCTION(BlueprintImplementableEvent)
	void RefreshInventories();

	UFUNCTION(BlueprintCallable)
	void UpdateInventoryPreviewMesh(class UStaticMesh* NewMesh);

protected:
	/** Resets HMD orientation in VR. */
	void OnResetVR();

	/** Called when play begins */
	virtual void BeginPlay() override;

	/** Ticks every frame */
	virtual void Tick(float DeltaSeconds) override;

	/** Traces out from camera */
	bool CameraTrace(FHitResult *HitResult, FCollisionQueryParams *RV_TraceParams);

	/** Called for forwards/backward input */
	void MoveForward(float Value);

	/** Called for side to side input */
	void MoveRight(float Value);

	/** 
	 * Called via input to turn at a given rate. 
	 * @param Rate	This is a normalized rate, i.e. 1.0 means 100% of desired turn rate
	 */
	void TurnAtRate(float Rate);

	/**
	 * Called via input to turn look up/down at a given rate. 
	 * @param Rate	This is a normalized rate, i.e. 1.0 means 100% of desired turn rate
	 */
	void LookUpAtRate(float Rate);

	/** Handler for when a touch input begins. */
	void TouchStarted(ETouchIndex::Type FingerIndex, FVector Location);

	/** Handler for when a touch input stops. */
	void TouchStopped(ETouchIndex::Type FingerIndex, FVector Location);

	virtual void OnInteract(AActor *Caller);

	virtual void ReactToInteract_Implementation() override;

	virtual void StartFocus();

	virtual void EndFocus();

	// APawn interface
	virtual void SetupPlayerInputComponent(class UInputComponent *PlayerInputComponent) override;
	// End of APawn interface

	void InteractPressed();

	void InteractLocal();

	UFUNCTION(Server, Reliable, WithValidation)
	void InteractServer();

	UFUNCTION(BlueprintImplementableEvent)
	void AddInteractUI(const TScriptInterface<IInteractInterface> &Interface,
					   AActor *Actor);

	UFUNCTION(BlueprintImplementableEvent)
	void RemoveInteractUI();

public:
	/** Returns CameraBoom subobject **/
	FORCEINLINE class USpringArmComponent *GetCameraBoom() const { return CameraBoom; }
	/** Returns FollowCamera subobject **/
	FORCEINLINE class UCameraComponent *GetFollowCamera() const { return FollowCamera; }
};
