// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
class UInventoryComponent;
struct FSlotStructure;
#ifdef COOKINGGAME_CookingGameController_generated_h
#error "CookingGameController.generated.h already included, missing '#pragma once' in CookingGameController.h"
#endif
#define COOKINGGAME_CookingGameController_generated_h

#define CookingGame_5_0_Source_CookingGame_Public_Character_CookingGameController_h_16_SPARSE_DATA
#define CookingGame_5_0_Source_CookingGame_Public_Character_CookingGameController_h_16_RPC_WRAPPERS \
	virtual bool Server_SetInteractingInventory_Validate(UInventoryComponent* ); \
	virtual void Server_SetInteractingInventory_Implementation(UInventoryComponent* NewInventory); \
	virtual bool Server_SetOwnInventory_Validate(UInventoryComponent* ); \
	virtual void Server_SetOwnInventory_Implementation(UInventoryComponent* NewInventory); \
	virtual bool Server_UseItem_Validate(int32 ); \
	virtual void Server_UseItem_Implementation(int32 ItemIndex); \
	virtual bool Server_TransferBetweenInventories_Validate(UInventoryComponent* , UInventoryComponent* , int32 , int32 , FSlotStructure ); \
	virtual void Server_TransferBetweenInventories_Implementation(UInventoryComponent* ReceivingInventory, UInventoryComponent* GivingInventory, int32 GivingSlotIndex, int32 Quantity, FSlotStructure Item); \
	virtual bool Server_GiveToContainer_Validate(UInventoryComponent* , FSlotStructure ); \
	virtual void Server_GiveToContainer_Implementation(UInventoryComponent* OtherInventory, FSlotStructure Item); \
	virtual bool Server_TakeFromContainer_Validate(UInventoryComponent* , int32 , int32 ); \
	virtual void Server_TakeFromContainer_Implementation(UInventoryComponent* OtherInventory, int32 SlotIndex, int32 Quantity); \
 \
	DECLARE_FUNCTION(execServer_SetInteractingInventory); \
	DECLARE_FUNCTION(execServer_SetOwnInventory); \
	DECLARE_FUNCTION(execServer_UseItem); \
	DECLARE_FUNCTION(execServer_TransferBetweenInventories); \
	DECLARE_FUNCTION(execServer_GiveToContainer); \
	DECLARE_FUNCTION(execServer_TakeFromContainer);


#define CookingGame_5_0_Source_CookingGame_Public_Character_CookingGameController_h_16_RPC_WRAPPERS_NO_PURE_DECLS \
	virtual bool Server_SetInteractingInventory_Validate(UInventoryComponent* ); \
	virtual void Server_SetInteractingInventory_Implementation(UInventoryComponent* NewInventory); \
	virtual bool Server_SetOwnInventory_Validate(UInventoryComponent* ); \
	virtual void Server_SetOwnInventory_Implementation(UInventoryComponent* NewInventory); \
	virtual bool Server_UseItem_Validate(int32 ); \
	virtual void Server_UseItem_Implementation(int32 ItemIndex); \
	virtual bool Server_TransferBetweenInventories_Validate(UInventoryComponent* , UInventoryComponent* , int32 , int32 , FSlotStructure ); \
	virtual void Server_TransferBetweenInventories_Implementation(UInventoryComponent* ReceivingInventory, UInventoryComponent* GivingInventory, int32 GivingSlotIndex, int32 Quantity, FSlotStructure Item); \
	virtual bool Server_GiveToContainer_Validate(UInventoryComponent* , FSlotStructure ); \
	virtual void Server_GiveToContainer_Implementation(UInventoryComponent* OtherInventory, FSlotStructure Item); \
	virtual bool Server_TakeFromContainer_Validate(UInventoryComponent* , int32 , int32 ); \
	virtual void Server_TakeFromContainer_Implementation(UInventoryComponent* OtherInventory, int32 SlotIndex, int32 Quantity); \
 \
	DECLARE_FUNCTION(execServer_SetInteractingInventory); \
	DECLARE_FUNCTION(execServer_SetOwnInventory); \
	DECLARE_FUNCTION(execServer_UseItem); \
	DECLARE_FUNCTION(execServer_TransferBetweenInventories); \
	DECLARE_FUNCTION(execServer_GiveToContainer); \
	DECLARE_FUNCTION(execServer_TakeFromContainer);


#define CookingGame_5_0_Source_CookingGame_Public_Character_CookingGameController_h_16_EVENT_PARMS \
	struct CookingGameController_eventServer_GiveToContainer_Parms \
	{ \
		UInventoryComponent* OtherInventory; \
		FSlotStructure Item; \
	}; \
	struct CookingGameController_eventServer_SetInteractingInventory_Parms \
	{ \
		UInventoryComponent* NewInventory; \
	}; \
	struct CookingGameController_eventServer_SetOwnInventory_Parms \
	{ \
		UInventoryComponent* NewInventory; \
	}; \
	struct CookingGameController_eventServer_TakeFromContainer_Parms \
	{ \
		UInventoryComponent* OtherInventory; \
		int32 SlotIndex; \
		int32 Quantity; \
	}; \
	struct CookingGameController_eventServer_TransferBetweenInventories_Parms \
	{ \
		UInventoryComponent* ReceivingInventory; \
		UInventoryComponent* GivingInventory; \
		int32 GivingSlotIndex; \
		int32 Quantity; \
		FSlotStructure Item; \
	}; \
	struct CookingGameController_eventServer_UseItem_Parms \
	{ \
		int32 ItemIndex; \
	};


