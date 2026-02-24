// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "RootPoint.h"
#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef WAYHOME_RootPoint_generated_h
#error "RootPoint.generated.h already included, missing '#pragma once' in RootPoint.h"
#endif
#define WAYHOME_RootPoint_generated_h

#define FID_Users_Rihit_Desktop_WayHome_5_5_Source_WayHome_RootPoint_h_13_RPC_WRAPPERS_NO_PURE_DECLS \
	DECLARE_FUNCTION(execGetRoamingPoint); \
	DECLARE_FUNCTION(execGetNearestRoamingPointWorld); \
	DECLARE_FUNCTION(execGetRandomRoamingPointWorld); \
	DECLARE_FUNCTION(execGetRoamingPointWorld); \
	DECLARE_FUNCTION(execGetRoamingPointLocal); \
	DECLARE_FUNCTION(execPointNum);


#define FID_Users_Rihit_Desktop_WayHome_5_5_Source_WayHome_RootPoint_h_13_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesARootPoint(); \
	friend struct Z_Construct_UClass_ARootPoint_Statics; \
public: \
	DECLARE_CLASS(ARootPoint, AActor, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/WayHome"), NO_API) \
	DECLARE_SERIALIZER(ARootPoint)


#define FID_Users_Rihit_Desktop_WayHome_5_5_Source_WayHome_RootPoint_h_13_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	ARootPoint(ARootPoint&&); \
	ARootPoint(const ARootPoint&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, ARootPoint); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(ARootPoint); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(ARootPoint) \
	NO_API virtual ~ARootPoint();


#define FID_Users_Rihit_Desktop_WayHome_5_5_Source_WayHome_RootPoint_h_10_PROLOG
#define FID_Users_Rihit_Desktop_WayHome_5_5_Source_WayHome_RootPoint_h_13_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Users_Rihit_Desktop_WayHome_5_5_Source_WayHome_RootPoint_h_13_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_Users_Rihit_Desktop_WayHome_5_5_Source_WayHome_RootPoint_h_13_INCLASS_NO_PURE_DECLS \
	FID_Users_Rihit_Desktop_WayHome_5_5_Source_WayHome_RootPoint_h_13_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> WAYHOME_API UClass* StaticClass<class ARootPoint>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Users_Rihit_Desktop_WayHome_5_5_Source_WayHome_RootPoint_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
