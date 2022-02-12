// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "CookingGame/Public/Inventory/PickupActor.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodePickupActor() {}
// Cross Module References
	COOKINGGAME_API UScriptStruct* Z_Construct_UScriptStruct_FItemStructure();
	UPackage* Z_Construct_UPackage__Script_CookingGame();
	ENGINE_API UClass* Z_Construct_UClass_UTexture2D_NoRegister();
	COREUOBJECT_API UClass* Z_Construct_UClass_UClass();
	COOKINGGAME_API UClass* Z_Construct_UClass_APickupActor_NoRegister();
	COOKINGGAME_API UClass* Z_Construct_UClass_APickupActor();
	COOKINGGAME_API UClass* Z_Construct_UClass_AInteractableBase();
// End Cross Module References
class UScriptStruct* FItemStructure::StaticStruct()
{
	static class UScriptStruct* Singleton = NULL;
	if (!Singleton)
	{
		extern COOKINGGAME_API uint32 Get_Z_Construct_UScriptStruct_FItemStructure_Hash();
		Singleton = GetStaticStruct(Z_Construct_UScriptStruct_FItemStructure, Z_Construct_UPackage__Script_CookingGame(), TEXT("ItemStructure"), sizeof(FItemStructure), Get_Z_Construct_UScriptStruct_FItemStructure_Hash());
	}
	return Singleton;
}
template<> COOKINGGAME_API UScriptStruct* StaticStruct<FItemStructure>()
{
	return FItemStructure::StaticStruct();
}
static FCompiledInDeferStruct Z_CompiledInDeferStruct_UScriptStruct_FItemStructure(FItemStructure::StaticStruct, TEXT("/Script/CookingGame"), TEXT("ItemStructure"), false, nullptr, nullptr);
static struct FScriptStruct_CookingGame_StaticRegisterNativesFItemStructure
{
	FScriptStruct_CookingGame_StaticRegisterNativesFItemStructure()
	{
		UScriptStruct::DeferCppStructOps(FName(TEXT("ItemStructure")),new UScriptStruct::TCppStructOps<FItemStructure>);
	}
} ScriptStruct_CookingGame_StaticRegisterNativesFItemStructure;
	struct Z_Construct_UScriptStruct_FItemStructure_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Name_MetaData[];
#endif
		static const UECodeGen_Private::FTextPropertyParams NewProp_Name;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_bIsStackable_MetaData[];
#endif
		static void NewProp_bIsStackable_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bIsStackable;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Thumbnail_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_Thumbnail;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Description_MetaData[];
#endif
		static const UECodeGen_Private::FTextPropertyParams NewProp_Description;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_bIsConsumable_MetaData[];
#endif
		static void NewProp_bIsConsumable_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bIsConsumable;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_MaxStackSize_MetaData[];
#endif
		static const UECodeGen_Private::FIntPropertyParams NewProp_MaxStackSize;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Durability_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_Durability;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_ClassType_MetaData[];
#endif
		static const UECodeGen_Private::FClassPropertyParams NewProp_ClassType;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UECodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FItemStructure_Statics::Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "ModuleRelativePath", "Public/Inventory/PickupActor.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FItemStructure_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FItemStructure>();
	}
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FItemStructure_Statics::NewProp_Name_MetaData[] = {
		{ "Category", "ItemStructure" },
		{ "ModuleRelativePath", "Public/Inventory/PickupActor.h" },
	};
