// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "CookingGame/CookingGameCharacter.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeCookingGameCharacter() {}
// Cross Module References
	COOKINGGAME_API UEnum* Z_Construct_UEnum_CookingGame_EEquippedItem();
	UPackage* Z_Construct_UPackage__Script_CookingGame();
	COOKINGGAME_API UClass* Z_Construct_UClass_ACookingGameCharacter_NoRegister();
	COOKINGGAME_API UClass* Z_Construct_UClass_ACookingGameCharacter();
	ENGINE_API UClass* Z_Construct_UClass_ACharacter();
	COOKINGGAME_API UClass* Z_Construct_UClass_UInteractInterface_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_AActor_NoRegister();
	COOKINGGAME_API UClass* Z_Construct_UClass_AContainerActor_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_UStaticMesh_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_USpringArmComponent_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_UCameraComponent_NoRegister();
	COOKINGGAME_API UClass* Z_Construct_UClass_UInventoryComponent_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_UChildActorComponent_NoRegister();
	COOKINGGAME_API UScriptStruct* Z_Construct_UScriptStruct_FInteractableData();
	COOKINGGAME_API UClass* Z_Construct_UClass_ACaptureStudio_NoRegister();
// End Cross Module References
	static UEnum* EEquippedItem_StaticEnum()
	{
		static UEnum* Singleton = nullptr;
		if (!Singleton)
		{
			Singleton = GetStaticEnum(Z_Construct_UEnum_CookingGame_EEquippedItem, Z_Construct_UPackage__Script_CookingGame(), TEXT("EEquippedItem"));
		}
		return Singleton;
	}
	template<> COOKINGGAME_API UEnum* StaticEnum<EEquippedItem>()
	{
		return EEquippedItem_StaticEnum();
	}
	static FCompiledInDeferEnum Z_CompiledInDeferEnum_UEnum_EEquippedItem(EEquippedItem_StaticEnum, TEXT("/Script/CookingGame"), TEXT("EEquippedItem"), false, nullptr, nullptr);
	uint32 Get_Z_Construct_UEnum_CookingGame_EEquippedItem_Hash() { return 4224098933U; }
	UEnum* Z_Construct_UEnum_CookingGame_EEquippedItem()
	{
#if WITH_HOT_RELOAD
		UPackage* Outer = Z_Construct_UPackage__Script_CookingGame();
		static UEnum* ReturnEnum = FindExistingEnumIfHotReloadOrDynamic(Outer, TEXT("EEquippedItem"), 0, Get_Z_Construct_UEnum_CookingGame_EEquippedItem_Hash(), false);
#else
		static UEnum* ReturnEnum = nullptr;
#endif // WITH_HOT_RELOAD
		if (!ReturnEnum)
		{
			static const UECodeGen_Private::FEnumeratorParam Enumerators[] = {
				{ "None", (int64)None },
				{ "Pistol", (int64)Pistol },
				{ "Rifle", (int64)Rifle },
				{ "Shotgun", (int64)Shotgun },
				{ "Sniper", (int64)Sniper },
				{ "Smg", (int64)Smg },
				{ "Telescope", (int64)Telescope },
				{ "Bucket", (int64)Bucket },
			};
#if WITH_METADATA
			const UECodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[] = {
				{ "Bucket.Name", "Bucket" },
				{ "ModuleRelativePath", "CookingGameCharacter.h" },
				{ "None.Name", "None" },
				{ "Pistol.Name", "Pistol" },
				{ "Rifle.Name", "Rifle" },
				{ "Shotgun.Name", "Shotgun" },
				{ "Smg.Name", "Smg" },
				{ "Sniper.Name", "Sniper" },
				{ "Telescope.Name", "Telescope" },
			};
#endif
			static const UECodeGen_Private::FEnumParams EnumParams = {
				(UObject*(*)())Z_Construct_UPackage__Script_CookingGame,
				nullptr,
				"EEquippedItem",
				"EEquippedItem",
				Enumerators,
				UE_ARRAY_COUNT(Enumerators),
				RF_Public|RF_Transient|RF_MarkAsNative,
				EEnumFlags::None,
				UECodeGen_Private::EDynamicType::NotDynamic,
				(uint8)UEnum::ECppForm::Regular,
				METADATA_PARAMS(Enum_MetaDataParams, UE_ARRAY_COUNT(Enum_MetaDataParams))
			};
			UECodeGen_Private::ConstructUEnum(ReturnEnum, EnumParams);
		}
		return ReturnEnum;
	}
	DEFINE_FUNCTION(ACookingGameCharacter::execInteractServer)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		if (!P_THIS->InteractServer_Validate())
		{
			RPC_ValidateFailed(TEXT("InteractServer_Validate"));
			return;
		}
		P_THIS->InteractServer_Implementation();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(ACookingGameCharacter::execUpdateInventoryPreviewMesh)
	{
		P_GET_OBJECT(UStaticMesh,Z_Param_NewMesh);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->UpdateInventoryPreviewMesh(Z_Param_NewMesh);
		P_NATIVE_END;
	}
	static FName NAME_ACookingGameCharacter_AddInteractUI = FName(TEXT("AddInteractUI"));
	void ACookingGameCharacter::AddInteractUI(TScriptInterface<IInteractInterface> const& Interface, AActor* Actor)
	{
		CookingGameCharacter_eventAddInteractUI_Parms Parms;
		Parms.Interface=Interface;
		Parms.Actor=Actor;
		ProcessEvent(FindFunctionChecked(NAME_ACookingGameCharacter_AddInteractUI),&Parms);
	}
	static FName NAME_ACookingGameCharacter_InteractServer = FName(TEXT("InteractServer"));
	void ACookingGameCharacter::InteractServer()
	{
		ProcessEvent(FindFunctionChecked(NAME_ACookingGameCharacter_InteractServer),NULL);
	}
	static FName NAME_ACookingGameCharacter_OpenInventoryTransfer = FName(TEXT("OpenInventoryTransfer"));
	void ACookingGameCharacter::OpenInventoryTransfer(AContainerActor* Container)
	{
		CookingGameCharacter_eventOpenInventoryTransfer_Parms Parms;
		Parms.Container=Container;
		ProcessEvent(FindFunctionChecked(NAME_ACookingGameCharacter_OpenInventoryTransfer),&Parms);
	}
	static FName NAME_ACookingGameCharacter_RefreshInventories = FName(TEXT("RefreshInventories"));
	void ACookingGameCharacter::RefreshInventories()
	{
		ProcessEvent(FindFunctionChecked(NAME_ACookingGameCharacter_RefreshInventories),NULL);
	}
	static FName NAME_ACookingGameCharacter_RemoveInteractUI = FName(TEXT("RemoveInteractUI"));
	void ACookingGameCharacter::RemoveInteractUI()
	{
		ProcessEvent(FindFunctionChecked(NAME_ACookingGameCharacter_RemoveInteractUI),NULL);
	}
	void ACookingGameCharacter::StaticRegisterNativesACookingGameCharacter()
	{
		UClass* Class = ACookingGameCharacter::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "InteractServer", &ACookingGameCharacter::execInteractServer },
			{ "UpdateInventoryPreviewMesh", &ACookingGameCharacter::execUpdateInventoryPreviewMesh },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_ACookingGameCharacter_AddInteractUI_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Interface_MetaData[];
