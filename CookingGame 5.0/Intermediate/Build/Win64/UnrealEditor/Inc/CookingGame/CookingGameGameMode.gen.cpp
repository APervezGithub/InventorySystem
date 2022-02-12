// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "CookingGame/CookingGameGameMode.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeCookingGameGameMode() {}
// Cross Module References
	COOKINGGAME_API UClass* Z_Construct_UClass_ACookingGameGameMode_NoRegister();
	COOKINGGAME_API UClass* Z_Construct_UClass_ACookingGameGameMode();
	ENGINE_API UClass* Z_Construct_UClass_AGameModeBase();
	UPackage* Z_Construct_UPackage__Script_CookingGame();
// End Cross Module References
	void ACookingGameGameMode::StaticRegisterNativesACookingGameGameMode()
	{
	}
	UClass* Z_Construct_UClass_ACookingGameGameMode_NoRegister()
	{
		return ACookingGameGameMode::StaticClass();
	}
	struct Z_Construct_UClass_ACookingGameGameMode_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_ACookingGameGameMode_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_AGameModeBase,
		(UObject* (*)())Z_Construct_UPackage__Script_CookingGame,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ACookingGameGameMode_Statics::Class_MetaDataParams[] = {
		{ "HideCategories", "Info Rendering MovementReplication Replication Actor Input Movement Collision Rendering LOD WorldPartition DataLayers Utilities|Transformation" },
		{ "IncludePath", "CookingGameGameMode.h" },
		{ "ModuleRelativePath", "CookingGameGameMode.h" },
		{ "ShowCategories", "Input|MouseInput Input|TouchInput" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_ACookingGameGameMode_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<ACookingGameGameMode>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_ACookingGameGameMode_Statics::ClassParams = {
		&ACookingGameGameMode::StaticClass,
		"Game",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		nullptr,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		0,
		0,
		0x008802ACu,
		METADATA_PARAMS(Z_Construct_UClass_ACookingGameGameMode_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_ACookingGameGameMode_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_ACookingGameGameMode()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UECodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_ACookingGameGameMode_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(ACookingGameGameMode, 4180476330);
	template<> COOKINGGAME_API UClass* StaticClass<ACookingGameGameMode>()
	{
		return ACookingGameGameMode::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_ACookingGameGameMode(Z_Construct_UClass_ACookingGameGameMode, &ACookingGameGameMode::StaticClass, TEXT("/Script/CookingGame"), TEXT("ACookingGameGameMode"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(ACookingGameGameMode);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
