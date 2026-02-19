// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "WayHome/EnemyControl.h"
#include "Runtime/AIModule/Classes/Perception/AIPerceptionTypes.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeEnemyControl() {}

// Begin Cross Module References
AIMODULE_API UClass* Z_Construct_UClass_AAIController();
AIMODULE_API UClass* Z_Construct_UClass_UAIPerceptionComponent_NoRegister();
AIMODULE_API UClass* Z_Construct_UClass_UAISenseConfig_Sight_NoRegister();
AIMODULE_API UClass* Z_Construct_UClass_UBehaviorTree_NoRegister();
AIMODULE_API UClass* Z_Construct_UClass_UBlackboardData_NoRegister();
AIMODULE_API UScriptStruct* Z_Construct_UScriptStruct_FAIStimulus();
ENGINE_API UClass* Z_Construct_UClass_AActor_NoRegister();
UPackage* Z_Construct_UPackage__Script_WayHome();
WAYHOME_API UClass* Z_Construct_UClass_AEnemyControl();
WAYHOME_API UClass* Z_Construct_UClass_AEnemyControl_NoRegister();
// End Cross Module References

// Begin Class AEnemyControl Function OnTargetPerceptionUpdated
struct Z_Construct_UFunction_AEnemyControl_OnTargetPerceptionUpdated_Statics
{
	struct EnemyControl_eventOnTargetPerceptionUpdated_Parms
	{
		AActor* Actor;
		FAIStimulus Stimulus;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
#if !UE_BUILD_SHIPPING
		{ "Comment", "/** \xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd""F/\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbdX\xef\xbf\xbdg\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xc9\x8c\xc4\x82\xce\x82\xef\xbf\xbd\xef\xbf\xbd */" },
#endif
		{ "ModuleRelativePath", "EnemyControl.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd""F/\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbdX\xef\xbf\xbdg\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xc9\x8c\xc4\x82\xce\x82\xef\xbf\xbd\xef\xbf\xbd" },
#endif
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_Actor;
	static const UECodeGen_Private::FStructPropertyParams NewProp_Stimulus;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_AEnemyControl_OnTargetPerceptionUpdated_Statics::NewProp_Actor = { "Actor", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(EnemyControl_eventOnTargetPerceptionUpdated_Parms, Actor), Z_Construct_UClass_AActor_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_AEnemyControl_OnTargetPerceptionUpdated_Statics::NewProp_Stimulus = { "Stimulus", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(EnemyControl_eventOnTargetPerceptionUpdated_Parms, Stimulus), Z_Construct_UScriptStruct_FAIStimulus, METADATA_PARAMS(0, nullptr) }; // 177100813
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AEnemyControl_OnTargetPerceptionUpdated_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AEnemyControl_OnTargetPerceptionUpdated_Statics::NewProp_Actor,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AEnemyControl_OnTargetPerceptionUpdated_Statics::NewProp_Stimulus,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_AEnemyControl_OnTargetPerceptionUpdated_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_AEnemyControl_OnTargetPerceptionUpdated_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AEnemyControl, nullptr, "OnTargetPerceptionUpdated", nullptr, nullptr, Z_Construct_UFunction_AEnemyControl_OnTargetPerceptionUpdated_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_AEnemyControl_OnTargetPerceptionUpdated_Statics::PropPointers), sizeof(Z_Construct_UFunction_AEnemyControl_OnTargetPerceptionUpdated_Statics::EnemyControl_eventOnTargetPerceptionUpdated_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00080401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_AEnemyControl_OnTargetPerceptionUpdated_Statics::Function_MetaDataParams), Z_Construct_UFunction_AEnemyControl_OnTargetPerceptionUpdated_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_AEnemyControl_OnTargetPerceptionUpdated_Statics::EnemyControl_eventOnTargetPerceptionUpdated_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_AEnemyControl_OnTargetPerceptionUpdated()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_AEnemyControl_OnTargetPerceptionUpdated_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(AEnemyControl::execOnTargetPerceptionUpdated)
{
	P_GET_OBJECT(AActor,Z_Param_Actor);
	P_GET_STRUCT(FAIStimulus,Z_Param_Stimulus);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->OnTargetPerceptionUpdated(Z_Param_Actor,Z_Param_Stimulus);
	P_NATIVE_END;
}
// End Class AEnemyControl Function OnTargetPerceptionUpdated

// Begin Class AEnemyControl
void AEnemyControl::StaticRegisterNativesAEnemyControl()
{
	UClass* Class = AEnemyControl::StaticClass();
	static const FNameNativePtrPair Funcs[] = {
		{ "OnTargetPerceptionUpdated", &AEnemyControl::execOnTargetPerceptionUpdated },
	};
	FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(AEnemyControl);
UClass* Z_Construct_UClass_AEnemyControl_NoRegister()
{
	return AEnemyControl::StaticClass();
}
struct Z_Construct_UClass_AEnemyControl_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "HideCategories", "Collision Rendering Transformation" },
		{ "IncludePath", "EnemyControl.h" },
		{ "ModuleRelativePath", "EnemyControl.h" },
		{ "ObjectInitializerConstructorDeclared", "" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Perception_MetaData[] = {
		{ "Category", "AI" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/** \xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbdo Perception \xef\xbf\xbdR\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd|\xef\xbf\xbd[\xef\xbf\xbdl\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbdg */" },
#endif
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "EnemyControl.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbdo Perception \xef\xbf\xbdR\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd|\xef\xbf\xbd[\xef\xbf\xbdl\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbdg" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_SightConfig_MetaData[] = {
#if !UE_BUILD_SHIPPING
		{ "Comment", "/** \xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbdo\xef\xbf\xbd\xdd\x92\xef\xbf\xbd */" },
#endif
		{ "ModuleRelativePath", "EnemyControl.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbdo\xef\xbf\xbd\xdd\x92\xef\xbf\xbd" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_BehaviorTreeAsset_MetaData[] = {
		{ "Category", "AI|BT" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/** \xef\xbf\xbdg\xef\xbf\xbdp\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd BehaviorTree\xef\xbf\xbdi\xef\xbf\xbdG\xef\xbf\xbd""f\xef\xbf\xbd""B\xef\xbf\xbd^\xef\xbf\xbd\xc5\x8a\xef\xbf\xbd\xef\xbf\xbd\xe8\x93\x96\xef\xbf\xbd\xc4\x81j */" },
#endif
		{ "ModuleRelativePath", "EnemyControl.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "\xef\xbf\xbdg\xef\xbf\xbdp\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd BehaviorTree\xef\xbf\xbdi\xef\xbf\xbdG\xef\xbf\xbd""f\xef\xbf\xbd""B\xef\xbf\xbd^\xef\xbf\xbd\xc5\x8a\xef\xbf\xbd\xef\xbf\xbd\xe8\x93\x96\xef\xbf\xbd\xc4\x81j" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_BlackboardAsset_MetaData[] = {
		{ "Category", "AI|BT" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/** \xef\xbf\xbdg\xef\xbf\xbdp\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd Blackboard\xef\xbf\xbdi\xef\xbf\xbdG\xef\xbf\xbd""f\xef\xbf\xbd""B\xef\xbf\xbd^\xef\xbf\xbd\xc5\x8a\xef\xbf\xbd\xef\xbf\xbd\xe8\x93\x96\xef\xbf\xbd\xc4\x81j */" },
#endif
		{ "ModuleRelativePath", "EnemyControl.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "\xef\xbf\xbdg\xef\xbf\xbdp\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd Blackboard\xef\xbf\xbdi\xef\xbf\xbdG\xef\xbf\xbd""f\xef\xbf\xbd""B\xef\xbf\xbd^\xef\xbf\xbd\xc5\x8a\xef\xbf\xbd\xef\xbf\xbd\xe8\x93\x96\xef\xbf\xbd\xc4\x81j" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_BBKey_Target_MetaData[] = {
		{ "Category", "AI|BB" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/** Target \xef\xbf\xbd\xef\xbf\xbd BB \xef\xbf\xbdL\xef\xbf\xbd[\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbdiBB \xef\xbf\xbd\xc6\x88\xef\xbf\xbdv\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbdj */" },
#endif
		{ "ModuleRelativePath", "EnemyControl.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Target \xef\xbf\xbd\xef\xbf\xbd BB \xef\xbf\xbdL\xef\xbf\xbd[\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbdiBB \xef\xbf\xbd\xc6\x88\xef\xbf\xbdv\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbdj" },
#endif
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_Perception;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_SightConfig;
	static const UECodeGen_Private::FSoftObjectPropertyParams NewProp_BehaviorTreeAsset;
	static const UECodeGen_Private::FSoftObjectPropertyParams NewProp_BlackboardAsset;
	static const UECodeGen_Private::FNamePropertyParams NewProp_BBKey_Target;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static UObject* (*const DependentSingletons[])();
	static constexpr FClassFunctionLinkInfo FuncInfo[] = {
		{ &Z_Construct_UFunction_AEnemyControl_OnTargetPerceptionUpdated, "OnTargetPerceptionUpdated" }, // 3428606799
	};
	static_assert(UE_ARRAY_COUNT(FuncInfo) < 2048);
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<AEnemyControl>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AEnemyControl_Statics::NewProp_Perception = { "Perception", nullptr, (EPropertyFlags)0x00200800000a001d, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AEnemyControl, Perception), Z_Construct_UClass_UAIPerceptionComponent_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Perception_MetaData), NewProp_Perception_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AEnemyControl_Statics::NewProp_SightConfig = { "SightConfig", nullptr, (EPropertyFlags)0x0020080000000000, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AEnemyControl, SightConfig), Z_Construct_UClass_UAISenseConfig_Sight_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_SightConfig_MetaData), NewProp_SightConfig_MetaData) };
const UECodeGen_Private::FSoftObjectPropertyParams Z_Construct_UClass_AEnemyControl_Statics::NewProp_BehaviorTreeAsset = { "BehaviorTreeAsset", nullptr, (EPropertyFlags)0x0024080000010001, UECodeGen_Private::EPropertyGenFlags::SoftObject, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AEnemyControl, BehaviorTreeAsset), Z_Construct_UClass_UBehaviorTree_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_BehaviorTreeAsset_MetaData), NewProp_BehaviorTreeAsset_MetaData) };
const UECodeGen_Private::FSoftObjectPropertyParams Z_Construct_UClass_AEnemyControl_Statics::NewProp_BlackboardAsset = { "BlackboardAsset", nullptr, (EPropertyFlags)0x0024080000010001, UECodeGen_Private::EPropertyGenFlags::SoftObject, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AEnemyControl, BlackboardAsset), Z_Construct_UClass_UBlackboardData_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_BlackboardAsset_MetaData), NewProp_BlackboardAsset_MetaData) };
const UECodeGen_Private::FNamePropertyParams Z_Construct_UClass_AEnemyControl_Statics::NewProp_BBKey_Target = { "BBKey_Target", nullptr, (EPropertyFlags)0x0020080000010001, UECodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AEnemyControl, BBKey_Target), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_BBKey_Target_MetaData), NewProp_BBKey_Target_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_AEnemyControl_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AEnemyControl_Statics::NewProp_Perception,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AEnemyControl_Statics::NewProp_SightConfig,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AEnemyControl_Statics::NewProp_BehaviorTreeAsset,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AEnemyControl_Statics::NewProp_BlackboardAsset,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AEnemyControl_Statics::NewProp_BBKey_Target,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_AEnemyControl_Statics::PropPointers) < 2048);
UObject* (*const Z_Construct_UClass_AEnemyControl_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_AAIController,
	(UObject* (*)())Z_Construct_UPackage__Script_WayHome,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_AEnemyControl_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_AEnemyControl_Statics::ClassParams = {
	&AEnemyControl::StaticClass,
	"Engine",
	&StaticCppClassTypeInfo,
	DependentSingletons,
	FuncInfo,
	Z_Construct_UClass_AEnemyControl_Statics::PropPointers,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	UE_ARRAY_COUNT(FuncInfo),
	UE_ARRAY_COUNT(Z_Construct_UClass_AEnemyControl_Statics::PropPointers),
	0,
	0x009002A4u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_AEnemyControl_Statics::Class_MetaDataParams), Z_Construct_UClass_AEnemyControl_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_AEnemyControl()
{
	if (!Z_Registration_Info_UClass_AEnemyControl.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_AEnemyControl.OuterSingleton, Z_Construct_UClass_AEnemyControl_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_AEnemyControl.OuterSingleton;
}
template<> WAYHOME_API UClass* StaticClass<AEnemyControl>()
{
	return AEnemyControl::StaticClass();
}
DEFINE_VTABLE_PTR_HELPER_CTOR(AEnemyControl);
AEnemyControl::~AEnemyControl() {}
// End Class AEnemyControl

// Begin Registration
struct Z_CompiledInDeferFile_FID_Users_Rihit_Desktop_WayHome_5_5_Source_WayHome_EnemyControl_h_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_AEnemyControl, AEnemyControl::StaticClass, TEXT("AEnemyControl"), &Z_Registration_Info_UClass_AEnemyControl, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(AEnemyControl), 775873814U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Users_Rihit_Desktop_WayHome_5_5_Source_WayHome_EnemyControl_h_2059773492(TEXT("/Script/WayHome"),
	Z_CompiledInDeferFile_FID_Users_Rihit_Desktop_WayHome_5_5_Source_WayHome_EnemyControl_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Users_Rihit_Desktop_WayHome_5_5_Source_WayHome_EnemyControl_h_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
