// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "CookingGame/Public/Interact/InteractInterface.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeInteractInterface() {}
// Cross Module References
	COOKINGGAME_API UScriptStruct* Z_Construct_UScriptStruct_FInteractableData();
	UPackage* Z_Construct_UPackage__Script_CookingGame();
	COOKINGGAME_API UClass* Z_Construct_UClass_UInteractInterface_NoRegister();
	COOKINGGAME_API UClass* Z_Construct_UClass_UInteractInterface();
	COREUOBJECT_API UClass* Z_Construct_UClass_UInterface();
// End Cross Module References
class UScriptStruct* FInteractableData::StaticStruct()
{
	static class UScriptStruct* Singleton = NULL;
	if (!Singleton)
	{
		extern COOKINGGAME_API uint32 Get_Z_Construct_UScriptStruct_FInteractableData_Hash();
		Singleton = GetStaticStruct(Z_Construct_UScriptStruct_FInteractableData, Z_Construct_UPackage__Script_CookingGame(), TEXT("InteractableData"), sizeof(FInteractableData), Get_Z_Construct_UScriptStruct_FInteractableData_Hash());
	}
	return Singleton;
}
template<> COOKINGGAME_API UScriptStruct* StaticStruct<FInteractableData>()
{
	return FInteractableData::StaticStruct();
}
static FCompiledInDeferStruct Z_CompiledInDeferStruct_UScriptStruct_FInteractableData(FInteractableData::StaticStruct, TEXT("/Script/CookingGame"), TEXT("InteractableData"), false, nullptr, nullptr);
static struct FScriptStruct_CookingGame_StaticRegisterNativesFInteractableData
{
	FScriptStruct_CookingGame_StaticRegisterNativesFInteractableData()
	{
		UScriptStruct::DeferCppStructOps(FName(TEXT("InteractableData")),new UScriptStruct::TCppStructOps<FInteractableData>);
	}
} ScriptStruct_CookingGame_StaticRegisterNativesFInteractableData;
	struct Z_Construct_UScriptStruct_FInteractableData_Statics
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
		static const UECodeGen_Private::FMetaDataPairParam NewProp_PrimaryAction_MetaData[];
#endif
		static const UECodeGen_Private::FTextPropertyParams NewProp_PrimaryAction;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_SecondaryAction_MetaData[];
#endif
		static const UECodeGen_Private::FTextPropertyParams NewProp_SecondaryAction;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UECodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FInteractableData_Statics::Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "ModuleRelativePath", "Public/Interact/InteractInterface.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FInteractableData_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FInteractableData>();
	}
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FInteractableData_Statics::NewProp_Name_MetaData[] = {
		{ "Category", "InteractableData" },
		{ "ModuleRelativePath", "Public/Interact/InteractInterface.h" },
	};
