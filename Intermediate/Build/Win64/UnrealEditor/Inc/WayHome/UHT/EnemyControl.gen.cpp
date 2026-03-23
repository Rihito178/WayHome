// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "WayHome/EnemyControl.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeEnemyControl() {}

// Begin Cross Module References
AIMODULE_API UClass* Z_Construct_UClass_AAIController();
AIMODULE_API UClass* Z_Construct_UClass_UBehaviorTree_NoRegister();
AIMODULE_API UClass* Z_Construct_UClass_UBehaviorTreeComponent_NoRegister();
AIMODULE_API UClass* Z_Construct_UClass_UBlackboardComponent_NoRegister();
ENGINE_API UClass* Z_Construct_UClass_APawn_NoRegister();
UPackage* Z_Construct_UPackage__Script_WayHome();
WAYHOME_API UClass* Z_Construct_UClass_AEnemyControl();
WAYHOME_API UClass* Z_Construct_UClass_AEnemyControl_NoRegister();
// End Cross Module References

// Begin Class AEnemyControl Function ClearTargetActor
struct Z_Construct_UFunction_AEnemyControl_ClearTargetActor_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "AI" },
		{ "ModuleRelativePath", "EnemyControl.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_AEnemyControl_ClearTargetActor_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AEnemyControl, nullptr, "ClearTargetActor", nullptr, nullptr, nullptr, 0, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_AEnemyControl_ClearTargetActor_Statics::Function_MetaDataParams), Z_Construct_UFunction_AEnemyControl_ClearTargetActor_Statics::Function_MetaDataParams) };
UFunction* Z_Construct_UFunction_AEnemyControl_ClearTargetActor()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_AEnemyControl_ClearTargetActor_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(AEnemyControl::execClearTargetActor)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->ClearTargetActor();
	P_NATIVE_END;
}
// End Class AEnemyControl Function ClearTargetActor

