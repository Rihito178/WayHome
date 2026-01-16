// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "MyActor.h"
#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
struct FCellTypeInfo;
#ifdef WAYHOME_MyActor_generated_h
#error "MyActor.generated.h already included, missing '#pragma once' in MyActor.h"
#endif
#define WAYHOME_MyActor_generated_h

#define FID_Users_Rihit_Desktop_WayHome_5_5_Source_WayHome_MyActor_h_39_GENERATED_BODY \
	friend struct Z_Construct_UScriptStruct_FCellTypeInfo_Statics; \
	WAYHOME_API static class UScriptStruct* StaticStruct();


template<> WAYHOME_API UScriptStruct* StaticStruct<struct FCellTypeInfo>();

#define FID_Users_Rihit_Desktop_WayHome_5_5_Source_WayHome_MyActor_h_67_GENERATED_BODY \
	friend struct Z_Construct_UScriptStruct_FGridCell_Statics; \
	WAYHOME_API static class UScriptStruct* StaticStruct();


template<> WAYHOME_API UScriptStruct* StaticStruct<struct FGridCell>();

#define FID_Users_Rihit_Desktop_WayHome_5_5_Source_WayHome_MyActor_h_81_RPC_WRAPPERS_NO_PURE_DECLS \
	DECLARE_FUNCTION(execBuildFromCsv);


#define FID_Users_Rihit_Desktop_WayHome_5_5_Source_WayHome_MyActor_h_81_CALLBACK_WRAPPERS
#define FID_Users_Rihit_Desktop_WayHome_5_5_Source_WayHome_MyActor_h_81_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesAMyActor(); \
	friend struct Z_Construct_UClass_AMyActor_Statics; \
public: \
	DECLARE_CLASS(AMyActor, AActor, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/WayHome"), NO_API) \
	DECLARE_SERIALIZER(AMyActor)


#define FID_Users_Rihit_Desktop_WayHome_5_5_Source_WayHome_MyActor_h_81_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	AMyActor(AMyActor&&); \
	AMyActor(const AMyActor&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, AMyActor); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(AMyActor); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(AMyActor) \
	NO_API virtual ~AMyActor();


#define FID_Users_Rihit_Desktop_WayHome_5_5_Source_WayHome_MyActor_h_78_PROLOG
#define FID_Users_Rihit_Desktop_WayHome_5_5_Source_WayHome_MyActor_h_81_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Users_Rihit_Desktop_WayHome_5_5_Source_WayHome_MyActor_h_81_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_Users_Rihit_Desktop_WayHome_5_5_Source_WayHome_MyActor_h_81_CALLBACK_WRAPPERS \
	FID_Users_Rihit_Desktop_WayHome_5_5_Source_WayHome_MyActor_h_81_INCLASS_NO_PURE_DECLS \
	FID_Users_Rihit_Desktop_WayHome_5_5_Source_WayHome_MyActor_h_81_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> WAYHOME_API UClass* StaticClass<class AMyActor>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Users_Rihit_Desktop_WayHome_5_5_Source_WayHome_MyActor_h


#define FOREACH_ENUM_ECELLTYPE(op) \
	op(ECellType::Empty) \
	op(ECellType::Wall) \
	op(ECellType::Floor) \
	op(ECellType::Spawn) \
	op(ECellType::Goal) 

enum class ECellType : uint8;
template<> struct TIsUEnumClass<ECellType> { enum { Value = true }; };
template<> WAYHOME_API UEnum* StaticEnum<ECellType>();

PRAGMA_ENABLE_DEPRECATION_WARNINGS