#endif
	const UECodeGen_Private::FTextPropertyParams Z_Construct_UScriptStruct_FInteractableData_Statics::NewProp_Name = { "Name", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Text, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FInteractableData, Name), METADATA_PARAMS(Z_Construct_UScriptStruct_FInteractableData_Statics::NewProp_Name_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FInteractableData_Statics::NewProp_Name_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FInteractableData_Statics::NewProp_PrimaryAction_MetaData[] = {
		{ "Category", "InteractableData" },
		{ "ModuleRelativePath", "Public/Interact/InteractInterface.h" },
	};
#endif
	const UECodeGen_Private::FTextPropertyParams Z_Construct_UScriptStruct_FInteractableData_Statics::NewProp_PrimaryAction = { "PrimaryAction", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Text, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FInteractableData, PrimaryAction), METADATA_PARAMS(Z_Construct_UScriptStruct_FInteractableData_Statics::NewProp_PrimaryAction_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FInteractableData_Statics::NewProp_PrimaryAction_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FInteractableData_Statics::NewProp_SecondaryAction_MetaData[] = {
		{ "Category", "InteractableData" },
		{ "ModuleRelativePath", "Public/Interact/InteractInterface.h" },
	};
#endif
	const UECodeGen_Private::FTextPropertyParams Z_Construct_UScriptStruct_FInteractableData_Statics::NewProp_SecondaryAction = { "SecondaryAction", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Text, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FInteractableData, SecondaryAction), METADATA_PARAMS(Z_Construct_UScriptStruct_FInteractableData_Statics::NewProp_SecondaryAction_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FInteractableData_Statics::NewProp_SecondaryAction_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FInteractableData_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FInteractableData_Statics::NewProp_Name,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FInteractableData_Statics::NewProp_PrimaryAction,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FInteractableData_Statics::NewProp_SecondaryAction,
	};
	const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FInteractableData_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_CookingGame,
		nullptr,
		&NewStructOps,
		"InteractableData",
		sizeof(FInteractableData),
		alignof(FInteractableData),
		Z_Construct_UScriptStruct_FInteractableData_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FInteractableData_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000001),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FInteractableData_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FInteractableData_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FInteractableData()
	{
#if WITH_HOT_RELOAD
		extern uint32 Get_Z_Construct_UScriptStruct_FInteractableData_Hash();
		UPackage* Outer = Z_Construct_UPackage__Script_CookingGame();
		static UScriptStruct* ReturnStruct = FindExistingStructIfHotReloadOrDynamic(Outer, TEXT("InteractableData"), sizeof(FInteractableData), Get_Z_Construct_UScriptStruct_FInteractableData_Hash(), false);
#else
		static UScriptStruct* ReturnStruct = nullptr;
#endif
		if (!ReturnStruct)
		{
			UECodeGen_Private::ConstructUScriptStruct(ReturnStruct, Z_Construct_UScriptStruct_FInteractableData_Statics::ReturnStructParams);
		}
		return ReturnStruct;
	}
	uint32 Get_Z_Construct_UScriptStruct_FInteractableData_Hash() { return 3502634632U; }
	DEFINE_FUNCTION(IInteractInterface::execReactToInteract)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->ReactToInteract_Implementation();
		P_NATIVE_END;
	}
	void IInteractInterface::ReactToInteract()
	{
		check(0 && "Do not directly call Event functions in Interfaces. Call Execute_ReactToInteract instead.");
	}
	void UInteractInterface::StaticRegisterNativesUInteractInterface()
	{
		UClass* Class = UInteractInterface::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "ReactToInteract", &IInteractInterface::execReactToInteract },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_UInteractInterface_ReactToInteract_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UInteractInterface_ReactToInteract_Statics::Function_MetaDataParams[] = {
		{ "Comment", "// This should be for things like doors opening, pickups collected\n" },
		{ "ModuleRelativePath", "Public/Interact/InteractInterface.h" },
		{ "ToolTip", "This should be for things like doors opening, pickups collected" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UInteractInterface_ReactToInteract_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UInteractInterface, nullptr, "ReactToInteract", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00024CC0, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UInteractInterface_ReactToInteract_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UInteractInterface_ReactToInteract_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UInteractInterface_ReactToInteract()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UInteractInterface_ReactToInteract_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	UClass* Z_Construct_UClass_UInteractInterface_NoRegister()
	{
		return UInteractInterface::StaticClass();
	}
	struct Z_Construct_UClass_UInteractInterface_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UInteractInterface_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UInterface,
		(UObject* (*)())Z_Construct_UPackage__Script_CookingGame,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_UInteractInterface_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_UInteractInterface_ReactToInteract, "ReactToInteract" }, // 3643112805
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UInteractInterface_Statics::Class_MetaDataParams[] = {
		{ "CannotImplementInterfaceInBlueprint", "" },
		{ "ModuleRelativePath", "Public/Interact/InteractInterface.h" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_UInteractInterface_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<IInteractInterface>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UInteractInterface_Statics::ClassParams = {
		&UInteractInterface::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		FuncInfo,
		nullptr,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		UE_ARRAY_COUNT(FuncInfo),
		0,
		0,
		0x000840A1u,
		METADATA_PARAMS(Z_Construct_UClass_UInteractInterface_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UInteractInterface_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UInteractInterface()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UECodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_UInteractInterface_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(UInteractInterface, 2396911298);
	template<> COOKINGGAME_API UClass* StaticClass<UInteractInterface>()
	{
		return UInteractInterface::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_UInteractInterface(Z_Construct_UClass_UInteractInterface, &UInteractInterface::StaticClass, TEXT("/Script/CookingGame"), TEXT("UInteractInterface"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UInteractInterface);
	static FName NAME_UInteractInterface_ReactToInteract = FName(TEXT("ReactToInteract"));
	void IInteractInterface::Execute_ReactToInteract(UObject* O)
	{
		check(O != NULL);
		check(O->GetClass()->ImplementsInterface(UInteractInterface::StaticClass()));
		UFunction* const Func = O->FindFunction(NAME_UInteractInterface_ReactToInteract);
		if (Func)
		{
			O->ProcessEvent(Func, NULL);
		}
		else if (auto I = (IInteractInterface*)(O->GetNativeInterfaceAddress(UInteractInterface::StaticClass())))
		{
			I->ReactToInteract_Implementation();
		}
	}
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