#endif
		static const UECodeGen_Private::FInterfacePropertyParams NewProp_Interface;
		static const UECodeGen_Private::FObjectPropertyParams NewProp_Actor;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ACookingGameCharacter_AddInteractUI_Statics::NewProp_Interface_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FInterfacePropertyParams Z_Construct_UFunction_ACookingGameCharacter_AddInteractUI_Statics::NewProp_Interface = { "Interface", nullptr, (EPropertyFlags)0x0014000008000182, UECodeGen_Private::EPropertyGenFlags::Interface, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(CookingGameCharacter_eventAddInteractUI_Parms, Interface), Z_Construct_UClass_UInteractInterface_NoRegister, METADATA_PARAMS(Z_Construct_UFunction_ACookingGameCharacter_AddInteractUI_Statics::NewProp_Interface_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_ACookingGameCharacter_AddInteractUI_Statics::NewProp_Interface_MetaData)) };
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_ACookingGameCharacter_AddInteractUI_Statics::NewProp_Actor = { "Actor", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(CookingGameCharacter_eventAddInteractUI_Parms, Actor), Z_Construct_UClass_AActor_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_ACookingGameCharacter_AddInteractUI_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ACookingGameCharacter_AddInteractUI_Statics::NewProp_Interface,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ACookingGameCharacter_AddInteractUI_Statics::NewProp_Actor,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ACookingGameCharacter_AddInteractUI_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "CookingGameCharacter.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_ACookingGameCharacter_AddInteractUI_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ACookingGameCharacter, nullptr, "AddInteractUI", nullptr, nullptr, sizeof(CookingGameCharacter_eventAddInteractUI_Parms), Z_Construct_UFunction_ACookingGameCharacter_AddInteractUI_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_ACookingGameCharacter_AddInteractUI_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x08480800, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_ACookingGameCharacter_AddInteractUI_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_ACookingGameCharacter_AddInteractUI_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_ACookingGameCharacter_AddInteractUI()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_ACookingGameCharacter_AddInteractUI_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_ACookingGameCharacter_InteractServer_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ACookingGameCharacter_InteractServer_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "CookingGameCharacter.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_ACookingGameCharacter_InteractServer_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ACookingGameCharacter, nullptr, "InteractServer", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x80280CC0, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_ACookingGameCharacter_InteractServer_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_ACookingGameCharacter_InteractServer_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_ACookingGameCharacter_InteractServer()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_ACookingGameCharacter_InteractServer_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_ACookingGameCharacter_OpenInventoryTransfer_Statics
	{
		static const UECodeGen_Private::FObjectPropertyParams NewProp_Container;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_ACookingGameCharacter_OpenInventoryTransfer_Statics::NewProp_Container = { "Container", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(CookingGameCharacter_eventOpenInventoryTransfer_Parms, Container), Z_Construct_UClass_AContainerActor_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_ACookingGameCharacter_OpenInventoryTransfer_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ACookingGameCharacter_OpenInventoryTransfer_Statics::NewProp_Container,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ACookingGameCharacter_OpenInventoryTransfer_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "CookingGameCharacter.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_ACookingGameCharacter_OpenInventoryTransfer_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ACookingGameCharacter, nullptr, "OpenInventoryTransfer", nullptr, nullptr, sizeof(CookingGameCharacter_eventOpenInventoryTransfer_Parms), Z_Construct_UFunction_ACookingGameCharacter_OpenInventoryTransfer_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_ACookingGameCharacter_OpenInventoryTransfer_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x08020800, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_ACookingGameCharacter_OpenInventoryTransfer_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_ACookingGameCharacter_OpenInventoryTransfer_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_ACookingGameCharacter_OpenInventoryTransfer()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_ACookingGameCharacter_OpenInventoryTransfer_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_ACookingGameCharacter_RefreshInventories_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ACookingGameCharacter_RefreshInventories_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "CookingGameCharacter.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_ACookingGameCharacter_RefreshInventories_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ACookingGameCharacter, nullptr, "RefreshInventories", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x08020800, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_ACookingGameCharacter_RefreshInventories_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_ACookingGameCharacter_RefreshInventories_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_ACookingGameCharacter_RefreshInventories()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_ACookingGameCharacter_RefreshInventories_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_ACookingGameCharacter_RemoveInteractUI_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ACookingGameCharacter_RemoveInteractUI_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "CookingGameCharacter.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_ACookingGameCharacter_RemoveInteractUI_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ACookingGameCharacter, nullptr, "RemoveInteractUI", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x08080800, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_ACookingGameCharacter_RemoveInteractUI_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_ACookingGameCharacter_RemoveInteractUI_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_ACookingGameCharacter_RemoveInteractUI()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_ACookingGameCharacter_RemoveInteractUI_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_ACookingGameCharacter_UpdateInventoryPreviewMesh_Statics
	{
		struct CookingGameCharacter_eventUpdateInventoryPreviewMesh_Parms
		{
			UStaticMesh* NewMesh;
		};
		static const UECodeGen_Private::FObjectPropertyParams NewProp_NewMesh;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_ACookingGameCharacter_UpdateInventoryPreviewMesh_Statics::NewProp_NewMesh = { "NewMesh", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(CookingGameCharacter_eventUpdateInventoryPreviewMesh_Parms, NewMesh), Z_Construct_UClass_UStaticMesh_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_ACookingGameCharacter_UpdateInventoryPreviewMesh_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ACookingGameCharacter_UpdateInventoryPreviewMesh_Statics::NewProp_NewMesh,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ACookingGameCharacter_UpdateInventoryPreviewMesh_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "CookingGameCharacter.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_ACookingGameCharacter_UpdateInventoryPreviewMesh_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ACookingGameCharacter, nullptr, "UpdateInventoryPreviewMesh", nullptr, nullptr, sizeof(CookingGameCharacter_eventUpdateInventoryPreviewMesh_Parms), Z_Construct_UFunction_ACookingGameCharacter_UpdateInventoryPreviewMesh_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_ACookingGameCharacter_UpdateInventoryPreviewMesh_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_ACookingGameCharacter_UpdateInventoryPreviewMesh_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_ACookingGameCharacter_UpdateInventoryPreviewMesh_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_ACookingGameCharacter_UpdateInventoryPreviewMesh()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_ACookingGameCharacter_UpdateInventoryPreviewMesh_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	UClass* Z_Construct_UClass_ACookingGameCharacter_NoRegister()
	{
		return ACookingGameCharacter::StaticClass();
	}
	struct Z_Construct_UClass_ACookingGameCharacter_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_CameraBoom_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_CameraBoom;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_FollowCamera_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_FollowCamera;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Inventory_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_Inventory;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_CaptureStudio_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_CaptureStudio;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_BaseTurnRate_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_BaseTurnRate;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_BaseLookUpRate_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_BaseLookUpRate;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_PlayerInteractionDistance_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_PlayerInteractionDistance;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_InteractableData_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_InteractableData;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_CaptureStudioRef_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_CaptureStudioRef;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UECodeGen_Private::FImplementedInterfaceParams InterfaceParams[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_ACookingGameCharacter_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_ACharacter,
		(UObject* (*)())Z_Construct_UPackage__Script_CookingGame,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_ACookingGameCharacter_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_ACookingGameCharacter_AddInteractUI, "AddInteractUI" }, // 465529205
		{ &Z_Construct_UFunction_ACookingGameCharacter_InteractServer, "InteractServer" }, // 3949034928
		{ &Z_Construct_UFunction_ACookingGameCharacter_OpenInventoryTransfer, "OpenInventoryTransfer" }, // 2163815934
		{ &Z_Construct_UFunction_ACookingGameCharacter_RefreshInventories, "RefreshInventories" }, // 1446950666
		{ &Z_Construct_UFunction_ACookingGameCharacter_RemoveInteractUI, "RemoveInteractUI" }, // 4027021142
		{ &Z_Construct_UFunction_ACookingGameCharacter_UpdateInventoryPreviewMesh, "UpdateInventoryPreviewMesh" }, // 1248440862
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ACookingGameCharacter_Statics::Class_MetaDataParams[] = {
		{ "HideCategories", "Navigation" },
		{ "IncludePath", "CookingGameCharacter.h" },
		{ "ModuleRelativePath", "CookingGameCharacter.h" },
	};
#endif
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ACookingGameCharacter_Statics::NewProp_CameraBoom_MetaData[] = {
		{ "AllowPrivateAccess", "true" },
		{ "Category", "Camera" },
		{ "Comment", "/** Camera boom positioning the camera behind the character */" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "CookingGameCharacter.h" },
		{ "ToolTip", "Camera boom positioning the camera behind the character" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_ACookingGameCharacter_Statics::NewProp_CameraBoom = { "CameraBoom", nullptr, (EPropertyFlags)0x00400000000a001d, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ACookingGameCharacter, CameraBoom), Z_Construct_UClass_USpringArmComponent_NoRegister, METADATA_PARAMS(Z_Construct_UClass_ACookingGameCharacter_Statics::NewProp_CameraBoom_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ACookingGameCharacter_Statics::NewProp_CameraBoom_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ACookingGameCharacter_Statics::NewProp_FollowCamera_MetaData[] = {
		{ "AllowPrivateAccess", "true" },
		{ "Category", "Camera" },
		{ "Comment", "/** Follow camera */" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "CookingGameCharacter.h" },
		{ "ToolTip", "Follow camera" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_ACookingGameCharacter_Statics::NewProp_FollowCamera = { "FollowCamera", nullptr, (EPropertyFlags)0x00400000000a001d, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ACookingGameCharacter, FollowCamera), Z_Construct_UClass_UCameraComponent_NoRegister, METADATA_PARAMS(Z_Construct_UClass_ACookingGameCharacter_Statics::NewProp_FollowCamera_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ACookingGameCharacter_Statics::NewProp_FollowCamera_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ACookingGameCharacter_Statics::NewProp_Inventory_MetaData[] = {
		{ "AllowPrivateAccess", "true" },
		{ "Category", "Inventory" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "CookingGameCharacter.h" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_ACookingGameCharacter_Statics::NewProp_Inventory = { "Inventory", nullptr, (EPropertyFlags)0x004000000008000d, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ACookingGameCharacter, Inventory), Z_Construct_UClass_UInventoryComponent_NoRegister, METADATA_PARAMS(Z_Construct_UClass_ACookingGameCharacter_Statics::NewProp_Inventory_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ACookingGameCharacter_Statics::NewProp_Inventory_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ACookingGameCharacter_Statics::NewProp_CaptureStudio_MetaData[] = {
		{ "AllowPrivateAccess", "true" },
		{ "Category", "Inventory" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "CookingGameCharacter.h" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_ACookingGameCharacter_Statics::NewProp_CaptureStudio = { "CaptureStudio", nullptr, (EPropertyFlags)0x004000000008000d, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ACookingGameCharacter, CaptureStudio), Z_Construct_UClass_UChildActorComponent_NoRegister, METADATA_PARAMS(Z_Construct_UClass_ACookingGameCharacter_Statics::NewProp_CaptureStudio_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ACookingGameCharacter_Statics::NewProp_CaptureStudio_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ACookingGameCharacter_Statics::NewProp_BaseTurnRate_MetaData[] = {
		{ "Category", "Camera" },
		{ "Comment", "/** Base turn rate, in deg/sec. Other scaling may affect final turn rate. */" },
		{ "ModuleRelativePath", "CookingGameCharacter.h" },
		{ "ToolTip", "Base turn rate, in deg/sec. Other scaling may affect final turn rate." },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_ACookingGameCharacter_Statics::NewProp_BaseTurnRate = { "BaseTurnRate", nullptr, (EPropertyFlags)0x0010000000020015, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ACookingGameCharacter, BaseTurnRate), METADATA_PARAMS(Z_Construct_UClass_ACookingGameCharacter_Statics::NewProp_BaseTurnRate_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ACookingGameCharacter_Statics::NewProp_BaseTurnRate_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ACookingGameCharacter_Statics::NewProp_BaseLookUpRate_MetaData[] = {
		{ "Category", "Camera" },
		{ "Comment", "/** Base look up/down rate, in deg/sec. Other scaling may affect final rate. */" },
		{ "ModuleRelativePath", "CookingGameCharacter.h" },
		{ "ToolTip", "Base look up/down rate, in deg/sec. Other scaling may affect final rate." },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_ACookingGameCharacter_Statics::NewProp_BaseLookUpRate = { "BaseLookUpRate", nullptr, (EPropertyFlags)0x0010000000020015, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ACookingGameCharacter, BaseLookUpRate), METADATA_PARAMS(Z_Construct_UClass_ACookingGameCharacter_Statics::NewProp_BaseLookUpRate_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ACookingGameCharacter_Statics::NewProp_BaseLookUpRate_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ACookingGameCharacter_Statics::NewProp_PlayerInteractionDistance_MetaData[] = {
		{ "Category", "Camera" },
		{ "Comment", "/** How far the player can interact with an object */" },
		{ "ModuleRelativePath", "CookingGameCharacter.h" },
		{ "ToolTip", "How far the player can interact with an object" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_ACookingGameCharacter_Statics::NewProp_PlayerInteractionDistance = { "PlayerInteractionDistance", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ACookingGameCharacter, PlayerInteractionDistance), METADATA_PARAMS(Z_Construct_UClass_ACookingGameCharacter_Statics::NewProp_PlayerInteractionDistance_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ACookingGameCharacter_Statics::NewProp_PlayerInteractionDistance_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ACookingGameCharacter_Statics::NewProp_InteractableData_MetaData[] = {
		{ "Category", "CookingGameCharacter" },
		{ "ModuleRelativePath", "CookingGameCharacter.h" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_ACookingGameCharacter_Statics::NewProp_InteractableData = { "InteractableData", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ACookingGameCharacter, InteractableData), Z_Construct_UScriptStruct_FInteractableData, METADATA_PARAMS(Z_Construct_UClass_ACookingGameCharacter_Statics::NewProp_InteractableData_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ACookingGameCharacter_Statics::NewProp_InteractableData_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ACookingGameCharacter_Statics::NewProp_CaptureStudioRef_MetaData[] = {
		{ "AllowPrivateAccess", "true" },
		{ "Category", "Inventory" },
		{ "ModuleRelativePath", "CookingGameCharacter.h" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_ACookingGameCharacter_Statics::NewProp_CaptureStudioRef = { "CaptureStudioRef", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ACookingGameCharacter, CaptureStudioRef), Z_Construct_UClass_ACaptureStudio_NoRegister, METADATA_PARAMS(Z_Construct_UClass_ACookingGameCharacter_Statics::NewProp_CaptureStudioRef_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ACookingGameCharacter_Statics::NewProp_CaptureStudioRef_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_ACookingGameCharacter_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ACookingGameCharacter_Statics::NewProp_CameraBoom,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ACookingGameCharacter_Statics::NewProp_FollowCamera,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ACookingGameCharacter_Statics::NewProp_Inventory,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ACookingGameCharacter_Statics::NewProp_CaptureStudio,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ACookingGameCharacter_Statics::NewProp_BaseTurnRate,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ACookingGameCharacter_Statics::NewProp_BaseLookUpRate,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ACookingGameCharacter_Statics::NewProp_PlayerInteractionDistance,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ACookingGameCharacter_Statics::NewProp_InteractableData,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ACookingGameCharacter_Statics::NewProp_CaptureStudioRef,
	};
		const UECodeGen_Private::FImplementedInterfaceParams Z_Construct_UClass_ACookingGameCharacter_Statics::InterfaceParams[] = {
			{ Z_Construct_UClass_UInteractInterface_NoRegister, (int32)VTABLE_OFFSET(ACookingGameCharacter, IInteractInterface), false },
		};
	const FCppClassTypeInfoStatic Z_Construct_UClass_ACookingGameCharacter_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<ACookingGameCharacter>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_ACookingGameCharacter_Statics::ClassParams = {
		&ACookingGameCharacter::StaticClass,
		"Game",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		FuncInfo,
		Z_Construct_UClass_ACookingGameCharacter_Statics::PropPointers,
		InterfaceParams,
		UE_ARRAY_COUNT(DependentSingletons),
		UE_ARRAY_COUNT(FuncInfo),
		UE_ARRAY_COUNT(Z_Construct_UClass_ACookingGameCharacter_Statics::PropPointers),
		UE_ARRAY_COUNT(InterfaceParams),
		0x008000A4u,
		METADATA_PARAMS(Z_Construct_UClass_ACookingGameCharacter_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_ACookingGameCharacter_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_ACookingGameCharacter()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UECodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_ACookingGameCharacter_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(ACookingGameCharacter, 2075313636);
	template<> COOKINGGAME_API UClass* StaticClass<ACookingGameCharacter>()
	{
		return ACookingGameCharacter::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_ACookingGameCharacter(Z_Construct_UClass_ACookingGameCharacter, &ACookingGameCharacter::StaticClass, TEXT("/Script/CookingGame"), TEXT("ACookingGameCharacter"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(ACookingGameCharacter);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