#define CookingGame_5_0_Source_CookingGame_Public_Character_CookingGameController_h_16_CALLBACK_WRAPPERS
#define CookingGame_5_0_Source_CookingGame_Public_Character_CookingGameController_h_16_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesACookingGameController(); \
	friend struct Z_Construct_UClass_ACookingGameController_Statics; \
public: \
	DECLARE_CLASS(ACookingGameController, APlayerController, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/CookingGame"), NO_API) \
	DECLARE_SERIALIZER(ACookingGameController) \
	enum class ENetFields_Private : uint16 \
	{ \
		NETFIELD_REP_START=(uint16)((int32)Super::ENetFields_Private::NETFIELD_REP_END + (int32)1), \
		OwnInventory=NETFIELD_REP_START, \
		InteractingInventory, \
		NETFIELD_REP_END=InteractingInventory	}; \
	NO_API virtual void ValidateGeneratedRepEnums(const TArray<struct FRepRecord>& ClassReps) const override;


#define CookingGame_5_0_Source_CookingGame_Public_Character_CookingGameController_h_16_INCLASS \
private: \
	static void StaticRegisterNativesACookingGameController(); \
	friend struct Z_Construct_UClass_ACookingGameController_Statics; \
public: \
	DECLARE_CLASS(ACookingGameController, APlayerController, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/CookingGame"), NO_API) \
	DECLARE_SERIALIZER(ACookingGameController) \
	enum class ENetFields_Private : uint16 \
	{ \
		NETFIELD_REP_START=(uint16)((int32)Super::ENetFields_Private::NETFIELD_REP_END + (int32)1), \
		OwnInventory=NETFIELD_REP_START, \
		InteractingInventory, \
		NETFIELD_REP_END=InteractingInventory	}; \
	NO_API virtual void ValidateGeneratedRepEnums(const TArray<struct FRepRecord>& ClassReps) const override;


#define CookingGame_5_0_Source_CookingGame_Public_Character_CookingGameController_h_16_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API ACookingGameController(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(ACookingGameController) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, ACookingGameController); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(ACookingGameController); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API ACookingGameController(ACookingGameController&&); \
	NO_API ACookingGameController(const ACookingGameController&); \
public:


#define CookingGame_5_0_Source_CookingGame_Public_Character_CookingGameController_h_16_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API ACookingGameController(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()) : Super(ObjectInitializer) { }; \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API ACookingGameController(ACookingGameController&&); \
	NO_API ACookingGameController(const ACookingGameController&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, ACookingGameController); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(ACookingGameController); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(ACookingGameController)


#define CookingGame_5_0_Source_CookingGame_Public_Character_CookingGameController_h_16_PRIVATE_PROPERTY_OFFSET
#define CookingGame_5_0_Source_CookingGame_Public_Character_CookingGameController_h_13_PROLOG \
	CookingGame_5_0_Source_CookingGame_Public_Character_CookingGameController_h_16_EVENT_PARMS


#define CookingGame_5_0_Source_CookingGame_Public_Character_CookingGameController_h_16_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	CookingGame_5_0_Source_CookingGame_Public_Character_CookingGameController_h_16_PRIVATE_PROPERTY_OFFSET \
	CookingGame_5_0_Source_CookingGame_Public_Character_CookingGameController_h_16_SPARSE_DATA \
	CookingGame_5_0_Source_CookingGame_Public_Character_CookingGameController_h_16_RPC_WRAPPERS \
	CookingGame_5_0_Source_CookingGame_Public_Character_CookingGameController_h_16_CALLBACK_WRAPPERS \
	CookingGame_5_0_Source_CookingGame_Public_Character_CookingGameController_h_16_INCLASS \
	CookingGame_5_0_Source_CookingGame_Public_Character_CookingGameController_h_16_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define CookingGame_5_0_Source_CookingGame_Public_Character_CookingGameController_h_16_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	CookingGame_5_0_Source_CookingGame_Public_Character_CookingGameController_h_16_PRIVATE_PROPERTY_OFFSET \
	CookingGame_5_0_Source_CookingGame_Public_Character_CookingGameController_h_16_SPARSE_DATA \
	CookingGame_5_0_Source_CookingGame_Public_Character_CookingGameController_h_16_RPC_WRAPPERS_NO_PURE_DECLS \
	CookingGame_5_0_Source_CookingGame_Public_Character_CookingGameController_h_16_CALLBACK_WRAPPERS \
	CookingGame_5_0_Source_CookingGame_Public_Character_CookingGameController_h_16_INCLASS_NO_PURE_DECLS \
	CookingGame_5_0_Source_CookingGame_Public_Character_CookingGameController_h_16_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> COOKINGGAME_API UClass* StaticClass<class ACookingGameController>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID CookingGame_5_0_Source_CookingGame_Public_Character_CookingGameController_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
