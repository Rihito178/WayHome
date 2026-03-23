// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "AIEnemy.h"
#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
class AActor;
#ifdef WAYHOME_AIEnemy_generated_h
#error "AIEnemy.generated.h already included, missing '#pragma once' in AIEnemy.h"
#endif
#define WAYHOME_AIEnemy_generated_h

#define FID_240160_WayHome_Source_WayHome_AIEnemy_h_18_RPC_WRAPPERS_NO_PURE_DECLS \
	DECLARE_FUNCTION(execOnPerceptionUpdated);


#define FID_240160_WayHome_Source_WayHome_AIEnemy_h_18_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesAAIEnemy(); \
	friend struct Z_Construct_UClass_AAIEnemy_Statics; \
public: \
	DECLARE_CLASS(AAIEnemy, ACharacter, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/WayHome"), NO_API) \
	DECLARE_SERIALIZER(AAIEnemy)


#define FID_240160_WayHome_Source_WayHome_AIEnemy_h_18_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	AAIEnemy(AAIEnemy&&); \
	AAIEnemy(const AAIEnemy&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, AAIEnemy); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(AAIEnemy); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(AAIEnemy) \
	NO_API virtual ~AAIEnemy();


#define FID_240160_WayHome_Source_WayHome_AIEnemy_h_15_PROLOG
#define FID_240160_WayHome_Source_WayHome_AIEnemy_h_18_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_240160_WayHome_Source_WayHome_AIEnemy_h_18_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_240160_WayHome_Source_WayHome_AIEnemy_h_18_INCLASS_NO_PURE_DECLS \
	FID_240160_WayHome_Source_WayHome_AIEnemy_h_18_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> WAYHOME_API UClass* StaticClass<class AAIEnemy>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_240160_WayHome_Source_WayHome_AIEnemy_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
