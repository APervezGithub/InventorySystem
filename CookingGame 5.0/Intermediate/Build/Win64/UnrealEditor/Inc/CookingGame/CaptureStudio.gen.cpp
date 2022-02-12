// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "CookingGame/Public/Inventory/CaptureStudio.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeCaptureStudio() {}
// Cross Module References
	COOKINGGAME_API UClass* Z_Construct_UClass_ACaptureStudio_NoRegister();
	COOKINGGAME_API UClass* Z_Construct_UClass_ACaptureStudio();
	ENGINE_API UClass* Z_Construct_UClass_AActor();
	UPackage* Z_Construct_UPackage__Script_CookingGame();
	ENGINE_API UClass* Z_Construct_UClass_UStaticMesh_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_USceneComponent_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_UStaticMeshComponent_NoRegister();
// End Cross Module References
	static FName NAME_ACaptureStudio_SetDisplayMesh = FName(TEXT("SetDisplayMesh"));
	void ACaptureStudio::SetDisplayMesh(UStaticMesh* NewMesh)
	{
		CaptureStudio_eventSetDisplayMesh_Parms Parms;
		Parms.NewMesh=NewMesh;
		ProcessEvent(FindFunctionChecked(NAME_ACaptureStudio_SetDisplayMesh),&Parms);
	}
	void ACaptureStudio::StaticRegisterNativesACaptureStudio()
	{
	}
	struct Z_Construct_UFunction_ACaptureStudio_SetDisplayMesh_Statics
	{
		static const UECodeGen_Private::FObjectPropertyParams NewProp_NewMesh;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_ACaptureStudio_SetDisplayMesh_Statics::NewProp_NewMesh = { "NewMesh", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(CaptureStudio_eventSetDisplayMesh_Parms, NewMesh), Z_Construct_UClass_UStaticMesh_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_ACaptureStudio_SetDisplayMesh_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ACaptureStudio_SetDisplayMesh_Statics::NewProp_NewMesh,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ACaptureStudio_SetDisplayMesh_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/Inventory/CaptureStudio.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_ACaptureStudio_SetDisplayMesh_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ACaptureStudio, nullptr, "SetDisplayMesh", nullptr, nullptr, sizeof(CaptureStudio_eventSetDisplayMesh_Parms), Z_Construct_UFunction_ACaptureStudio_SetDisplayMesh_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_ACaptureStudio_SetDisplayMesh_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x08020800, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_ACaptureStudio_SetDisplayMesh_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_ACaptureStudio_SetDisplayMesh_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_ACaptureStudio_SetDisplayMesh()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_ACaptureStudio_SetDisplayMesh_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	UClass* Z_Construct_UClass_ACaptureStudio_NoRegister()
	{
		return ACaptureStudio::StaticClass();
	}
	struct Z_Construct_UClass_ACaptureStudio_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_SceneComponent_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_SceneComponent;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_DisplayMesh_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_DisplayMesh;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_ACaptureStudio_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_AActor,
		(UObject* (*)())Z_Construct_UPackage__Script_CookingGame,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_ACaptureStudio_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_ACaptureStudio_SetDisplayMesh, "SetDisplayMesh" }, // 2254802323
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ACaptureStudio_Statics::Class_MetaDataParams[] = {
		{ "IncludePath", "Inventory/CaptureStudio.h" },
		{ "ModuleRelativePath", "Public/Inventory/CaptureStudio.h" },
	};
#endif
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ACaptureStudio_Statics::NewProp_SceneComponent_MetaData[] = {
		{ "Category", "CaptureStudio" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/Inventory/CaptureStudio.h" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_ACaptureStudio_Statics::NewProp_SceneComponent = { "SceneComponent", nullptr, (EPropertyFlags)0x001000000008000d, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ACaptureStudio, SceneComponent), Z_Construct_UClass_USceneComponent_NoRegister, METADATA_PARAMS(Z_Construct_UClass_ACaptureStudio_Statics::NewProp_SceneComponent_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ACaptureStudio_Statics::NewProp_SceneComponent_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ACaptureStudio_Statics::NewProp_DisplayMesh_MetaData[] = {
		{ "Category", "CaptureStudio" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/Inventory/CaptureStudio.h" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_ACaptureStudio_Statics::NewProp_DisplayMesh = { "DisplayMesh", nullptr, (EPropertyFlags)0x001000000008000d, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ACaptureStudio, DisplayMesh), Z_Construct_UClass_UStaticMeshComponent_NoRegister, METADATA_PARAMS(Z_Construct_UClass_ACaptureStudio_Statics::NewProp_DisplayMesh_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ACaptureStudio_Statics::NewProp_DisplayMesh_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_ACaptureStudio_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ACaptureStudio_Statics::NewProp_SceneComponent,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ACaptureStudio_Statics::NewProp_DisplayMesh,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_ACaptureStudio_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<ACaptureStudio>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_ACaptureStudio_Statics::ClassParams = {
		&ACaptureStudio::StaticClass,
		"Engine",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		FuncInfo,
		Z_Construct_UClass_ACaptureStudio_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		UE_ARRAY_COUNT(FuncInfo),
		UE_ARRAY_COUNT(Z_Construct_UClass_ACaptureStudio_Statics::PropPointers),
		0,
		0x009000A4u,
		METADATA_PARAMS(Z_Construct_UClass_ACaptureStudio_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_ACaptureStudio_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_ACaptureStudio()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UECodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_ACaptureStudio_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(ACaptureStudio, 848044715);
	template<> COOKINGGAME_API UClass* StaticClass<ACaptureStudio>()
	{
		return ACaptureStudio::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_ACaptureStudio(Z_Construct_UClass_ACaptureStudio, &ACaptureStudio::StaticClass, TEXT("/Script/CookingGame"), TEXT("ACaptureStudio"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(ACaptureStudio);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
