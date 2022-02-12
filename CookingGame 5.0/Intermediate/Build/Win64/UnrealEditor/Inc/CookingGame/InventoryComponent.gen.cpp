// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "CookingGame/Public/Inventory/InventoryComponent.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeInventoryComponent() {}
// Cross Module References
	COOKINGGAME_API UScriptStruct* Z_Construct_UScriptStruct_FSlotStructure();
	UPackage* Z_Construct_UPackage__Script_CookingGame();
	COOKINGGAME_API UScriptStruct* Z_Construct_UScriptStruct_FItemStructure();
	COOKINGGAME_API UClass* Z_Construct_UClass_UInventoryComponent_NoRegister();
	COOKINGGAME_API UClass* Z_Construct_UClass_UInventoryComponent();
	ENGINE_API UClass* Z_Construct_UClass_UActorComponent();
	COREUOBJECT_API UClass* Z_Construct_UClass_UClass();
	COOKINGGAME_API UClass* Z_Construct_UClass_APickupActor_NoRegister();
	COOKINGGAME_API UClass* Z_Construct_UClass_ACookingGameCharacter_NoRegister();
// End Cross Module References
class UScriptStruct* FSlotStructure::StaticStruct()
{
	static class UScriptStruct* Singleton = NULL;
	if (!Singleton)
	{
		extern COOKINGGAME_API uint32 Get_Z_Construct_UScriptStruct_FSlotStructure_Hash();
		Singleton = GetStaticStruct(Z_Construct_UScriptStruct_FSlotStructure, Z_Construct_UPackage__Script_CookingGame(), TEXT("SlotStructure"), sizeof(FSlotStructure), Get_Z_Construct_UScriptStruct_FSlotStructure_Hash());
	}
	return Singleton;
}
template<> COOKINGGAME_API UScriptStruct* StaticStruct<FSlotStructure>()
{
	return FSlotStructure::StaticStruct();
}
static FCompiledInDeferStruct Z_CompiledInDeferStruct_UScriptStruct_FSlotStructure(FSlotStructure::StaticStruct, TEXT("/Script/CookingGame"), TEXT("SlotStructure"), false, nullptr, nullptr);
static struct FScriptStruct_CookingGame_StaticRegisterNativesFSlotStructure
{
	FScriptStruct_CookingGame_StaticRegisterNativesFSlotStructure()
	{
		UScriptStruct::DeferCppStructOps(FName(TEXT("SlotStructure")),new UScriptStruct::TCppStructOps<FSlotStructure>);
	}
} ScriptStruct_CookingGame_StaticRegisterNativesFSlotStructure;
	struct Z_Construct_UScriptStruct_FSlotStructure_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_ItemStructure_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_ItemStructure;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Quantity_MetaData[];
