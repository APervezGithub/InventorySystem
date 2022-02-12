// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
class UStaticMesh;
class IInteractInterface;
class AActor;
class AContainerActor;
#ifdef COOKINGGAME_CookingGameCharacter_generated_h
#error "CookingGameCharacter.generated.h already included, missing '#pragma once' in CookingGameCharacter.h"
#endif
#define COOKINGGAME_CookingGameCharacter_generated_h

#define CookingGame_5_0_Source_CookingGame_CookingGameCharacter_h_28_SPARSE_DATA
#define CookingGame_5_0_Source_CookingGame_CookingGameCharacter_h_28_RPC_WRAPPERS \
	virtual bool InteractServer_Validate(); \
	virtual void InteractServer_Implementation(); \
 \
	DECLARE_FUNCTION(execInteractServer); \
	DECLARE_FUNCTION(execUpdateInventoryPreviewMesh);


#define CookingGame_5_0_Source_CookingGame_CookingGameCharacter_h_28_RPC_WRAPPERS_NO_PURE_DECLS \
	virtual bool InteractServer_Validate(); \
	virtual void InteractServer_Implementation(); \
 \
	DECLARE_FUNCTION(execInteractServer); \
	DECLARE_FUNCTION(execUpdateInventoryPreviewMesh);


#define CookingGame_5_0_Source_CookingGame_CookingGameCharacter_h_28_EVENT_PARMS \
	struct CookingGameCharacter_eventAddInteractUI_Parms \
	{ \
		TScriptInterface<IInteractInterface> Interface; \
		AActor* Actor; \
	}; \
	struct CookingGameCharacter_eventOpenInventoryTransfer_Parms \
	{ \
		AContainerActor* Container; \
	};


#define CookingGame_5_0_Source_CookingGame_CookingGameCharacter_h_28_CALLBACK_WRAPPERS
#define CookingGame_5_0_Source_CookingGame_CookingGameCharacter_h_28_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesACookingGameCharacter(); \
	friend struct Z_Construct_UClass_ACookingGameCharacter_Statics; \
public: \
	DECLARE_CLASS(ACookingGameCharacter, ACharacter, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/CookingGame"), NO_API) \
	DECLARE_SERIALIZER(ACookingGameCharacter) \
	virtual UObject* _getUObject() const override { return const_cast<ACookingGameCharacter*>(this); }


#define CookingGame_5_0_Source_CookingGame_CookingGameCharacter_h_28_INCLASS \
private: \
	static void StaticRegisterNativesACookingGameCharacter(); \
	friend struct Z_Construct_UClass_ACookingGameCharacter_Statics; \
public: \
	DECLARE_CLASS(ACookingGameCharacter, ACharacter, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/CookingGame"), NO_API) \
	DECLARE_SERIALIZER(ACookingGameCharacter) \
	virtual UObject* _getUObject() const override { return const_cast<ACookingGameCharacter*>(this); }


#define CookingGame_5_0_Source_CookingGame_CookingGameCharacter_h_28_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API ACookingGameCharacter(const FObjectInitializer& ObjectInitializer); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(ACookingGameCharacter) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, ACookingGameCharacter); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(ACookingGameCharacter); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API ACookingGameCharacter(ACookingGameCharacter&&); \
	NO_API ACookingGameCharacter(const ACookingGameCharacter&); \
public:


#define CookingGame_5_0_Source_CookingGame_CookingGameCharacter_h_28_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API ACookingGameCharacter(ACookingGameCharacter&&); \
	NO_API ACookingGameCharacter(const ACookingGameCharacter&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, ACookingGameCharacter); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(ACookingGameCharacter); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(ACookingGameCharacter)


#define CookingGame_5_0_Source_CookingGame_CookingGameCharacter_h_28_PRIVATE_PROPERTY_OFFSET \
	FORCEINLINE static uint32 __PPO__CameraBoom() { return STRUCT_OFFSET(ACookingGameCharacter, CameraBoom); } \
	FORCEINLINE static uint32 __PPO__FollowCamera() { return STRUCT_OFFSET(ACookingGameCharacter, FollowCamera); } \
	FORCEINLINE static uint32 __PPO__Inventory() { return STRUCT_OFFSET(ACookingGameCharacter, Inventory); } \
	FORCEINLINE static uint32 __PPO__CaptureStudio() { return STRUCT_OFFSET(ACookingGameCharacter, CaptureStudio); }


#define CookingGame_5_0_Source_CookingGame_CookingGameCharacter_h_25_PROLOG \
	CookingGame_5_0_Source_CookingGame_CookingGameCharacter_h_28_EVENT_PARMS


#define CookingGame_5_0_Source_CookingGame_CookingGameCharacter_h_28_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	CookingGame_5_0_Source_CookingGame_CookingGameCharacter_h_28_PRIVATE_PROPERTY_OFFSET \
	CookingGame_5_0_Source_CookingGame_CookingGameCharacter_h_28_SPARSE_DATA \
	CookingGame_5_0_Source_CookingGame_CookingGameCharacter_h_28_RPC_WRAPPERS \
	CookingGame_5_0_Source_CookingGame_CookingGameCharacter_h_28_CALLBACK_WRAPPERS \
	CookingGame_5_0_Source_CookingGame_CookingGameCharacter_h_28_INCLASS \
	CookingGame_5_0_Source_CookingGame_CookingGameCharacter_h_28_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define CookingGame_5_0_Source_CookingGame_CookingGameCharacter_h_28_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	CookingGame_5_0_Source_CookingGame_CookingGameCharacter_h_28_PRIVATE_PROPERTY_OFFSET \
	CookingGame_5_0_Source_CookingGame_CookingGameCharacter_h_28_SPARSE_DATA \
	CookingGame_5_0_Source_CookingGame_CookingGameCharacter_h_28_RPC_WRAPPERS_NO_PURE_DECLS \
	CookingGame_5_0_Source_CookingGame_CookingGameCharacter_h_28_CALLBACK_WRAPPERS \
	CookingGame_5_0_Source_CookingGame_CookingGameCharacter_h_28_INCLASS_NO_PURE_DECLS \
	CookingGame_5_0_Source_CookingGame_CookingGameCharacter_h_28_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> COOKINGGAME_API UClass* StaticClass<class ACookingGameCharacter>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID CookingGame_5_0_Source_CookingGame_CookingGameCharacter_h


#define FOREACH_ENUM_EEQUIPPEDITEM(op) \
	op(None) \
	op(Pistol) \
	op(Rifle) \
	op(Shotgun) \
	op(Sniper) \
	op(Smg) \
	op(Telescope) \
	op(Bucket) 
PRAGMA_ENABLE_DEPRECATION_WARNINGS
