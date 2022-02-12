// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "CookingGame/Public/Interact/InteractableBase.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeInteractableBase() {}
// Cross Module References
	COOKINGGAME_API UClass* Z_Construct_UClass_AInteractableBase_NoRegister();
	COOKINGGAME_API UClass* Z_Construct_UClass_AInteractableBase();
	ENGINE_API UClass* Z_Construct_UClass_AActor();
	UPackage* Z_Construct_UPackage__Script_CookingGame();
	ENGINE_API UClass* Z_Construct_UClass_UStaticMeshComponent_NoRegister();
	COOKINGGAME_API UScriptStruct* Z_Construct_UScriptStruct_FInteractableData();
	COOKINGGAME_API UClass* Z_Construct_UClass_UInteractInterface_NoRegister();
// End Cross Module References
	void AInteractableBase::StaticRegisterNativesAInteractableBase()
	{
	}
	UClass* Z_Construct_UClass_AInteractableBase_NoRegister()
	{
		return AInteractableBase::StaticClass();
	}
	struct Z_Construct_UClass_AInteractableBase_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_MeshComp_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_MeshComp;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_InteractableData_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_InteractableData;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UECodeGen_Private::FImplementedInterfaceParams InterfaceParams[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_AInteractableBase_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_AActor,
		(UObject* (*)())Z_Construct_UPackage__Script_CookingGame,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AInteractableBase_Statics::Class_MetaDataParams[] = {
		{ "IncludePath", "Interact/InteractableBase.h" },
		{ "ModuleRelativePath", "Public/Interact/InteractableBase.h" },
	};
#endif
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AInteractableBase_Statics::NewProp_MeshComp_MetaData[] = {
		{ "AllowPrivateAccess", "true" },
		{ "Category", "Mesh" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/Interact/InteractableBase.h" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AInteractableBase_Statics::NewProp_MeshComp = { "MeshComp", nullptr, (EPropertyFlags)0x004000000008000d, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AInteractableBase, MeshComp), Z_Construct_UClass_UStaticMeshComponent_NoRegister, METADATA_PARAMS(Z_Construct_UClass_AInteractableBase_Statics::NewProp_MeshComp_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AInteractableBase_Statics::NewProp_MeshComp_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AInteractableBase_Statics::NewProp_InteractableData_MetaData[] = {
		{ "Category", "InteractableBase" },
		{ "ModuleRelativePath", "Public/Interact/InteractableBase.h" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_AInteractableBase_Statics::NewProp_InteractableData = { "InteractableData", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AInteractableBase, InteractableData), Z_Construct_UScriptStruct_FInteractableData, METADATA_PARAMS(Z_Construct_UClass_AInteractableBase_Statics::NewProp_InteractableData_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AInteractableBase_Statics::NewProp_InteractableData_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_AInteractableBase_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AInteractableBase_Statics::NewProp_MeshComp,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AInteractableBase_Statics::NewProp_InteractableData,
	};
		const UECodeGen_Private::FImplementedInterfaceParams Z_Construct_UClass_AInteractableBase_Statics::InterfaceParams[] = {
			{ Z_Construct_UClass_UInteractInterface_NoRegister, (int32)VTABLE_OFFSET(AInteractableBase, IInteractInterface), false },
		};
	const FCppClassTypeInfoStatic Z_Construct_UClass_AInteractableBase_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<AInteractableBase>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_AInteractableBase_Statics::ClassParams = {
		&AInteractableBase::StaticClass,
		"Engine",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_AInteractableBase_Statics::PropPointers,
		InterfaceParams,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		UE_ARRAY_COUNT(Z_Construct_UClass_AInteractableBase_Statics::PropPointers),
		UE_ARRAY_COUNT(InterfaceParams),
		0x009000A4u,
		METADATA_PARAMS(Z_Construct_UClass_AInteractableBase_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_AInteractableBase_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_AInteractableBase()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UECodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_AInteractableBase_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(AInteractableBase, 3197832349);
	template<> COOKINGGAME_API UClass* StaticClass<AInteractableBase>()
	{
		return AInteractableBase::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_AInteractableBase(Z_Construct_UClass_AInteractableBase, &AInteractableBase::StaticClass, TEXT("/Script/CookingGame"), TEXT("AInteractableBase"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(AInteractableBase);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