#endif
		static const UECodeGen_Private::FIntPropertyParams NewProp_Quantity;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UECodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FSlotStructure_Statics::Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "ModuleRelativePath", "Public/Inventory/InventoryComponent.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FSlotStructure_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FSlotStructure>();
	}
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FSlotStructure_Statics::NewProp_ItemStructure_MetaData[] = {
		{ "Category", "SlotStructure" },
		{ "ModuleRelativePath", "Public/Inventory/InventoryComponent.h" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FSlotStructure_Statics::NewProp_ItemStructure = { "ItemStructure", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FSlotStructure, ItemStructure), Z_Construct_UScriptStruct_FItemStructure, METADATA_PARAMS(Z_Construct_UScriptStruct_FSlotStructure_Statics::NewProp_ItemStructure_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSlotStructure_Statics::NewProp_ItemStructure_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FSlotStructure_Statics::NewProp_Quantity_MetaData[] = {
		{ "Category", "SlotStructure" },
		{ "ModuleRelativePath", "Public/Inventory/InventoryComponent.h" },
	};
#endif
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UScriptStruct_FSlotStructure_Statics::NewProp_Quantity = { "Quantity", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FSlotStructure, Quantity), METADATA_PARAMS(Z_Construct_UScriptStruct_FSlotStructure_Statics::NewProp_Quantity_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSlotStructure_Statics::NewProp_Quantity_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FSlotStructure_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSlotStructure_Statics::NewProp_ItemStructure,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSlotStructure_Statics::NewProp_Quantity,
	};
	const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FSlotStructure_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_CookingGame,
		nullptr,
		&NewStructOps,
		"SlotStructure",
		sizeof(FSlotStructure),
		alignof(FSlotStructure),
		Z_Construct_UScriptStruct_FSlotStructure_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSlotStructure_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000001),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FSlotStructure_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSlotStructure_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FSlotStructure()
	{
#if WITH_HOT_RELOAD
		extern uint32 Get_Z_Construct_UScriptStruct_FSlotStructure_Hash();
		UPackage* Outer = Z_Construct_UPackage__Script_CookingGame();
		static UScriptStruct* ReturnStruct = FindExistingStructIfHotReloadOrDynamic(Outer, TEXT("SlotStructure"), sizeof(FSlotStructure), Get_Z_Construct_UScriptStruct_FSlotStructure_Hash(), false);
#else
		static UScriptStruct* ReturnStruct = nullptr;
#endif
		if (!ReturnStruct)
		{
			UECodeGen_Private::ConstructUScriptStruct(ReturnStruct, Z_Construct_UScriptStruct_FSlotStructure_Statics::ReturnStructParams);
		}
		return ReturnStruct;
	}
	uint32 Get_Z_Construct_UScriptStruct_FSlotStructure_Hash() { return 2208078645U; }
	DEFINE_FUNCTION(UInventoryComponent::execOnRep_Inventory)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->OnRep_Inventory();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UInventoryComponent::execFindItem)
	{
		P_GET_OBJECT(UClass,Z_Param_ItemClass);
		P_GET_PROPERTY(FIntProperty,Z_Param_Amount);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(int32*)Z_Param__Result=P_THIS->FindItem(Z_Param_ItemClass,Z_Param_Amount);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UInventoryComponent::execRemoveFromSlot)
	{
		P_GET_PROPERTY(FIntProperty,Z_Param_ItemIndex);
		P_GET_PROPERTY(FIntProperty,Z_Param_amount);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->RemoveFromSlot(Z_Param_ItemIndex,Z_Param_amount);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UInventoryComponent::execClearSlot)
	{
		P_GET_PROPERTY(FIntProperty,Z_Param_ItemIndex);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->ClearSlot(Z_Param_ItemIndex);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UInventoryComponent::execUseItem)
	{
		P_GET_PROPERTY(FIntProperty,Z_Param_ItemIndex);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->UseItem(Z_Param_ItemIndex);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UInventoryComponent::execAddToInventory)
	{
		P_GET_STRUCT(FSlotStructure,Z_Param_Item);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->AddToInventory(Z_Param_Item);
		P_NATIVE_END;
	}
	void UInventoryComponent::StaticRegisterNativesUInventoryComponent()
	{
		UClass* Class = UInventoryComponent::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "AddToInventory", &UInventoryComponent::execAddToInventory },
			{ "ClearSlot", &UInventoryComponent::execClearSlot },
			{ "FindItem", &UInventoryComponent::execFindItem },
			{ "OnRep_Inventory", &UInventoryComponent::execOnRep_Inventory },
			{ "RemoveFromSlot", &UInventoryComponent::execRemoveFromSlot },
			{ "UseItem", &UInventoryComponent::execUseItem },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_UInventoryComponent_AddToInventory_Statics
	{
		struct InventoryComponent_eventAddToInventory_Parms
		{
			FSlotStructure Item;
		};
		static const UECodeGen_Private::FStructPropertyParams NewProp_Item;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UInventoryComponent_AddToInventory_Statics::NewProp_Item = { "Item", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(InventoryComponent_eventAddToInventory_Parms, Item), Z_Construct_UScriptStruct_FSlotStructure, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UInventoryComponent_AddToInventory_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UInventoryComponent_AddToInventory_Statics::NewProp_Item,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UInventoryComponent_AddToInventory_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/Inventory/InventoryComponent.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UInventoryComponent_AddToInventory_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UInventoryComponent, nullptr, "AddToInventory", nullptr, nullptr, sizeof(InventoryComponent_eventAddToInventory_Parms), Z_Construct_UFunction_UInventoryComponent_AddToInventory_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UInventoryComponent_AddToInventory_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UInventoryComponent_AddToInventory_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UInventoryComponent_AddToInventory_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UInventoryComponent_AddToInventory()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UInventoryComponent_AddToInventory_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UInventoryComponent_ClearSlot_Statics
	{
		struct InventoryComponent_eventClearSlot_Parms
		{
			int32 ItemIndex;
		};
		static const UECodeGen_Private::FIntPropertyParams NewProp_ItemIndex;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UInventoryComponent_ClearSlot_Statics::NewProp_ItemIndex = { "ItemIndex", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(InventoryComponent_eventClearSlot_Parms, ItemIndex), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UInventoryComponent_ClearSlot_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UInventoryComponent_ClearSlot_Statics::NewProp_ItemIndex,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UInventoryComponent_ClearSlot_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/Inventory/InventoryComponent.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UInventoryComponent_ClearSlot_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UInventoryComponent, nullptr, "ClearSlot", nullptr, nullptr, sizeof(InventoryComponent_eventClearSlot_Parms), Z_Construct_UFunction_UInventoryComponent_ClearSlot_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UInventoryComponent_ClearSlot_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UInventoryComponent_ClearSlot_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UInventoryComponent_ClearSlot_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UInventoryComponent_ClearSlot()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UInventoryComponent_ClearSlot_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UInventoryComponent_FindItem_Statics
	{
		struct InventoryComponent_eventFindItem_Parms
		{
			TSubclassOf<APickupActor>  ItemClass;
			int32 Amount;
			int32 ReturnValue;
		};
		static const UECodeGen_Private::FClassPropertyParams NewProp_ItemClass;
		static const UECodeGen_Private::FIntPropertyParams NewProp_Amount;
		static const UECodeGen_Private::FUnsizedIntPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FClassPropertyParams Z_Construct_UFunction_UInventoryComponent_FindItem_Statics::NewProp_ItemClass = { "ItemClass", nullptr, (EPropertyFlags)0x0014000000000080, UECodeGen_Private::EPropertyGenFlags::Class, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(InventoryComponent_eventFindItem_Parms, ItemClass), Z_Construct_UClass_APickupActor_NoRegister, Z_Construct_UClass_UClass, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UInventoryComponent_FindItem_Statics::NewProp_Amount = { "Amount", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(InventoryComponent_eventFindItem_Parms, Amount), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FUnsizedIntPropertyParams Z_Construct_UFunction_UInventoryComponent_FindItem_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(InventoryComponent_eventFindItem_Parms, ReturnValue), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UInventoryComponent_FindItem_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UInventoryComponent_FindItem_Statics::NewProp_ItemClass,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UInventoryComponent_FindItem_Statics::NewProp_Amount,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UInventoryComponent_FindItem_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UInventoryComponent_FindItem_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/Inventory/InventoryComponent.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UInventoryComponent_FindItem_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UInventoryComponent, nullptr, "FindItem", nullptr, nullptr, sizeof(InventoryComponent_eventFindItem_Parms), Z_Construct_UFunction_UInventoryComponent_FindItem_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UInventoryComponent_FindItem_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UInventoryComponent_FindItem_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UInventoryComponent_FindItem_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UInventoryComponent_FindItem()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UInventoryComponent_FindItem_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UInventoryComponent_OnRep_Inventory_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UInventoryComponent_OnRep_Inventory_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/Inventory/InventoryComponent.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UInventoryComponent_OnRep_Inventory_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UInventoryComponent, nullptr, "OnRep_Inventory", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UInventoryComponent_OnRep_Inventory_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UInventoryComponent_OnRep_Inventory_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UInventoryComponent_OnRep_Inventory()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UInventoryComponent_OnRep_Inventory_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UInventoryComponent_RemoveFromSlot_Statics
	{
		struct InventoryComponent_eventRemoveFromSlot_Parms
		{
			int32 ItemIndex;
			int32 amount;
		};
		static const UECodeGen_Private::FIntPropertyParams NewProp_ItemIndex;
		static const UECodeGen_Private::FIntPropertyParams NewProp_amount;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UInventoryComponent_RemoveFromSlot_Statics::NewProp_ItemIndex = { "ItemIndex", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(InventoryComponent_eventRemoveFromSlot_Parms, ItemIndex), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UInventoryComponent_RemoveFromSlot_Statics::NewProp_amount = { "amount", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(InventoryComponent_eventRemoveFromSlot_Parms, amount), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UInventoryComponent_RemoveFromSlot_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UInventoryComponent_RemoveFromSlot_Statics::NewProp_ItemIndex,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UInventoryComponent_RemoveFromSlot_Statics::NewProp_amount,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UInventoryComponent_RemoveFromSlot_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/Inventory/InventoryComponent.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UInventoryComponent_RemoveFromSlot_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UInventoryComponent, nullptr, "RemoveFromSlot", nullptr, nullptr, sizeof(InventoryComponent_eventRemoveFromSlot_Parms), Z_Construct_UFunction_UInventoryComponent_RemoveFromSlot_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UInventoryComponent_RemoveFromSlot_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UInventoryComponent_RemoveFromSlot_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UInventoryComponent_RemoveFromSlot_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UInventoryComponent_RemoveFromSlot()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UInventoryComponent_RemoveFromSlot_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UInventoryComponent_UseItem_Statics
	{
		struct InventoryComponent_eventUseItem_Parms
		{
			int32 ItemIndex;
		};
		static const UECodeGen_Private::FIntPropertyParams NewProp_ItemIndex;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UInventoryComponent_UseItem_Statics::NewProp_ItemIndex = { "ItemIndex", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(InventoryComponent_eventUseItem_Parms, ItemIndex), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UInventoryComponent_UseItem_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UInventoryComponent_UseItem_Statics::NewProp_ItemIndex,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UInventoryComponent_UseItem_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/Inventory/InventoryComponent.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UInventoryComponent_UseItem_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UInventoryComponent, nullptr, "UseItem", nullptr, nullptr, sizeof(InventoryComponent_eventUseItem_Parms), Z_Construct_UFunction_UInventoryComponent_UseItem_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UInventoryComponent_UseItem_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UInventoryComponent_UseItem_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UInventoryComponent_UseItem_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UInventoryComponent_UseItem()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UInventoryComponent_UseItem_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	UClass* Z_Construct_UClass_UInventoryComponent_NoRegister()
	{
		return UInventoryComponent::StaticClass();
	}
	struct Z_Construct_UClass_UInventoryComponent_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_InventoryName_MetaData[];
#endif
		static const UECodeGen_Private::FTextPropertyParams NewProp_InventoryName;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_NumberOfSlots_MetaData[];
#endif
		static const UECodeGen_Private::FIntPropertyParams NewProp_NumberOfSlots;
		static const UECodeGen_Private::FStructPropertyParams NewProp_Inventory_Inner;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Inventory_MetaData[];
#endif
		static const UECodeGen_Private::FArrayPropertyParams NewProp_Inventory;
		static const UECodeGen_Private::FObjectPropertyParams NewProp_RelevantPlayers_Inner;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_RelevantPlayers_MetaData[];
#endif
		static const UECodeGen_Private::FArrayPropertyParams NewProp_RelevantPlayers;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UInventoryComponent_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UActorComponent,
		(UObject* (*)())Z_Construct_UPackage__Script_CookingGame,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_UInventoryComponent_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_UInventoryComponent_AddToInventory, "AddToInventory" }, // 3777736455
		{ &Z_Construct_UFunction_UInventoryComponent_ClearSlot, "ClearSlot" }, // 643303526
		{ &Z_Construct_UFunction_UInventoryComponent_FindItem, "FindItem" }, // 1466663405
		{ &Z_Construct_UFunction_UInventoryComponent_OnRep_Inventory, "OnRep_Inventory" }, // 1281663740
		{ &Z_Construct_UFunction_UInventoryComponent_RemoveFromSlot, "RemoveFromSlot" }, // 3065915641
		{ &Z_Construct_UFunction_UInventoryComponent_UseItem, "UseItem" }, // 2875178160
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UInventoryComponent_Statics::Class_MetaDataParams[] = {
		{ "BlueprintSpawnableComponent", "" },
		{ "ClassGroupNames", "Custom" },
		{ "IncludePath", "Inventory/InventoryComponent.h" },
		{ "ModuleRelativePath", "Public/Inventory/InventoryComponent.h" },
	};
#endif
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UInventoryComponent_Statics::NewProp_InventoryName_MetaData[] = {
		{ "Category", "InventoryComponent" },
		{ "ModuleRelativePath", "Public/Inventory/InventoryComponent.h" },
	};
#endif
	const UECodeGen_Private::FTextPropertyParams Z_Construct_UClass_UInventoryComponent_Statics::NewProp_InventoryName = { "InventoryName", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Text, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UInventoryComponent, InventoryName), METADATA_PARAMS(Z_Construct_UClass_UInventoryComponent_Statics::NewProp_InventoryName_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UInventoryComponent_Statics::NewProp_InventoryName_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UInventoryComponent_Statics::NewProp_NumberOfSlots_MetaData[] = {
		{ "Category", "InventoryComponent" },
		{ "ModuleRelativePath", "Public/Inventory/InventoryComponent.h" },
	};
#endif
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UClass_UInventoryComponent_Statics::NewProp_NumberOfSlots = { "NumberOfSlots", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UInventoryComponent, NumberOfSlots), METADATA_PARAMS(Z_Construct_UClass_UInventoryComponent_Statics::NewProp_NumberOfSlots_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UInventoryComponent_Statics::NewProp_NumberOfSlots_MetaData)) };
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UInventoryComponent_Statics::NewProp_Inventory_Inner = { "Inventory", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, Z_Construct_UScriptStruct_FSlotStructure, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UInventoryComponent_Statics::NewProp_Inventory_MetaData[] = {
		{ "Category", "InventoryComponent" },
		{ "ModuleRelativePath", "Public/Inventory/InventoryComponent.h" },
	};
#endif
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UClass_UInventoryComponent_Statics::NewProp_Inventory = { "Inventory", "OnRep_Inventory", (EPropertyFlags)0x0010000100000025, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UInventoryComponent, Inventory), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UClass_UInventoryComponent_Statics::NewProp_Inventory_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UInventoryComponent_Statics::NewProp_Inventory_MetaData)) };
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UInventoryComponent_Statics::NewProp_RelevantPlayers_Inner = { "RelevantPlayers", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, Z_Construct_UClass_ACookingGameCharacter_NoRegister, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UInventoryComponent_Statics::NewProp_RelevantPlayers_MetaData[] = {
		{ "ModuleRelativePath", "Public/Inventory/InventoryComponent.h" },
	};
#endif
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UClass_UInventoryComponent_Statics::NewProp_RelevantPlayers = { "RelevantPlayers", nullptr, (EPropertyFlags)0x0010000000000020, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UInventoryComponent, RelevantPlayers), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UClass_UInventoryComponent_Statics::NewProp_RelevantPlayers_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UInventoryComponent_Statics::NewProp_RelevantPlayers_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UInventoryComponent_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UInventoryComponent_Statics::NewProp_InventoryName,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UInventoryComponent_Statics::NewProp_NumberOfSlots,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UInventoryComponent_Statics::NewProp_Inventory_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UInventoryComponent_Statics::NewProp_Inventory,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UInventoryComponent_Statics::NewProp_RelevantPlayers_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UInventoryComponent_Statics::NewProp_RelevantPlayers,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UInventoryComponent_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UInventoryComponent>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UInventoryComponent_Statics::ClassParams = {
		&UInventoryComponent::StaticClass,
		"Engine",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		FuncInfo,
		Z_Construct_UClass_UInventoryComponent_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		UE_ARRAY_COUNT(FuncInfo),
		UE_ARRAY_COUNT(Z_Construct_UClass_UInventoryComponent_Statics::PropPointers),
		0,
		0x00B000A4u,
		METADATA_PARAMS(Z_Construct_UClass_UInventoryComponent_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UInventoryComponent_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UInventoryComponent()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UECodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_UInventoryComponent_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(UInventoryComponent, 4018948416);
	template<> COOKINGGAME_API UClass* StaticClass<UInventoryComponent>()
	{
		return UInventoryComponent::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_UInventoryComponent(Z_Construct_UClass_UInventoryComponent, &UInventoryComponent::StaticClass, TEXT("/Script/CookingGame"), TEXT("UInventoryComponent"), false, nullptr, nullptr, nullptr);

	void UInventoryComponent::ValidateGeneratedRepEnums(const TArray<struct FRepRecord>& ClassReps) const
	{
		static const FName Name_Inventory(TEXT("Inventory"));
		static const FName Name_RelevantPlayers(TEXT("RelevantPlayers"));

		const bool bIsValid = true
			&& Name_Inventory == ClassReps[(int32)ENetFields_Private::Inventory].Property->GetFName()
			&& Name_RelevantPlayers == ClassReps[(int32)ENetFields_Private::RelevantPlayers].Property->GetFName();

		checkf(bIsValid, TEXT("UHT Generated Rep Indices do not match runtime populated Rep Indices for properties in UInventoryComponent"));
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UInventoryComponent);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
