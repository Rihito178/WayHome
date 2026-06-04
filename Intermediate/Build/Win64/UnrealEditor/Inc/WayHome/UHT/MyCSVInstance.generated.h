// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "MyCSVInstance.h"
#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef WAYHOME_MyCSVInstance_generated_h
#error "MyCSVInstance.generated.h already included, missing '#pragma once' in MyCSVInstance.h"
#endif
#define WAYHOME_MyCSVInstance_generated_h

#define FID_Users_Rihit_Desktop_UE5_5_WayHome_Source_WayHome_MyCSVInstance_h_12_RPC_WRAPPERS_NO_PURE_DECLS \
	DECLARE_FUNCTION(execGetDialogue);


#define FID_Users_Rihit_Desktop_UE5_5_WayHome_Source_WayHome_MyCSVInstance_h_12_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUMyCSVInstance(); \
	friend struct Z_Construct_UClass_UMyCSVInstance_Statics; \
public: \
	DECLARE_CLASS(UMyCSVInstance, UGameInstance, COMPILED_IN_FLAGS(0 | CLASS_Transient), CASTCLASS_None, TEXT("/Script/WayHome"), NO_API) \
	DECLARE_SERIALIZER(UMyCSVInstance)


#define FID_Users_Rihit_Desktop_UE5_5_WayHome_Source_WayHome_MyCSVInstance_h_12_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UMyCSVInstance(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	UMyCSVInstance(UMyCSVInstance&&); \
	UMyCSVInstance(const UMyCSVInstance&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UMyCSVInstance); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UMyCSVInstance); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UMyCSVInstance) \
	NO_API virtual ~UMyCSVInstance();


#define FID_Users_Rihit_Desktop_UE5_5_WayHome_Source_WayHome_MyCSVInstance_h_9_PROLOG
#define FID_Users_Rihit_Desktop_UE5_5_WayHome_Source_WayHome_MyCSVInstance_h_12_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Users_Rihit_Desktop_UE5_5_WayHome_Source_WayHome_MyCSVInstance_h_12_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_Users_Rihit_Desktop_UE5_5_WayHome_Source_WayHome_MyCSVInstance_h_12_INCLASS_NO_PURE_DECLS \
	FID_Users_Rihit_Desktop_UE5_5_WayHome_Source_WayHome_MyCSVInstance_h_12_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> WAYHOME_API UClass* StaticClass<class UMyCSVInstance>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Users_Rihit_Desktop_UE5_5_WayHome_Source_WayHome_MyCSVInstance_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