#endif
	const UECodeGen_Private::FTextPropertyParams Z_Construct_UScriptStruct_FItemStructure_Statics::NewProp_Name = { "Name", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Text, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FItemStructure, Name), METADATA_PARAMS(Z_Construct_UScriptStruct_FItemStructure_Statics::NewProp_Name_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FItemStructure_Statics::NewProp_Name_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FItemStructure_Statics::NewProp_bIsStackable_MetaData[] = {
		{ "Category", "ItemStructure" },
		{ "ModuleRelativePath", "Public/Inventory/PickupActor.h" },
	};
#endif
	void Z_Construct_UScriptStruct_FItemStructure_Statics::NewProp_bIsStackable_SetBit(void* Obj)
	{
		((FItemStructure*)Obj)->bIsStackable = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FItemStructure_Statics::NewProp_bIsStackable = { "bIsStackable", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(FItemStructure), &Z_Construct_UScriptStruct_FItemStructure_Statics::NewProp_bIsStackable_SetBit, METADATA_PARAMS(Z_Construct_UScriptStruct_FItemStructure_Statics::NewProp_bIsStackable_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FItemStructure_Statics::NewProp_bIsStackable_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FItemStructure_Statics::NewProp_Thumbnail_MetaData[] = {
		{ "Category", "ItemStructure" },
		{ "ModuleRelativePath", "Public/Inventory/PickupActor.h" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UScriptStruct_FItemStructure_Statics::NewProp_Thumbnail = { "Thumbnail", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FItemStructure, Thumbnail), Z_Construct_UClass_UTexture2D_NoRegister, METADATA_PARAMS(Z_Construct_UScriptStruct_FItemStructure_Statics::NewProp_Thumbnail_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FItemStructure_Statics::NewProp_Thumbnail_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FItemStructure_Statics::NewProp_Description_MetaData[] = {
		{ "Category", "ItemStructure" },
		{ "ModuleRelativePath", "Public/Inventory/PickupActor.h" },
	};
#endif
	const UECodeGen_Private::FTextPropertyParams Z_Construct_UScriptStruct_FItemStructure_Statics::NewProp_Description = { "Description", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Text, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FItemStructure, Description), METADATA_PARAMS(Z_Construct_UScriptStruct_FItemStructure_Statics::NewProp_Description_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FItemStructure_Statics::NewProp_Description_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FItemStructure_Statics::NewProp_bIsConsumable_MetaData[] = {
		{ "Category", "ItemStructure" },
		{ "ModuleRelativePath", "Public/Inventory/PickupActor.h" },
	};
#endif
	void Z_Construct_UScriptStruct_FItemStructure_Statics::NewProp_bIsConsumable_SetBit(void* Obj)
	{
		((FItemStructure*)Obj)->bIsConsumable = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FItemStructure_Statics::NewProp_bIsConsumable = { "bIsConsumable", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(FItemStructure), &Z_Construct_UScriptStruct_FItemStructure_Statics::NewProp_bIsConsumable_SetBit, METADATA_PARAMS(Z_Construct_UScriptStruct_FItemStructure_Statics::NewProp_bIsConsumable_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FItemStructure_Statics::NewProp_bIsConsumable_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FItemStructure_Statics::NewProp_MaxStackSize_MetaData[] = {
		{ "Category", "ItemStructure" },
		{ "ModuleRelativePath", "Public/Inventory/PickupActor.h" },
	};
#endif
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UScriptStruct_FItemStructure_Statics::NewProp_MaxStackSize = { "MaxStackSize", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FItemStructure, MaxStackSize), METADATA_PARAMS(Z_Construct_UScriptStruct_FItemStructure_Statics::NewProp_MaxStackSize_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FItemStructure_Statics::NewProp_MaxStackSize_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FItemStructure_Statics::NewProp_Durability_MetaData[] = {
		{ "Category", "ItemStructure" },
		{ "ModuleRelativePath", "Public/Inventory/PickupActor.h" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FItemStructure_Statics::NewProp_Durability = { "Durability", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FItemStructure, Durability), METADATA_PARAMS(Z_Construct_UScriptStruct_FItemStructure_Statics::NewProp_Durability_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FItemStructure_Statics::NewProp_Durability_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FItemStructure_Statics::NewProp_ClassType_MetaData[] = {
		{ "Category", "ItemStructure" },
		{ "ModuleRelativePath", "Public/Inventory/PickupActor.h" },
	};
#endif
	const UECodeGen_Private::FClassPropertyParams Z_Construct_UScriptStruct_FItemStructure_Statics::NewProp_ClassType = { "ClassType", nullptr, (EPropertyFlags)0x0014000000000005, UECodeGen_Private::EPropertyGenFlags::Class, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FItemStructure, ClassType), Z_Construct_UClass_APickupActor_NoRegister, Z_Construct_UClass_UClass, METADATA_PARAMS(Z_Construct_UScriptStruct_FItemStructure_Statics::NewProp_ClassType_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FItemStructure_Statics::NewProp_ClassType_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FItemStructure_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FItemStructure_Statics::NewProp_Name,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FItemStructure_Statics::NewProp_bIsStackable,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FItemStructure_Statics::NewProp_Thumbnail,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FItemStructure_Statics::NewProp_Description,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FItemStructure_Statics::NewProp_bIsConsumable,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FItemStructure_Statics::NewProp_MaxStackSize,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FItemStructure_Statics::NewProp_Durability,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FItemStructure_Statics::NewProp_ClassType,
	};
	const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FItemStructure_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_CookingGame,
		nullptr,
		&NewStructOps,
		"ItemStructure",
		sizeof(FItemStructure),
		alignof(FItemStructure),
		Z_Construct_UScriptStruct_FItemStructure_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FItemStructure_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000001),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FItemStructure_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FItemStructure_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FItemStructure()
	{
#if WITH_HOT_RELOAD
		extern uint32 Get_Z_Construct_UScriptStruct_FItemStructure_Hash();
		UPackage* Outer = Z_Construct_UPackage__Script_CookingGame();
		static UScriptStruct* ReturnStruct = FindExistingStructIfHotReloadOrDynamic(Outer, TEXT("ItemStructure"), sizeof(FItemStructure), Get_Z_Construct_UScriptStruct_FItemStructure_Hash(), false);
#else
		static UScriptStruct* ReturnStruct = nullptr;
#endif
		if (!ReturnStruct)
		{
			UECodeGen_Private::ConstructUScriptStruct(ReturnStruct, Z_Construct_UScriptStruct_FItemStructure_Statics::ReturnStructParams);
		}
		return ReturnStruct;
	}
	uint32 Get_Z_Construct_UScriptStruct_FItemStructure_Hash() { return 1977141392U; }
	DEFINE_FUNCTION(APickupActor::execUseItem)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		if (!P_THIS->UseItem_Validate())
		{
			RPC_ValidateFailed(TEXT("UseItem_Validate"));
			return;
		}
		P_THIS->UseItem_Implementation();
		P_NATIVE_END;
	}
	static FName NAME_APickupActor_UseItem = FName(TEXT("UseItem"));
	void APickupActor::UseItem()
	{
		ProcessEvent(FindFunctionChecked(NAME_APickupActor_UseItem),NULL);
	}
	void APickupActor::StaticRegisterNativesAPickupActor()
	{
		UClass* Class = APickupActor::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "UseItem", &APickupActor::execUseItem },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_APickupActor_UseItem_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_APickupActor_UseItem_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/Inventory/PickupActor.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_APickupActor_UseItem_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_APickupActor, nullptr, "UseItem", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x84220CC0, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_APickupActor_UseItem_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_APickupActor_UseItem_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_APickupActor_UseItem()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_APickupActor_UseItem_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	UClass* Z_Construct_UClass_APickupActor_NoRegister()
	{
		return APickupActor::StaticClass();
	}
	struct Z_Construct_UClass_APickupActor_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_ItemStructure_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_ItemStructure;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_ItemQuantity_MetaData[];
#endif
		static const UECodeGen_Private::FIntPropertyParams NewProp_ItemQuantity;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_APickupActor_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_AInteractableBase,
		(UObject* (*)())Z_Construct_UPackage__Script_CookingGame,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_APickupActor_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_APickupActor_UseItem, "UseItem" }, // 2349861497
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_APickupActor_Statics::Class_MetaDataParams[] = {
		{ "IncludePath", "Inventory/PickupActor.h" },
		{ "ModuleRelativePath", "Public/Inventory/PickupActor.h" },
	};
#endif
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_APickupActor_Statics::NewProp_ItemStructure_MetaData[] = {
		{ "Category", "PickupActor" },
		{ "ModuleRelativePath", "Public/Inventory/PickupActor.h" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_APickupActor_Statics::NewProp_ItemStructure = { "ItemStructure", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(APickupActor, ItemStructure), Z_Construct_UScriptStruct_FItemStructure, METADATA_PARAMS(Z_Construct_UClass_APickupActor_Statics::NewProp_ItemStructure_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_APickupActor_Statics::NewProp_ItemStructure_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_APickupActor_Statics::NewProp_ItemQuantity_MetaData[] = {
		{ "Category", "PickupActor" },
		{ "ModuleRelativePath", "Public/Inventory/PickupActor.h" },
	};
#endif
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UClass_APickupActor_Statics::NewProp_ItemQuantity = { "ItemQuantity", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(APickupActor, ItemQuantity), METADATA_PARAMS(Z_Construct_UClass_APickupActor_Statics::NewProp_ItemQuantity_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_APickupActor_Statics::NewProp_ItemQuantity_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_APickupActor_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_APickupActor_Statics::NewProp_ItemStructure,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_APickupActor_Statics::NewProp_ItemQuantity,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_APickupActor_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<APickupActor>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_APickupActor_Statics::ClassParams = {
		&APickupActor::StaticClass,
		"Engine",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		FuncInfo,
		Z_Construct_UClass_APickupActor_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		UE_ARRAY_COUNT(FuncInfo),
		UE_ARRAY_COUNT(Z_Construct_UClass_APickupActor_Statics::PropPointers),
		0,
		0x009000A4u,
		METADATA_PARAMS(Z_Construct_UClass_APickupActor_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_APickupActor_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_APickupActor()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UECodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_APickupActor_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(APickupActor, 889087955);
	template<> COOKINGGAME_API UClass* StaticClass<APickupActor>()
	{
		return APickupActor::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_APickupActor(Z_Construct_UClass_APickupActor, &APickupActor::StaticClass, TEXT("/Script/CookingGame"), TEXT("APickupActor"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(APickupActor);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
