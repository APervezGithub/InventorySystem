// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef COOKINGGAME_InteractInterface_generated_h
#error "InteractInterface.generated.h already included, missing '#pragma once' in InteractInterface.h"
#endif
#define COOKINGGAME_InteractInterface_generated_h

#define CookingGame_5_0_Source_CookingGame_Public_Interact_InteractInterface_h_12_GENERATED_BODY \
	friend struct Z_Construct_UScriptStruct_FInteractableData_Statics; \
	COOKINGGAME_API static class UScriptStruct* StaticStruct();


template<> COOKINGGAME_API UScriptStruct* StaticStruct<struct FInteractableData>();

#define CookingGame_5_0_Source_CookingGame_Public_Interact_InteractInterface_h_35_SPARSE_DATA
#define CookingGame_5_0_Source_CookingGame_Public_Interact_InteractInterface_h_35_RPC_WRAPPERS \
	virtual void ReactToInteract_Implementation()=0; \
 \
	DECLARE_FUNCTION(execReactToInteract);


#define CookingGame_5_0_Source_CookingGame_Public_Interact_InteractInterface_h_35_RPC_WRAPPERS_NO_PURE_DECLS \
	virtual void ReactToInteract_Implementation()=0; \
 \
	DECLARE_FUNCTION(execReactToInteract);


#define CookingGame_5_0_Source_CookingGame_Public_Interact_InteractInterface_h_35_EVENT_PARMS
#define CookingGame_5_0_Source_CookingGame_Public_Interact_InteractInterface_h_35_CALLBACK_WRAPPERS
#define CookingGame_5_0_Source_CookingGame_Public_Interact_InteractInterface_h_35_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	COOKINGGAME_API UInteractInterface(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	DEFINE_ABSTRACT_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UInteractInterface) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(COOKINGGAME_API, UInteractInterface); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UInteractInterface); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	COOKINGGAME_API UInteractInterface(UInteractInterface&&); \
	COOKINGGAME_API UInteractInterface(const UInteractInterface&); \
public:


#define CookingGame_5_0_Source_CookingGame_Public_Interact_InteractInterface_h_35_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	COOKINGGAME_API UInteractInterface(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()) : Super(ObjectInitializer) { }; \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	COOKINGGAME_API UInteractInterface(UInteractInterface&&); \
	COOKINGGAME_API UInteractInterface(const UInteractInterface&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(COOKINGGAME_API, UInteractInterface); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UInteractInterface); \
	DEFINE_ABSTRACT_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UInteractInterface)


#define CookingGame_5_0_Source_CookingGame_Public_Interact_InteractInterface_h_35_GENERATED_UINTERFACE_BODY() \
private: \
	static void StaticRegisterNativesUInteractInterface(); \
	friend struct Z_Construct_UClass_UInteractInterface_Statics; \
public: \
	DECLARE_CLASS(UInteractInterface, UInterface, COMPILED_IN_FLAGS(CLASS_Abstract | CLASS_Interface), CASTCLASS_None, TEXT("/Script/CookingGame"), COOKINGGAME_API) \
	DECLARE_SERIALIZER(UInteractInterface)


#define CookingGame_5_0_Source_CookingGame_Public_Interact_InteractInterface_h_35_GENERATED_BODY_LEGACY \
		PRAGMA_DISABLE_DEPRECATION_WARNINGS \
	CookingGame_5_0_Source_CookingGame_Public_Interact_InteractInterface_h_35_GENERATED_UINTERFACE_BODY() \
	CookingGame_5_0_Source_CookingGame_Public_Interact_InteractInterface_h_35_STANDARD_CONSTRUCTORS \
	PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define CookingGame_5_0_Source_CookingGame_Public_Interact_InteractInterface_h_35_GENERATED_BODY \
	PRAGMA_DISABLE_DEPRECATION_WARNINGS \
	CookingGame_5_0_Source_CookingGame_Public_Interact_InteractInterface_h_35_GENERATED_UINTERFACE_BODY() \
	CookingGame_5_0_Source_CookingGame_Public_Interact_InteractInterface_h_35_ENHANCED_CONSTRUCTORS \
private: \
	PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define CookingGame_5_0_Source_CookingGame_Public_Interact_InteractInterface_h_35_INCLASS_IINTERFACE_NO_PURE_DECLS \
protected: \
	virtual ~IInteractInterface() {} \
public: \
	typedef UInteractInterface UClassType; \
	typedef IInteractInterface ThisClass; \
	static void Execute_ReactToInteract(UObject* O); \
	virtual UObject* _getUObject() const { check(0 && "Missing required implementation."); return nullptr; }


#define CookingGame_5_0_Source_CookingGame_Public_Interact_InteractInterface_h_35_INCLASS_IINTERFACE \
protected: \
	virtual ~IInteractInterface() {} \
public: \
	typedef UInteractInterface UClassType; \
	typedef IInteractInterface ThisClass; \
	static void Execute_ReactToInteract(UObject* O); \
	virtual UObject* _getUObject() const { check(0 && "Missing required implementation."); return nullptr; }


#define CookingGame_5_0_Source_CookingGame_Public_Interact_InteractInterface_h_32_PROLOG \
	CookingGame_5_0_Source_CookingGame_Public_Interact_InteractInterface_h_35_EVENT_PARMS


#define CookingGame_5_0_Source_CookingGame_Public_Interact_InteractInterface_h_43_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	CookingGame_5_0_Source_CookingGame_Public_Interact_InteractInterface_h_35_SPARSE_DATA \
	CookingGame_5_0_Source_CookingGame_Public_Interact_InteractInterface_h_35_RPC_WRAPPERS \
	CookingGame_5_0_Source_CookingGame_Public_Interact_InteractInterface_h_35_CALLBACK_WRAPPERS \
	CookingGame_5_0_Source_CookingGame_Public_Interact_InteractInterface_h_35_INCLASS_IINTERFACE \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define CookingGame_5_0_Source_CookingGame_Public_Interact_InteractInterface_h_43_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	CookingGame_5_0_Source_CookingGame_Public_Interact_InteractInterface_h_35_SPARSE_DATA \
	CookingGame_5_0_Source_CookingGame_Public_Interact_InteractInterface_h_35_RPC_WRAPPERS_NO_PURE_DECLS \
	CookingGame_5_0_Source_CookingGame_Public_Interact_InteractInterface_h_35_CALLBACK_WRAPPERS \
	CookingGame_5_0_Source_CookingGame_Public_Interact_InteractInterface_h_35_INCLASS_IINTERFACE_NO_PURE_DECLS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> COOKINGGAME_API UClass* StaticClass<class UInteractInterface>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID CookingGame_5_0_Source_CookingGame_Public_Interact_InteractInterface_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
