// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef COOKINGGAME_PickupActor_generated_h
#error "PickupActor.generated.h already included, missing '#pragma once' in PickupActor.h"
#endif
#define COOKINGGAME_PickupActor_generated_h

#define CookingGame_5_0_Source_CookingGame_Public_Inventory_PickupActor_h_12_GENERATED_BODY \
	friend struct Z_Construct_UScriptStruct_FItemStructure_Statics; \
	COOKINGGAME_API static class UScriptStruct* StaticStruct();


template<> COOKINGGAME_API UScriptStruct* StaticStruct<struct FItemStructure>();

#define CookingGame_5_0_Source_CookingGame_Public_Inventory_PickupActor_h_54_SPARSE_DATA
#define CookingGame_5_0_Source_CookingGame_Public_Inventory_PickupActor_h_54_RPC_WRAPPERS \
	virtual bool UseItem_Validate(); \
	virtual void UseItem_Implementation(); \
 \
	DECLARE_FUNCTION(execUseItem);


#define CookingGame_5_0_Source_CookingGame_Public_Inventory_PickupActor_h_54_RPC_WRAPPERS_NO_PURE_DECLS \
	virtual bool UseItem_Validate(); \
	virtual void UseItem_Implementation(); \
 \
	DECLARE_FUNCTION(execUseItem);


#define CookingGame_5_0_Source_CookingGame_Public_Inventory_PickupActor_h_54_EVENT_PARMS
#define CookingGame_5_0_Source_CookingGame_Public_Inventory_PickupActor_h_54_CALLBACK_WRAPPERS
#define CookingGame_5_0_Source_CookingGame_Public_Inventory_PickupActor_h_54_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesAPickupActor(); \
	friend struct Z_Construct_UClass_APickupActor_Statics; \
public: \
	DECLARE_CLASS(APickupActor, AInteractableBase, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/CookingGame"), NO_API) \
	DECLARE_SERIALIZER(APickupActor)


#define CookingGame_5_0_Source_CookingGame_Public_Inventory_PickupActor_h_54_INCLASS \
private: \
	static void StaticRegisterNativesAPickupActor(); \
	friend struct Z_Construct_UClass_APickupActor_Statics; \
public: \
	DECLARE_CLASS(APickupActor, AInteractableBase, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/CookingGame"), NO_API) \
	DECLARE_SERIALIZER(APickupActor)


#define CookingGame_5_0_Source_CookingGame_Public_Inventory_PickupActor_h_54_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API APickupActor(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(APickupActor) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, APickupActor); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(APickupActor); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API APickupActor(APickupActor&&); \
	NO_API APickupActor(const APickupActor&); \
public:


#define CookingGame_5_0_Source_CookingGame_Public_Inventory_PickupActor_h_54_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API APickupActor() { }; \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API APickupActor(APickupActor&&); \
	NO_API APickupActor(const APickupActor&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, APickupActor); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(APickupActor); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(APickupActor)


#define CookingGame_5_0_Source_CookingGame_Public_Inventory_PickupActor_h_54_PRIVATE_PROPERTY_OFFSET
#define CookingGame_5_0_Source_CookingGame_Public_Inventory_PickupActor_h_51_PROLOG \
	CookingGame_5_0_Source_CookingGame_Public_Inventory_PickupActor_h_54_EVENT_PARMS


#define CookingGame_5_0_Source_CookingGame_Public_Inventory_PickupActor_h_54_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	CookingGame_5_0_Source_CookingGame_Public_Inventory_PickupActor_h_54_PRIVATE_PROPERTY_OFFSET \
	CookingGame_5_0_Source_CookingGame_Public_Inventory_PickupActor_h_54_SPARSE_DATA \
	CookingGame_5_0_Source_CookingGame_Public_Inventory_PickupActor_h_54_RPC_WRAPPERS \
	CookingGame_5_0_Source_CookingGame_Public_Inventory_PickupActor_h_54_CALLBACK_WRAPPERS \
	CookingGame_5_0_Source_CookingGame_Public_Inventory_PickupActor_h_54_INCLASS \
	CookingGame_5_0_Source_CookingGame_Public_Inventory_PickupActor_h_54_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define CookingGame_5_0_Source_CookingGame_Public_Inventory_PickupActor_h_54_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	CookingGame_5_0_Source_CookingGame_Public_Inventory_PickupActor_h_54_PRIVATE_PROPERTY_OFFSET \
	CookingGame_5_0_Source_CookingGame_Public_Inventory_PickupActor_h_54_SPARSE_DATA \
	CookingGame_5_0_Source_CookingGame_Public_Inventory_PickupActor_h_54_RPC_WRAPPERS_NO_PURE_DECLS \
	CookingGame_5_0_Source_CookingGame_Public_Inventory_PickupActor_h_54_CALLBACK_WRAPPERS \
	CookingGame_5_0_Source_CookingGame_Public_Inventory_PickupActor_h_54_INCLASS_NO_PURE_DECLS \
	CookingGame_5_0_Source_CookingGame_Public_Inventory_PickupActor_h_54_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> COOKINGGAME_API UClass* StaticClass<class APickupActor>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID CookingGame_5_0_Source_CookingGame_Public_Inventory_PickupActor_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
