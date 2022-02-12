// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "CookingGame/Public/Inventory/ContainerActor.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeContainerActor() {}
// Cross Module References
	COOKINGGAME_API UClass* Z_Construct_UClass_AContainerActor_NoRegister();
	COOKINGGAME_API UClass* Z_Construct_UClass_AContainerActor();
	COOKINGGAME_API UClass* Z_Construct_UClass_AInteractableBase();
	UPackage* Z_Construct_UPackage__Script_CookingGame();
	COOKINGGAME_API UClass* Z_Construct_UClass_UInventoryComponent_NoRegister();
// End Cross Module References
	void AContainerActor::StaticRegisterNativesAContainerActor()
	{
	}
	UClass* Z_Construct_UClass_AContainerActor_NoRegister()
	{
		return AContainerActor::StaticClass();
	}
	struct Z_Construct_UClass_AContainerActor_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_InventoryComp_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_InventoryComp;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_AContainerActor_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_AInteractableBase,
		(UObject* (*)())Z_Construct_UPackage__Script_CookingGame,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AContainerActor_Statics::Class_MetaDataParams[] = {
		{ "Comment", "/**\n * \n */" },
		{ "IncludePath", "Inventory/ContainerActor.h" },
		{ "ModuleRelativePath", "Public/Inventory/ContainerActor.h" },
	};
#endif
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AContainerActor_Statics::NewProp_InventoryComp_MetaData[] = {
		{ "AllowPrivateAccess", "true" },
		{ "Category", "Inventory" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/Inventory/ContainerActor.h" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AContainerActor_Statics::NewProp_InventoryComp = { "InventoryComp", nullptr, (EPropertyFlags)0x004000000008000d, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AContainerActor, InventoryComp), Z_Construct_UClass_UInventoryComponent_NoRegister, METADATA_PARAMS(Z_Construct_UClass_AContainerActor_Statics::NewProp_InventoryComp_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AContainerActor_Statics::NewProp_InventoryComp_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_AContainerActor_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AContainerActor_Statics::NewProp_InventoryComp,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_AContainerActor_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<AContainerActor>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_AContainerActor_Statics::ClassParams = {
		&AContainerActor::StaticClass,
		"Engine",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_AContainerActor_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		UE_ARRAY_COUNT(Z_Construct_UClass_AContainerActor_Statics::PropPointers),
		0,
		0x009000A4u,
		METADATA_PARAMS(Z_Construct_UClass_AContainerActor_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_AContainerActor_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_AContainerActor()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UECodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_AContainerActor_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(AContainerActor, 664883641);
	template<> COOKINGGAME_API UClass* StaticClass<AContainerActor>()
	{
		return AContainerActor::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_AContainerActor(Z_Construct_UClass_AContainerActor, &AContainerActor::StaticClass, TEXT("/Script/CookingGame"), TEXT("AContainerActor"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(AContainerActor);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
