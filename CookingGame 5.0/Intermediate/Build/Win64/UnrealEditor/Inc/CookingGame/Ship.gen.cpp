// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "CookingGame/Public/Floats/Ship.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeShip() {}
// Cross Module References
	COOKINGGAME_API UClass* Z_Construct_UClass_AShip_NoRegister();
	COOKINGGAME_API UClass* Z_Construct_UClass_AShip();
	ENGINE_API UClass* Z_Construct_UClass_APawn();
	UPackage* Z_Construct_UPackage__Script_CookingGame();
	ENGINE_API UClass* Z_Construct_UClass_UStaticMeshComponent_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_UChildActorComponent_NoRegister();
// End Cross Module References
	void AShip::StaticRegisterNativesAShip()
	{
	}
	UClass* Z_Construct_UClass_AShip_NoRegister()
	{
		return AShip::StaticClass();
	}
	struct Z_Construct_UClass_AShip_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_ShipMesh_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_ShipMesh;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Helm_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_Helm;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Cannon1_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_Cannon1;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_MaxMovementSpeed_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_MaxMovementSpeed;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_MaxTurningSpeed_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_MaxTurningSpeed;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_AShip_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_APawn,
		(UObject* (*)())Z_Construct_UPackage__Script_CookingGame,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AShip_Statics::Class_MetaDataParams[] = {
		{ "HideCategories", "Navigation" },
		{ "IncludePath", "Floats/Ship.h" },
		{ "ModuleRelativePath", "Public/Floats/Ship.h" },
	};
#endif
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AShip_Statics::NewProp_ShipMesh_MetaData[] = {
		{ "AllowPrivateAccess", "true" },
		{ "Category", "Ship" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/Floats/Ship.h" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AShip_Statics::NewProp_ShipMesh = { "ShipMesh", nullptr, (EPropertyFlags)0x001000000009001d, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AShip, ShipMesh), Z_Construct_UClass_UStaticMeshComponent_NoRegister, METADATA_PARAMS(Z_Construct_UClass_AShip_Statics::NewProp_ShipMesh_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AShip_Statics::NewProp_ShipMesh_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AShip_Statics::NewProp_Helm_MetaData[] = {
		{ "AllowPrivateAccess", "true" },
		{ "Category", "Ship" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/Floats/Ship.h" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AShip_Statics::NewProp_Helm = { "Helm", nullptr, (EPropertyFlags)0x001000000009001d, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AShip, Helm), Z_Construct_UClass_UChildActorComponent_NoRegister, METADATA_PARAMS(Z_Construct_UClass_AShip_Statics::NewProp_Helm_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AShip_Statics::NewProp_Helm_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AShip_Statics::NewProp_Cannon1_MetaData[] = {
		{ "AllowPrivateAccess", "true" },
		{ "Category", "Ship" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/Floats/Ship.h" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AShip_Statics::NewProp_Cannon1 = { "Cannon1", nullptr, (EPropertyFlags)0x001000000009001d, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AShip, Cannon1), Z_Construct_UClass_UChildActorComponent_NoRegister, METADATA_PARAMS(Z_Construct_UClass_AShip_Statics::NewProp_Cannon1_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AShip_Statics::NewProp_Cannon1_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AShip_Statics::NewProp_MaxMovementSpeed_MetaData[] = {
		{ "Category", "Movement" },
		{ "Comment", "//UPROPERTY(EditDefaultsOnly, BlueprintReadOnly, Category = Ship, meta = (AllowPrivateAccess = \"true\"))\n//class UBuoyancyComponent* BuoyancyComponent;\n" },
		{ "ModuleRelativePath", "Public/Floats/Ship.h" },
		{ "ToolTip", "UPROPERTY(EditDefaultsOnly, BlueprintReadOnly, Category = Ship, meta = (AllowPrivateAccess = \"true\"))\nclass UBuoyancyComponent* BuoyancyComponent;" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_AShip_Statics::NewProp_MaxMovementSpeed = { "MaxMovementSpeed", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AShip, MaxMovementSpeed), METADATA_PARAMS(Z_Construct_UClass_AShip_Statics::NewProp_MaxMovementSpeed_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AShip_Statics::NewProp_MaxMovementSpeed_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AShip_Statics::NewProp_MaxTurningSpeed_MetaData[] = {
		{ "Category", "Movement" },
		{ "ModuleRelativePath", "Public/Floats/Ship.h" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_AShip_Statics::NewProp_MaxTurningSpeed = { "MaxTurningSpeed", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AShip, MaxTurningSpeed), METADATA_PARAMS(Z_Construct_UClass_AShip_Statics::NewProp_MaxTurningSpeed_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AShip_Statics::NewProp_MaxTurningSpeed_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_AShip_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AShip_Statics::NewProp_ShipMesh,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AShip_Statics::NewProp_Helm,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AShip_Statics::NewProp_Cannon1,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AShip_Statics::NewProp_MaxMovementSpeed,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AShip_Statics::NewProp_MaxTurningSpeed,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_AShip_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<AShip>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_AShip_Statics::ClassParams = {
		&AShip::StaticClass,
		"Game",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_AShip_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		UE_ARRAY_COUNT(Z_Construct_UClass_AShip_Statics::PropPointers),
		0,
		0x009000A4u,
		METADATA_PARAMS(Z_Construct_UClass_AShip_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_AShip_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_AShip()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UECodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_AShip_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(AShip, 828748097);
	template<> COOKINGGAME_API UClass* StaticClass<AShip>()
	{
		return AShip::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_AShip(Z_Construct_UClass_AShip, &AShip::StaticClass, TEXT("/Script/CookingGame"), TEXT("AShip"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(AShip);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
