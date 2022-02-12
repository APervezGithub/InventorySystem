// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "CookingGame/Public/Character/CookingGameController.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeCookingGameController() {}
// Cross Module References
	COOKINGGAME_API UClass* Z_Construct_UClass_ACookingGameController_NoRegister();
	COOKINGGAME_API UClass* Z_Construct_UClass_ACookingGameController();
	ENGINE_API UClass* Z_Construct_UClass_APlayerController();
	UPackage* Z_Construct_UPackage__Script_CookingGame();
	COOKINGGAME_API UClass* Z_Construct_UClass_UInventoryComponent_NoRegister();
	COOKINGGAME_API UScriptStruct* Z_Construct_UScriptStruct_FSlotStructure();
// End Cross Module References
	DEFINE_FUNCTION(ACookingGameController::execServer_SetInteractingInventory)
	{
		P_GET_OBJECT(UInventoryComponent,Z_Param_NewInventory);
		P_FINISH;
		P_NATIVE_BEGIN;
		if (!P_THIS->Server_SetInteractingInventory_Validate(Z_Param_NewInventory))
		{
			RPC_ValidateFailed(TEXT("Server_SetInteractingInventory_Validate"));
			return;
		}
		P_THIS->Server_SetInteractingInventory_Implementation(Z_Param_NewInventory);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(ACookingGameController::execServer_SetOwnInventory)
	{
		P_GET_OBJECT(UInventoryComponent,Z_Param_NewInventory);
		P_FINISH;
		P_NATIVE_BEGIN;
		if (!P_THIS->Server_SetOwnInventory_Validate(Z_Param_NewInventory))
		{
			RPC_ValidateFailed(TEXT("Server_SetOwnInventory_Validate"));
			return;
		}
		P_THIS->Server_SetOwnInventory_Implementation(Z_Param_NewInventory);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(ACookingGameController::execServer_UseItem)
	{
		P_GET_PROPERTY(FIntProperty,Z_Param_ItemIndex);
		P_FINISH;
		P_NATIVE_BEGIN;
		if (!P_THIS->Server_UseItem_Validate(Z_Param_ItemIndex))
		{
			RPC_ValidateFailed(TEXT("Server_UseItem_Validate"));
			return;
		}
		P_THIS->Server_UseItem_Implementation(Z_Param_ItemIndex);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(ACookingGameController::execServer_TransferBetweenInventories)
	{
		P_GET_OBJECT(UInventoryComponent,Z_Param_ReceivingInventory);
		P_GET_OBJECT(UInventoryComponent,Z_Param_GivingInventory);
		P_GET_PROPERTY(FIntProperty,Z_Param_GivingSlotIndex);
		P_GET_PROPERTY(FIntProperty,Z_Param_Quantity);
		P_GET_STRUCT(FSlotStructure,Z_Param_Item);
		P_FINISH;
		P_NATIVE_BEGIN;
		if (!P_THIS->Server_TransferBetweenInventories_Validate(Z_Param_ReceivingInventory,Z_Param_GivingInventory,Z_Param_GivingSlotIndex,Z_Param_Quantity,Z_Param_Item))
		{
			RPC_ValidateFailed(TEXT("Server_TransferBetweenInventories_Validate"));
			return;
		}
		P_THIS->Server_TransferBetweenInventories_Implementation(Z_Param_ReceivingInventory,Z_Param_GivingInventory,Z_Param_GivingSlotIndex,Z_Param_Quantity,Z_Param_Item);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(ACookingGameController::execServer_GiveToContainer)
	{
		P_GET_OBJECT(UInventoryComponent,Z_Param_OtherInventory);
		P_GET_STRUCT(FSlotStructure,Z_Param_Item);
		P_FINISH;
		P_NATIVE_BEGIN;
		if (!P_THIS->Server_GiveToContainer_Validate(Z_Param_OtherInventory,Z_Param_Item))
		{
			RPC_ValidateFailed(TEXT("Server_GiveToContainer_Validate"));
			return;
		}
		P_THIS->Server_GiveToContainer_Implementation(Z_Param_OtherInventory,Z_Param_Item);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(ACookingGameController::execServer_TakeFromContainer)
	{
		P_GET_OBJECT(UInventoryComponent,Z_Param_OtherInventory);
		P_GET_PROPERTY(FIntProperty,Z_Param_SlotIndex);
		P_GET_PROPERTY(FIntProperty,Z_Param_Quantity);
		P_FINISH;
		P_NATIVE_BEGIN;
		if (!P_THIS->Server_TakeFromContainer_Validate(Z_Param_OtherInventory,Z_Param_SlotIndex,Z_Param_Quantity))
		{
			RPC_ValidateFailed(TEXT("Server_TakeFromContainer_Validate"));
			return;
		}
		P_THIS->Server_TakeFromContainer_Implementation(Z_Param_OtherInventory,Z_Param_SlotIndex,Z_Param_Quantity);
		P_NATIVE_END;
	}
	static FName NAME_ACookingGameController_Server_GiveToContainer = FName(TEXT("Server_GiveToContainer"));
	void ACookingGameController::Server_GiveToContainer(UInventoryComponent* OtherInventory, FSlotStructure Item)
	{
		CookingGameController_eventServer_GiveToContainer_Parms Parms;
		Parms.OtherInventory=OtherInventory;
		Parms.Item=Item;
		ProcessEvent(FindFunctionChecked(NAME_ACookingGameController_Server_GiveToContainer),&Parms);
	}
	static FName NAME_ACookingGameController_Server_SetInteractingInventory = FName(TEXT("Server_SetInteractingInventory"));
	void ACookingGameController::Server_SetInteractingInventory(UInventoryComponent* NewInventory)
	{
		CookingGameController_eventServer_SetInteractingInventory_Parms Parms;
		Parms.NewInventory=NewInventory;
		ProcessEvent(FindFunctionChecked(NAME_ACookingGameController_Server_SetInteractingInventory),&Parms);
	}
	static FName NAME_ACookingGameController_Server_SetOwnInventory = FName(TEXT("Server_SetOwnInventory"));
	void ACookingGameController::Server_SetOwnInventory(UInventoryComponent* NewInventory)
	{
		CookingGameController_eventServer_SetOwnInventory_Parms Parms;
		Parms.NewInventory=NewInventory;
		ProcessEvent(FindFunctionChecked(NAME_ACookingGameController_Server_SetOwnInventory),&Parms);
	}
	static FName NAME_ACookingGameController_Server_TakeFromContainer = FName(TEXT("Server_TakeFromContainer"));
	void ACookingGameController::Server_TakeFromContainer(UInventoryComponent* OtherInventory, int32 SlotIndex, int32 Quantity)
	{
		CookingGameController_eventServer_TakeFromContainer_Parms Parms;
		Parms.OtherInventory=OtherInventory;
		Parms.SlotIndex=SlotIndex;
		Parms.Quantity=Quantity;
		ProcessEvent(FindFunctionChecked(NAME_ACookingGameController_Server_TakeFromContainer),&Parms);
	}
	static FName NAME_ACookingGameController_Server_TransferBetweenInventories = FName(TEXT("Server_TransferBetweenInventories"));
	void ACookingGameController::Server_TransferBetweenInventories(UInventoryComponent* ReceivingInventory, UInventoryComponent* GivingInventory, int32 GivingSlotIndex, int32 Quantity, FSlotStructure Item)
	{
		CookingGameController_eventServer_TransferBetweenInventories_Parms Parms;
		Parms.ReceivingInventory=ReceivingInventory;
		Parms.GivingInventory=GivingInventory;
		Parms.GivingSlotIndex=GivingSlotIndex;
		Parms.Quantity=Quantity;
		Parms.Item=Item;
		ProcessEvent(FindFunctionChecked(NAME_ACookingGameController_Server_TransferBetweenInventories),&Parms);
	}
	static FName NAME_ACookingGameController_Server_UseItem = FName(TEXT("Server_UseItem"));
	void ACookingGameController::Server_UseItem(int32 ItemIndex)
	{
		CookingGameController_eventServer_UseItem_Parms Parms;
		Parms.ItemIndex=ItemIndex;
		ProcessEvent(FindFunctionChecked(NAME_ACookingGameController_Server_UseItem),&Parms);
	}
	void ACookingGameController::StaticRegisterNativesACookingGameController()
	{
		UClass* Class = ACookingGameController::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "Server_GiveToContainer", &ACookingGameController::execServer_GiveToContainer },
			{ "Server_SetInteractingInventory", &ACookingGameController::execServer_SetInteractingInventory },
			{ "Server_SetOwnInventory", &ACookingGameController::execServer_SetOwnInventory },
			{ "Server_TakeFromContainer", &ACookingGameController::execServer_TakeFromContainer },
			{ "Server_TransferBetweenInventories", &ACookingGameController::execServer_TransferBetweenInventories },
			{ "Server_UseItem", &ACookingGameController::execServer_UseItem },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_ACookingGameController_Server_GiveToContainer_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_OtherInventory_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_OtherInventory;
		static const UECodeGen_Private::FStructPropertyParams NewProp_Item;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ACookingGameController_Server_GiveToContainer_Statics::NewProp_OtherInventory_MetaData[] = {
		{ "EditInline", "true" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_ACookingGameController_Server_GiveToContainer_Statics::NewProp_OtherInventory = { "OtherInventory", nullptr, (EPropertyFlags)0x0010000000080080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(CookingGameController_eventServer_GiveToContainer_Parms, OtherInventory), Z_Construct_UClass_UInventoryComponent_NoRegister, METADATA_PARAMS(Z_Construct_UFunction_ACookingGameController_Server_GiveToContainer_Statics::NewProp_OtherInventory_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_ACookingGameController_Server_GiveToContainer_Statics::NewProp_OtherInventory_MetaData)) };
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_ACookingGameController_Server_GiveToContainer_Statics::NewProp_Item = { "Item", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(CookingGameController_eventServer_GiveToContainer_Parms, Item), Z_Construct_UScriptStruct_FSlotStructure, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_ACookingGameController_Server_GiveToContainer_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ACookingGameController_Server_GiveToContainer_Statics::NewProp_OtherInventory,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ACookingGameController_Server_GiveToContainer_Statics::NewProp_Item,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ACookingGameController_Server_GiveToContainer_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/Character/CookingGameController.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_ACookingGameController_Server_GiveToContainer_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ACookingGameController, nullptr, "Server_GiveToContainer", nullptr, nullptr, sizeof(CookingGameController_eventServer_GiveToContainer_Parms), Z_Construct_UFunction_ACookingGameController_Server_GiveToContainer_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_ACookingGameController_Server_GiveToContainer_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x84220CC0, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_ACookingGameController_Server_GiveToContainer_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_ACookingGameController_Server_GiveToContainer_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_ACookingGameController_Server_GiveToContainer()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_ACookingGameController_Server_GiveToContainer_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_ACookingGameController_Server_SetInteractingInventory_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_NewInventory_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_NewInventory;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ACookingGameController_Server_SetInteractingInventory_Statics::NewProp_NewInventory_MetaData[] = {
		{ "EditInline", "true" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_ACookingGameController_Server_SetInteractingInventory_Statics::NewProp_NewInventory = { "NewInventory", nullptr, (EPropertyFlags)0x0010000000080080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(CookingGameController_eventServer_SetInteractingInventory_Parms, NewInventory), Z_Construct_UClass_UInventoryComponent_NoRegister, METADATA_PARAMS(Z_Construct_UFunction_ACookingGameController_Server_SetInteractingInventory_Statics::NewProp_NewInventory_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_ACookingGameController_Server_SetInteractingInventory_Statics::NewProp_NewInventory_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_ACookingGameController_Server_SetInteractingInventory_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ACookingGameController_Server_SetInteractingInventory_Statics::NewProp_NewInventory,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ACookingGameController_Server_SetInteractingInventory_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/Character/CookingGameController.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_ACookingGameController_Server_SetInteractingInventory_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ACookingGameController, nullptr, "Server_SetInteractingInventory", nullptr, nullptr, sizeof(CookingGameController_eventServer_SetInteractingInventory_Parms), Z_Construct_UFunction_ACookingGameController_Server_SetInteractingInventory_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_ACookingGameController_Server_SetInteractingInventory_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x80220CC0, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_ACookingGameController_Server_SetInteractingInventory_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_ACookingGameController_Server_SetInteractingInventory_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_ACookingGameController_Server_SetInteractingInventory()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_ACookingGameController_Server_SetInteractingInventory_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_ACookingGameController_Server_SetOwnInventory_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_NewInventory_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_NewInventory;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ACookingGameController_Server_SetOwnInventory_Statics::NewProp_NewInventory_MetaData[] = {
		{ "EditInline", "true" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_ACookingGameController_Server_SetOwnInventory_Statics::NewProp_NewInventory = { "NewInventory", nullptr, (EPropertyFlags)0x0010000000080080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(CookingGameController_eventServer_SetOwnInventory_Parms, NewInventory), Z_Construct_UClass_UInventoryComponent_NoRegister, METADATA_PARAMS(Z_Construct_UFunction_ACookingGameController_Server_SetOwnInventory_Statics::NewProp_NewInventory_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_ACookingGameController_Server_SetOwnInventory_Statics::NewProp_NewInventory_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_ACookingGameController_Server_SetOwnInventory_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ACookingGameController_Server_SetOwnInventory_Statics::NewProp_NewInventory,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ACookingGameController_Server_SetOwnInventory_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/Character/CookingGameController.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_ACookingGameController_Server_SetOwnInventory_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ACookingGameController, nullptr, "Server_SetOwnInventory", nullptr, nullptr, sizeof(CookingGameController_eventServer_SetOwnInventory_Parms), Z_Construct_UFunction_ACookingGameController_Server_SetOwnInventory_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_ACookingGameController_Server_SetOwnInventory_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x80220CC0, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_ACookingGameController_Server_SetOwnInventory_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_ACookingGameController_Server_SetOwnInventory_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_ACookingGameController_Server_SetOwnInventory()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_ACookingGameController_Server_SetOwnInventory_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_ACookingGameController_Server_TakeFromContainer_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_OtherInventory_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_OtherInventory;
		static const UECodeGen_Private::FUnsizedIntPropertyParams NewProp_SlotIndex;
		static const UECodeGen_Private::FUnsizedIntPropertyParams NewProp_Quantity;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ACookingGameController_Server_TakeFromContainer_Statics::NewProp_OtherInventory_MetaData[] = {
		{ "EditInline", "true" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_ACookingGameController_Server_TakeFromContainer_Statics::NewProp_OtherInventory = { "OtherInventory", nullptr, (EPropertyFlags)0x0010000000080080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(CookingGameController_eventServer_TakeFromContainer_Parms, OtherInventory), Z_Construct_UClass_UInventoryComponent_NoRegister, METADATA_PARAMS(Z_Construct_UFunction_ACookingGameController_Server_TakeFromContainer_Statics::NewProp_OtherInventory_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_ACookingGameController_Server_TakeFromContainer_Statics::NewProp_OtherInventory_MetaData)) };
	const UECodeGen_Private::FUnsizedIntPropertyParams Z_Construct_UFunction_ACookingGameController_Server_TakeFromContainer_Statics::NewProp_SlotIndex = { "SlotIndex", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(CookingGameController_eventServer_TakeFromContainer_Parms, SlotIndex), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FUnsizedIntPropertyParams Z_Construct_UFunction_ACookingGameController_Server_TakeFromContainer_Statics::NewProp_Quantity = { "Quantity", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(CookingGameController_eventServer_TakeFromContainer_Parms, Quantity), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_ACookingGameController_Server_TakeFromContainer_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ACookingGameController_Server_TakeFromContainer_Statics::NewProp_OtherInventory,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ACookingGameController_Server_TakeFromContainer_Statics::NewProp_SlotIndex,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ACookingGameController_Server_TakeFromContainer_Statics::NewProp_Quantity,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ACookingGameController_Server_TakeFromContainer_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/Character/CookingGameController.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_ACookingGameController_Server_TakeFromContainer_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ACookingGameController, nullptr, "Server_TakeFromContainer", nullptr, nullptr, sizeof(CookingGameController_eventServer_TakeFromContainer_Parms), Z_Construct_UFunction_ACookingGameController_Server_TakeFromContainer_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_ACookingGameController_Server_TakeFromContainer_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x84220CC0, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_ACookingGameController_Server_TakeFromContainer_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_ACookingGameController_Server_TakeFromContainer_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_ACookingGameController_Server_TakeFromContainer()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_ACookingGameController_Server_TakeFromContainer_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_ACookingGameController_Server_TransferBetweenInventories_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_ReceivingInventory_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_ReceivingInventory;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_GivingInventory_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_GivingInventory;
		static const UECodeGen_Private::FUnsizedIntPropertyParams NewProp_GivingSlotIndex;
		static const UECodeGen_Private::FUnsizedIntPropertyParams NewProp_Quantity;
		static const UECodeGen_Private::FStructPropertyParams NewProp_Item;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ACookingGameController_Server_TransferBetweenInventories_Statics::NewProp_ReceivingInventory_MetaData[] = {
		{ "EditInline", "true" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_ACookingGameController_Server_TransferBetweenInventories_Statics::NewProp_ReceivingInventory = { "ReceivingInventory", nullptr, (EPropertyFlags)0x0010000000080080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(CookingGameController_eventServer_TransferBetweenInventories_Parms, ReceivingInventory), Z_Construct_UClass_UInventoryComponent_NoRegister, METADATA_PARAMS(Z_Construct_UFunction_ACookingGameController_Server_TransferBetweenInventories_Statics::NewProp_ReceivingInventory_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_ACookingGameController_Server_TransferBetweenInventories_Statics::NewProp_ReceivingInventory_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ACookingGameController_Server_TransferBetweenInventories_Statics::NewProp_GivingInventory_MetaData[] = {
		{ "EditInline", "true" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_ACookingGameController_Server_TransferBetweenInventories_Statics::NewProp_GivingInventory = { "GivingInventory", nullptr, (EPropertyFlags)0x0010000000080080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(CookingGameController_eventServer_TransferBetweenInventories_Parms, GivingInventory), Z_Construct_UClass_UInventoryComponent_NoRegister, METADATA_PARAMS(Z_Construct_UFunction_ACookingGameController_Server_TransferBetweenInventories_Statics::NewProp_GivingInventory_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_ACookingGameController_Server_TransferBetweenInventories_Statics::NewProp_GivingInventory_MetaData)) };
	const UECodeGen_Private::FUnsizedIntPropertyParams Z_Construct_UFunction_ACookingGameController_Server_TransferBetweenInventories_Statics::NewProp_GivingSlotIndex = { "GivingSlotIndex", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(CookingGameController_eventServer_TransferBetweenInventories_Parms, GivingSlotIndex), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FUnsizedIntPropertyParams Z_Construct_UFunction_ACookingGameController_Server_TransferBetweenInventories_Statics::NewProp_Quantity = { "Quantity", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(CookingGameController_eventServer_TransferBetweenInventories_Parms, Quantity), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_ACookingGameController_Server_TransferBetweenInventories_Statics::NewProp_Item = { "Item", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(CookingGameController_eventServer_TransferBetweenInventories_Parms, Item), Z_Construct_UScriptStruct_FSlotStructure, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_ACookingGameController_Server_TransferBetweenInventories_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ACookingGameController_Server_TransferBetweenInventories_Statics::NewProp_ReceivingInventory,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ACookingGameController_Server_TransferBetweenInventories_Statics::NewProp_GivingInventory,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ACookingGameController_Server_TransferBetweenInventories_Statics::NewProp_GivingSlotIndex,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ACookingGameController_Server_TransferBetweenInventories_Statics::NewProp_Quantity,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ACookingGameController_Server_TransferBetweenInventories_Statics::NewProp_Item,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ACookingGameController_Server_TransferBetweenInventories_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/Character/CookingGameController.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_ACookingGameController_Server_TransferBetweenInventories_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ACookingGameController, nullptr, "Server_TransferBetweenInventories", nullptr, nullptr, sizeof(CookingGameController_eventServer_TransferBetweenInventories_Parms), Z_Construct_UFunction_ACookingGameController_Server_TransferBetweenInventories_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_ACookingGameController_Server_TransferBetweenInventories_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x84220CC0, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_ACookingGameController_Server_TransferBetweenInventories_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_ACookingGameController_Server_TransferBetweenInventories_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_ACookingGameController_Server_TransferBetweenInventories()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_ACookingGameController_Server_TransferBetweenInventories_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_ACookingGameController_Server_UseItem_Statics
	{
		static const UECodeGen_Private::FIntPropertyParams NewProp_ItemIndex;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_ACookingGameController_Server_UseItem_Statics::NewProp_ItemIndex = { "ItemIndex", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(CookingGameController_eventServer_UseItem_Parms, ItemIndex), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_ACookingGameController_Server_UseItem_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ACookingGameController_Server_UseItem_Statics::NewProp_ItemIndex,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ACookingGameController_Server_UseItem_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/Character/CookingGameController.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_ACookingGameController_Server_UseItem_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ACookingGameController, nullptr, "Server_UseItem", nullptr, nullptr, sizeof(CookingGameController_eventServer_UseItem_Parms), Z_Construct_UFunction_ACookingGameController_Server_UseItem_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_ACookingGameController_Server_UseItem_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x84220CC0, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_ACookingGameController_Server_UseItem_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_ACookingGameController_Server_UseItem_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_ACookingGameController_Server_UseItem()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_ACookingGameController_Server_UseItem_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	UClass* Z_Construct_UClass_ACookingGameController_NoRegister()
	{
		return ACookingGameController::StaticClass();
	}
	struct Z_Construct_UClass_ACookingGameController_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_OwnInventory_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_OwnInventory;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_InteractingInventory_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_InteractingInventory;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_ACookingGameController_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_APlayerController,
		(UObject* (*)())Z_Construct_UPackage__Script_CookingGame,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_ACookingGameController_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_ACookingGameController_Server_GiveToContainer, "Server_GiveToContainer" }, // 2607514679
		{ &Z_Construct_UFunction_ACookingGameController_Server_SetInteractingInventory, "Server_SetInteractingInventory" }, // 3188171257
		{ &Z_Construct_UFunction_ACookingGameController_Server_SetOwnInventory, "Server_SetOwnInventory" }, // 1703070931
		{ &Z_Construct_UFunction_ACookingGameController_Server_TakeFromContainer, "Server_TakeFromContainer" }, // 4157019591
		{ &Z_Construct_UFunction_ACookingGameController_Server_TransferBetweenInventories, "Server_TransferBetweenInventories" }, // 2345927088
		{ &Z_Construct_UFunction_ACookingGameController_Server_UseItem, "Server_UseItem" }, // 3255797106
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ACookingGameController_Statics::Class_MetaDataParams[] = {
		{ "Comment", "/**\n * \n */" },
		{ "HideCategories", "Collision Rendering Utilities|Transformation" },
		{ "IncludePath", "Character/CookingGameController.h" },
		{ "ModuleRelativePath", "Public/Character/CookingGameController.h" },
	};
#endif
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ACookingGameController_Statics::NewProp_OwnInventory_MetaData[] = {
		{ "Category", "CookingGameController" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/Character/CookingGameController.h" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_ACookingGameController_Statics::NewProp_OwnInventory = { "OwnInventory", nullptr, (EPropertyFlags)0x001000000008002d, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ACookingGameController, OwnInventory), Z_Construct_UClass_UInventoryComponent_NoRegister, METADATA_PARAMS(Z_Construct_UClass_ACookingGameController_Statics::NewProp_OwnInventory_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ACookingGameController_Statics::NewProp_OwnInventory_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ACookingGameController_Statics::NewProp_InteractingInventory_MetaData[] = {
		{ "Category", "CookingGameController" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/Character/CookingGameController.h" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_ACookingGameController_Statics::NewProp_InteractingInventory = { "InteractingInventory", nullptr, (EPropertyFlags)0x001000000008002d, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ACookingGameController, InteractingInventory), Z_Construct_UClass_UInventoryComponent_NoRegister, METADATA_PARAMS(Z_Construct_UClass_ACookingGameController_Statics::NewProp_InteractingInventory_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ACookingGameController_Statics::NewProp_InteractingInventory_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_ACookingGameController_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ACookingGameController_Statics::NewProp_OwnInventory,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ACookingGameController_Statics::NewProp_InteractingInventory,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_ACookingGameController_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<ACookingGameController>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_ACookingGameController_Statics::ClassParams = {
		&ACookingGameController::StaticClass,
		"Game",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		FuncInfo,
		Z_Construct_UClass_ACookingGameController_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		UE_ARRAY_COUNT(FuncInfo),
		UE_ARRAY_COUNT(Z_Construct_UClass_ACookingGameController_Statics::PropPointers),
		0,
		0x009002A4u,
		METADATA_PARAMS(Z_Construct_UClass_ACookingGameController_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_ACookingGameController_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_ACookingGameController()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UECodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_ACookingGameController_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(ACookingGameController, 865154256);
	template<> COOKINGGAME_API UClass* StaticClass<ACookingGameController>()
	{
		return ACookingGameController::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_ACookingGameController(Z_Construct_UClass_ACookingGameController, &ACookingGameController::StaticClass, TEXT("/Script/CookingGame"), TEXT("ACookingGameController"), false, nullptr, nullptr, nullptr);

	void ACookingGameController::ValidateGeneratedRepEnums(const TArray<struct FRepRecord>& ClassReps) const
	{
		static const FName Name_OwnInventory(TEXT("OwnInventory"));
		static const FName Name_InteractingInventory(TEXT("InteractingInventory"));

		const bool bIsValid = true
			&& Name_OwnInventory == ClassReps[(int32)ENetFields_Private::OwnInventory].Property->GetFName()
			&& Name_InteractingInventory == ClassReps[(int32)ENetFields_Private::InteractingInventory].Property->GetFName();

		checkf(bIsValid, TEXT("UHT Generated Rep Indices do not match runtime populated Rep Indices for properties in ACookingGameController"));
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(ACookingGameController);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
