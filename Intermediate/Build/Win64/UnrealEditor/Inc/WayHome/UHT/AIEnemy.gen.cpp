// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "WayHome/AIEnemy.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeAIEnemy() {}

// Begin Cross Module References
AIMODULE_API UClass* Z_Construct_UClass_UAIPerceptionComponent_NoRegister();
AIMODULE_API UClass* Z_Construct_UClass_UAISenseConfig_Sight_NoRegister();
ENGINE_API UClass* Z_Construct_UClass_AActor_NoRegister();
ENGINE_API UClass* Z_Construct_UClass_ACharacter();
UPackage* Z_Construct_UPackage__Script_WayHome();
WAYHOME_API UClass* Z_Construct_UClass_AAIEnemy();
WAYHOME_API UClass* Z_Construct_UClass_AAIEnemy_NoRegister();
// End Cross Module References

// Begin Class AAIEnemy Function OnPerceptionUpdated
struct Z_Construct_UFunction_AAIEnemy_OnPerceptionUpdated_Statics
{
	struct AIEnemy_eventOnPerceptionUpdated_Parms
	{
		TArray<AActor*> UpdatedActors;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "AIEnemy.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_UpdatedActors_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_UpdatedActors_Inner;
	static const UECodeGen_Private::FArrayPropertyParams NewProp_UpdatedActors;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_AAIEnemy_OnPerceptionUpdated_Statics::NewProp_UpdatedActors_Inner = { "UpdatedActors", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, Z_Construct_UClass_AActor_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FArrayPropertyParams Z_Construct_UFunction_AAIEnemy_OnPerceptionUpdated_Statics::NewProp_UpdatedActors = { "UpdatedActors", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AIEnemy_eventOnPerceptionUpdated_Parms, UpdatedActors), EArrayPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_UpdatedActors_MetaData), NewProp_UpdatedActors_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AAIEnemy_OnPerceptionUpdated_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AAIEnemy_OnPerceptionUpdated_Statics::NewProp_UpdatedActors_Inner,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AAIEnemy_OnPerceptionUpdated_Statics::NewProp_UpdatedActors,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_AAIEnemy_OnPerceptionUpdated_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_AAIEnemy_OnPerceptionUpdated_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AAIEnemy, nullptr, "OnPerceptionUpdated", nullptr, nullptr, Z_Construct_UFunction_AAIEnemy_OnPerceptionUpdated_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_AAIEnemy_OnPerceptionUpdated_Statics::PropPointers), sizeof(Z_Construct_UFunction_AAIEnemy_OnPerceptionUpdated_Statics::AIEnemy_eventOnPerceptionUpdated_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00440401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_AAIEnemy_OnPerceptionUpdated_Statics::Function_MetaDataParams), Z_Construct_UFunction_AAIEnemy_OnPerceptionUpdated_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_AAIEnemy_OnPerceptionUpdated_Statics::AIEnemy_eventOnPerceptionUpdated_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_AAIEnemy_OnPerceptionUpdated()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_AAIEnemy_OnPerceptionUpdated_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(AAIEnemy::execOnPerceptionUpdated)
{
	P_GET_TARRAY_REF(AActor*,Z_Param_Out_UpdatedActors);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->OnPerceptionUpdated(Z_Param_Out_UpdatedActors);
	P_NATIVE_END;
}
// End Class AAIEnemy Function OnPerceptionUpdated

// Begin Class AAIEnemy
void AAIEnemy::StaticRegisterNativesAAIEnemy()
{
	UClass* Class = AAIEnemy::StaticClass();
	static const FNameNativePtrPair Funcs[] = {
		{ "OnPerceptionUpdated", &AAIEnemy::execOnPerceptionUpdated },
	};
	FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(AAIEnemy);
UClass* Z_Construct_UClass_AAIEnemy_NoRegister()
{
	return AAIEnemy::StaticClass();
}
struct Z_Construct_UClass_AAIEnemy_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "HideCategories", "Navigation" },
		{ "IncludePath", "AIEnemy.h" },
		{ "ModuleRelativePath", "AIEnemy.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_PerceptionComp_MetaData[] = {
		{ "Category", "AI" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/** \xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbdo\xef\xbf\xbdiPerception\xef\xbf\xbdj */" },
#endif
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "AIEnemy.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbdo\xef\xbf\xbdiPerception\xef\xbf\xbdj" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_SightConfig_MetaData[] = {
		{ "Category", "AI" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/** \xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbdo\xef\xbf\xbd\xdd\x92\xef\xbf\xbdi\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbdp/\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xc8\x82\xc7\x81j */" },
#endif
		{ "ModuleRelativePath", "AIEnemy.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbdo\xef\xbf\xbd\xdd\x92\xef\xbf\xbdi\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbdp/\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xc8\x82\xc7\x81j" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_CurrentTarget_MetaData[] = {
		{ "Category", "AI" },
		{ "ModuleRelativePath", "AIEnemy.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_ChaseWalkSpeed_MetaData[] = {
		{ "Category", "AI" },
		{ "ModuleRelativePath", "AIEnemy.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_EngageDistance_MetaData[] = {
		{ "Category", "AI" },
		{ "ModuleRelativePath", "AIEnemy.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_PerceptionComp;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_SightConfig;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_CurrentTarget;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_ChaseWalkSpeed;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_EngageDistance;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static UObject* (*const DependentSingletons[])();
	static constexpr FClassFunctionLinkInfo FuncInfo[] = {
		{ &Z_Construct_UFunction_AAIEnemy_OnPerceptionUpdated, "OnPerceptionUpdated" }, // 2515006074
	};
	static_assert(UE_ARRAY_COUNT(FuncInfo) < 2048);
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<AAIEnemy>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AAIEnemy_Statics::NewProp_PerceptionComp = { "PerceptionComp", nullptr, (EPropertyFlags)0x00100000000a001d, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AAIEnemy, PerceptionComp), Z_Construct_UClass_UAIPerceptionComponent_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_PerceptionComp_MetaData), NewProp_PerceptionComp_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AAIEnemy_Statics::NewProp_SightConfig = { "SightConfig", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AAIEnemy, SightConfig), Z_Construct_UClass_UAISenseConfig_Sight_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_SightConfig_MetaData), NewProp_SightConfig_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AAIEnemy_Statics::NewProp_CurrentTarget = { "CurrentTarget", nullptr, (EPropertyFlags)0x0010000000000014, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AAIEnemy, CurrentTarget), Z_Construct_UClass_AActor_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_CurrentTarget_MetaData), NewProp_CurrentTarget_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_AAIEnemy_Statics::NewProp_ChaseWalkSpeed = { "ChaseWalkSpeed", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AAIEnemy, ChaseWalkSpeed), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_ChaseWalkSpeed_MetaData), NewProp_ChaseWalkSpeed_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_AAIEnemy_Statics::NewProp_EngageDistance = { "EngageDistance", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AAIEnemy, EngageDistance), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_EngageDistance_MetaData), NewProp_EngageDistance_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_AAIEnemy_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AAIEnemy_Statics::NewProp_PerceptionComp,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AAIEnemy_Statics::NewProp_SightConfig,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AAIEnemy_Statics::NewProp_CurrentTarget,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AAIEnemy_Statics::NewProp_ChaseWalkSpeed,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AAIEnemy_Statics::NewProp_EngageDistance,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_AAIEnemy_Statics::PropPointers) < 2048);
UObject* (*const Z_Construct_UClass_AAIEnemy_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_ACharacter,
	(UObject* (*)())Z_Construct_UPackage__Script_WayHome,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_AAIEnemy_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_AAIEnemy_Statics::ClassParams = {
	&AAIEnemy::StaticClass,
	"Game",
	&StaticCppClassTypeInfo,
	DependentSingletons,
	FuncInfo,
	Z_Construct_UClass_AAIEnemy_Statics::PropPointers,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	UE_ARRAY_COUNT(FuncInfo),
	UE_ARRAY_COUNT(Z_Construct_UClass_AAIEnemy_Statics::PropPointers),
	0,
	0x009000A4u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_AAIEnemy_Statics::Class_MetaDataParams), Z_Construct_UClass_AAIEnemy_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_AAIEnemy()
{
	if (!Z_Registration_Info_UClass_AAIEnemy.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_AAIEnemy.OuterSingleton, Z_Construct_UClass_AAIEnemy_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_AAIEnemy.OuterSingleton;
}
template<> WAYHOME_API UClass* StaticClass<AAIEnemy>()
{
	return AAIEnemy::StaticClass();
}
DEFINE_VTABLE_PTR_HELPER_CTOR(AAIEnemy);
AAIEnemy::~AAIEnemy() {}
// End Class AAIEnemy

// Begin Registration
struct Z_CompiledInDeferFile_FID_Users_Rihit_Desktop_WayHome_5_5_Source_WayHome_AIEnemy_h_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_AAIEnemy, AAIEnemy::StaticClass, TEXT("AAIEnemy"), &Z_Registration_Info_UClass_AAIEnemy, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(AAIEnemy), 3708036809U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Users_Rihit_Desktop_WayHome_5_5_Source_WayHome_AIEnemy_h_1181449380(TEXT("/Script/WayHome"),
	Z_CompiledInDeferFile_FID_Users_Rihit_Desktop_WayHome_5_5_Source_WayHome_AIEnemy_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Users_Rihit_Desktop_WayHome_5_5_Source_WayHome_AIEnemy_h_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
