// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
class APickupActor;
struct FSlotStructure;
#ifdef COOKINGGAME_InventoryComponent_generated_h
#error "InventoryComponent.generated.h already included, missing '#pragma once' in InventoryComponent.h"
#endif
#define COOKINGGAME_InventoryComponent_generated_h

#define CookingGame_5_0_Source_CookingGame_Public_Inventory_InventoryComponent_h_13_GENERATED_BODY \
	friend struct Z_Construct_UScriptStruct_FSlotStructure_Statics; \
	COOKINGGAME_API static class UScriptStruct* StaticStruct();


template<> COOKINGGAME_API UScriptStruct* StaticStruct<struct FSlotStructure>();

#define CookingGame_5_0_Source_CookingGame_Public_Inventory_InventoryComponent_h_31_SPARSE_DATA
#define CookingGame_5_0_Source_CookingGame_Public_Inventory_InventoryComponent_h_31_RPC_WRAPPERS \
 \
	DECLARE_FUNCTION(execOnRep_Inventory); \
	DECLARE_FUNCTION(execFindItem); \
	DECLARE_FUNCTION(execRemoveFromSlot); \
	DECLARE_FUNCTION(execClearSlot); \
	DECLARE_FUNCTION(execUseItem); \
	DECLARE_FUNCTION(execAddToInventory);


#define CookingGame_5_0_Source_CookingGame_Public_Inventory_InventoryComponent_h_31_RPC_WRAPPERS_NO_PURE_DECLS \
 \
	DECLARE_FUNCTION(execOnRep_Inventory); \
	DECLARE_FUNCTION(execFindItem); \
	DECLARE_FUNCTION(execRemoveFromSlot); \
	DECLARE_FUNCTION(execClearSlot); \
	DECLARE_FUNCTION(execUseItem); \
	DECLARE_FUNCTION(execAddToInventory);


#define CookingGame_5_0_Source_CookingGame_Public_Inventory_InventoryComponent_h_31_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUInventoryComponent(); \
	friend struct Z_Construct_UClass_UInventoryComponent_Statics; \
public: \
	DECLARE_CLASS(UInventoryComponent, UActorComponent, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/CookingGame"), NO_API) \
	DECLARE_SERIALIZER(UInventoryComponent) \
	void GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const override; \
	enum class ENetFields_Private : uint16 \
	{ \
		NETFIELD_REP_START=(uint16)((int32)Super::ENetFields_Private::NETFIELD_REP_END + (int32)1), \
		Inventory=NETFIELD_REP_START, \
		RelevantPlayers, \
		NETFIELD_REP_END=RelevantPlayers	}; \
	NO_API virtual void ValidateGeneratedRepEnums(const TArray<struct FRepRecord>& ClassReps) const override;


#define CookingGame_5_0_Source_CookingGame_Public_Inventory_InventoryComponent_h_31_INCLASS \
private: \
	static void StaticRegisterNativesUInventoryComponent(); \
	friend struct Z_Construct_UClass_UInventoryComponent_Statics; \
public: \
	DECLARE_CLASS(UInventoryComponent, UActorComponent, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/CookingGame"), NO_API) \
	DECLARE_SERIALIZER(UInventoryComponent) \
	void GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const override; \
	enum class ENetFields_Private : uint16 \
	{ \
		NETFIELD_REP_START=(uint16)((int32)Super::ENetFields_Private::NETFIELD_REP_END + (int32)1), \
		Inventory=NETFIELD_REP_START, \
		RelevantPlayers, \
		NETFIELD_REP_END=RelevantPlayers	}; \
	NO_API virtual void ValidateGeneratedRepEnums(const TArray<struct FRepRecord>& ClassReps) const override;


#define CookingGame_5_0_Source_CookingGame_Public_Inventory_InventoryComponent_h_31_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UInventoryComponent(const FObjectInitializer& ObjectInitializer); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UInventoryComponent) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UInventoryComponent); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UInventoryComponent); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UInventoryComponent(UInventoryComponent&&); \
	NO_API UInventoryComponent(const UInventoryComponent&); \
public:


#define CookingGame_5_0_Source_CookingGame_Public_Inventory_InventoryComponent_h_31_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UInventoryComponent(UInventoryComponent&&); \
	NO_API UInventoryComponent(const UInventoryComponent&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UInventoryComponent); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UInventoryComponent); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(UInventoryComponent)


#define CookingGame_5_0_Source_CookingGame_Public_Inventory_InventoryComponent_h_31_PRIVATE_PROPERTY_OFFSET
#define CookingGame_5_0_Source_CookingGame_Public_Inventory_InventoryComponent_h_28_PROLOG
#define CookingGame_5_0_Source_CookingGame_Public_Inventory_InventoryComponent_h_31_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	CookingGame_5_0_Source_CookingGame_Public_Inventory_InventoryComponent_h_31_PRIVATE_PROPERTY_OFFSET \
	CookingGame_5_0_Source_CookingGame_Public_Inventory_InventoryComponent_h_31_SPARSE_DATA \
	CookingGame_5_0_Source_CookingGame_Public_Inventory_InventoryComponent_h_31_RPC_WRAPPERS \
	CookingGame_5_0_Source_CookingGame_Public_Inventory_InventoryComponent_h_31_INCLASS \
	CookingGame_5_0_Source_CookingGame_Public_Inventory_InventoryComponent_h_31_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define CookingGame_5_0_Source_CookingGame_Public_Inventory_InventoryComponent_h_31_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	CookingGame_5_0_Source_CookingGame_Public_Inventory_InventoryComponent_h_31_PRIVATE_PROPERTY_OFFSET \
	CookingGame_5_0_Source_CookingGame_Public_Inventory_InventoryComponent_h_31_SPARSE_DATA \
	CookingGame_5_0_Source_CookingGame_Public_Inventory_InventoryComponent_h_31_RPC_WRAPPERS_NO_PURE_DECLS \
	CookingGame_5_0_Source_CookingGame_Public_Inventory_InventoryComponent_h_31_INCLASS_NO_PURE_DECLS \
	CookingGame_5_0_Source_CookingGame_Public_Inventory_InventoryComponent_h_31_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> COOKINGGAME_API UClass* StaticClass<class UInventoryComponent>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID CookingGame_5_0_Source_CookingGame_Public_Inventory_InventoryComponent_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
