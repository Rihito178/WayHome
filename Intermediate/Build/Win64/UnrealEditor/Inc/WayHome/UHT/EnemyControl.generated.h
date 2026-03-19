// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "EnemyControl.h"
#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef WAYHOME_EnemyControl_generated_h
#error "EnemyControl.generated.h already included, missing '#pragma once' in EnemyControl.h"
#endif
#define WAYHOME_EnemyControl_generated_h

#define FID_240160_WayHome_Source_WayHome_EnemyControl_h_13_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesAEnemyControl(); \
	friend struct Z_Construct_UClass_AEnemyControl_Statics; \
public: \
	DECLARE_CLASS(AEnemyControl, AAIController, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/WayHome"), NO_API) \
	DECLARE_SERIALIZER(AEnemyControl)


#define FID_240160_WayHome_Source_WayHome_EnemyControl_h_13_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	AEnemyControl(AEnemyControl&&); \
	AEnemyControl(const AEnemyControl&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, AEnemyControl); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(AEnemyControl); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(AEnemyControl) \
	NO_API virtual ~AEnemyControl();


#define FID_240160_WayHome_Source_WayHome_EnemyControl_h_10_PROLOG
#define FID_240160_WayHome_Source_WayHome_EnemyControl_h_13_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_240160_WayHome_Source_WayHome_EnemyControl_h_13_INCLASS_NO_PURE_DECLS \
	FID_240160_WayHome_Source_WayHome_EnemyControl_h_13_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> WAYHOME_API UClass* StaticClass<class AEnemyControl>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_240160_WayHome_Source_WayHome_EnemyControl_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