// Begin Class AEnemyControl Function SetTargetActor
struct Z_Construct_UFunction_AEnemyControl_SetTargetActor_Statics
{
	struct EnemyControl_eventSetTargetActor_Parms
	{
		APawn* Target;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "AI" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/** \xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd""F\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xc4\x82\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbdv\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd""C\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd[\xef\xbf\xbdiAPawn\xef\xbf\xbdj\xef\xbf\xbd\xef\xbf\xbd BB \xef\xbf\xbd\xef\xbf\xbd Player_Info \xef\xbf\xbd\xc9\x8f\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xde\x81^\xef\xbf\xbdN\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd""A\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd */" },
#endif
		{ "ModuleRelativePath", "EnemyControl.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd""F\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xc4\x82\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbdv\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd""C\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd[\xef\xbf\xbdiAPawn\xef\xbf\xbdj\xef\xbf\xbd\xef\xbf\xbd BB \xef\xbf\xbd\xef\xbf\xbd Player_Info \xef\xbf\xbd\xc9\x8f\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xde\x81^\xef\xbf\xbdN\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd""A\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd" },
#endif
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_Target;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_AEnemyControl_SetTargetActor_Statics::NewProp_Target = { "Target", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(EnemyControl_eventSetTargetActor_Parms, Target), Z_Construct_UClass_APawn_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AEnemyControl_SetTargetActor_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AEnemyControl_SetTargetActor_Statics::NewProp_Target,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_AEnemyControl_SetTargetActor_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_AEnemyControl_SetTargetActor_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AEnemyControl, nullptr, "SetTargetActor", nullptr, nullptr, Z_Construct_UFunction_AEnemyControl_SetTargetActor_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_AEnemyControl_SetTargetActor_Statics::PropPointers), sizeof(Z_Construct_UFunction_AEnemyControl_SetTargetActor_Statics::EnemyControl_eventSetTargetActor_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_AEnemyControl_SetTargetActor_Statics::Function_MetaDataParams), Z_Construct_UFunction_AEnemyControl_SetTargetActor_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_AEnemyControl_SetTargetActor_Statics::EnemyControl_eventSetTargetActor_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_AEnemyControl_SetTargetActor()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_AEnemyControl_SetTargetActor_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(AEnemyControl::execSetTargetActor)
{
	P_GET_OBJECT(APawn,Z_Param_Target);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->SetTargetActor(Z_Param_Target);
	P_NATIVE_END;
}
// End Class AEnemyControl Function SetTargetActor

// Begin Class AEnemyControl
void AEnemyControl::StaticRegisterNativesAEnemyControl()
{
	UClass* Class = AEnemyControl::StaticClass();
	static const FNameNativePtrPair Funcs[] = {
		{ "ClearTargetActor", &AEnemyControl::execClearTargetActor },
		{ "SetTargetActor", &AEnemyControl::execSetTargetActor },
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
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n * AEnemyControl\n * - RunBehaviorTree / UseBlackboard \xef\xbf\xbd\xef\xbf\xbd OnPossess \xef\xbf\xbd\xc5\x88\xef\xbf\xbdx\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbdN\xef\xbf\xbd\xef\xbf\xbd\n * - Player_Info\xef\xbf\xbdiBB\xef\xbf\xbdL\xef\xbf\xbd[\xef\xbf\xbdj\xef\xbf\xbd\xd6\x82\xcc\x8f\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd/\xef\xbf\xbdN\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd""A\xef\xbf\xbd\xcc\x82\xdd\x82\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbdJ\xef\xbf\xbdi\xef\xbf\xbd\xda\x93\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xdf\x82\xcd\x88\xef\xbf\xbd\xd8\x82\xef\xbf\xbd\xef\xbf\xbd\xc8\x82\xef\xbf\xbd\xef\xbf\xbdj\n */" },
#endif
		{ "HideCategories", "Collision Rendering Transformation" },
		{ "IncludePath", "EnemyControl.h" },
		{ "ModuleRelativePath", "EnemyControl.h" },
		{ "ObjectInitializerConstructorDeclared", "" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "AEnemyControl\n- RunBehaviorTree / UseBlackboard \xef\xbf\xbd\xef\xbf\xbd OnPossess \xef\xbf\xbd\xc5\x88\xef\xbf\xbdx\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbdN\xef\xbf\xbd\xef\xbf\xbd\n- Player_Info\xef\xbf\xbdiBB\xef\xbf\xbdL\xef\xbf\xbd[\xef\xbf\xbdj\xef\xbf\xbd\xd6\x82\xcc\x8f\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd/\xef\xbf\xbdN\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd""A\xef\xbf\xbd\xcc\x82\xdd\x82\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbdJ\xef\xbf\xbdi\xef\xbf\xbd\xda\x93\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xdf\x82\xcd\x88\xef\xbf\xbd\xd8\x82\xef\xbf\xbd\xef\xbf\xbd\xc8\x82\xef\xbf\xbd\xef\xbf\xbdj" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_BlackboardComp_MetaData[] = {
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "EnemyControl.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_BehaviorComp_MetaData[] = {
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "EnemyControl.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_BehaviorTreeAsset_MetaData[] = {
		{ "Category", "AI" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/** Controller\xef\xbf\xbdiBP\xef\xbf\xbdj\xef\xbf\xbd\xef\xbf\xbd Defaults \xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xe7\x8a\x84\xef\xbf\xbd\xe8\x93\x96\xef\xbf\xbd\xc4\x82\xef\xbf\xbdz\xef\xbf\xbd\xef\xbf\xbd */" },
#endif
		{ "ModuleRelativePath", "EnemyControl.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Controller\xef\xbf\xbdiBP\xef\xbf\xbdj\xef\xbf\xbd\xef\xbf\xbd Defaults \xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xe7\x8a\x84\xef\xbf\xbd\xe8\x93\x96\xef\xbf\xbd\xc4\x82\xef\xbf\xbdz\xef\xbf\xbd\xef\xbf\xbd" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_PlayerKeyName_MetaData[] = {
		{ "Category", "AI" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/** \xef\xbf\xbd\xef\xbf\xbd Blackboard/BT \xef\xbf\xbd\xc6\x8a\xef\xbf\xbd\xef\xbf\xbdS\xef\xbf\xbd\xef\xbf\xbdv\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbdi\xef\xbf\xbd\xef\xbf\xbd""FPlayer_Info\xef\xbf\xbdj */" },
#endif
		{ "ModuleRelativePath", "EnemyControl.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "\xef\xbf\xbd\xef\xbf\xbd Blackboard/BT \xef\xbf\xbd\xc6\x8a\xef\xbf\xbd\xef\xbf\xbdS\xef\xbf\xbd\xef\xbf\xbdv\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbdi\xef\xbf\xbd\xef\xbf\xbd""FPlayer_Info\xef\xbf\xbdj" },
#endif
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_BlackboardComp;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_BehaviorComp;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_BehaviorTreeAsset;
	static const UECodeGen_Private::FNamePropertyParams NewProp_PlayerKeyName;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static UObject* (*const DependentSingletons[])();
	static constexpr FClassFunctionLinkInfo FuncInfo[] = {
		{ &Z_Construct_UFunction_AEnemyControl_ClearTargetActor, "ClearTargetActor" }, // 1318988516
		{ &Z_Construct_UFunction_AEnemyControl_SetTargetActor, "SetTargetActor" }, // 2703277106
	};
	static_assert(UE_ARRAY_COUNT(FuncInfo) < 2048);
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<AEnemyControl>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AEnemyControl_Statics::NewProp_BlackboardComp = { "BlackboardComp", nullptr, (EPropertyFlags)0x0040000000082008, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AEnemyControl, BlackboardComp), Z_Construct_UClass_UBlackboardComponent_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_BlackboardComp_MetaData), NewProp_BlackboardComp_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AEnemyControl_Statics::NewProp_BehaviorComp = { "BehaviorComp", nullptr, (EPropertyFlags)0x0040000000082008, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AEnemyControl, BehaviorComp), Z_Construct_UClass_UBehaviorTreeComponent_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_BehaviorComp_MetaData), NewProp_BehaviorComp_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AEnemyControl_Statics::NewProp_BehaviorTreeAsset = { "BehaviorTreeAsset", nullptr, (EPropertyFlags)0x0040000000010001, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AEnemyControl, BehaviorTreeAsset), Z_Construct_UClass_UBehaviorTree_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_BehaviorTreeAsset_MetaData), NewProp_BehaviorTreeAsset_MetaData) };
const UECodeGen_Private::FNamePropertyParams Z_Construct_UClass_AEnemyControl_Statics::NewProp_PlayerKeyName = { "PlayerKeyName", nullptr, (EPropertyFlags)0x0040000000010001, UECodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AEnemyControl, PlayerKeyName), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_PlayerKeyName_MetaData), NewProp_PlayerKeyName_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_AEnemyControl_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AEnemyControl_Statics::NewProp_BlackboardComp,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AEnemyControl_Statics::NewProp_BehaviorComp,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AEnemyControl_Statics::NewProp_BehaviorTreeAsset,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AEnemyControl_Statics::NewProp_PlayerKeyName,
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
struct Z_CompiledInDeferFile_FID_240160_WayHome_Source_WayHome_EnemyControl_h_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_AEnemyControl, AEnemyControl::StaticClass, TEXT("AEnemyControl"), &Z_Registration_Info_UClass_AEnemyControl, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(AEnemyControl), 4279236165U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_240160_WayHome_Source_WayHome_EnemyControl_h_3263624192(TEXT("/Script/WayHome"),
	Z_CompiledInDeferFile_FID_240160_WayHome_Source_WayHome_EnemyControl_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_240160_WayHome_Source_WayHome_EnemyControl_h_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
