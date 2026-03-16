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
AIMODULE_API UClass* Z_Construct_UClass_UBehaviorTreeComponent_NoRegister();
AIMODULE_API UClass* Z_Construct_UClass_UBlackboardComponent_NoRegister();
ENGINE_API UClass* Z_Construct_UClass_AActor_NoRegister();
ENGINE_API UClass* Z_Construct_UClass_ACharacter();
ENGINE_API UClass* Z_Construct_UClass_ACharacter_NoRegister();
UPackage* Z_Construct_UPackage__Script_WayHome();
WAYHOME_API UClass* Z_Construct_UClass_AAIEnemy();
WAYHOME_API UClass* Z_Construct_UClass_AAIEnemy_NoRegister();
WAYHOME_API UClass* Z_Construct_UClass_ARootPoint_NoRegister();
// End Cross Module References

// Begin Class AAIEnemy Function GetPlayerKey
struct Z_Construct_UFunction_AAIEnemy_GetPlayerKey_Statics
{
	struct AIEnemy_eventGetPlayerKey_Parms
	{
		ACharacter* ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "AIEnemy.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_AAIEnemy_GetPlayerKey_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AIEnemy_eventGetPlayerKey_Parms, ReturnValue), Z_Construct_UClass_ACharacter_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AAIEnemy_GetPlayerKey_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AAIEnemy_GetPlayerKey_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_AAIEnemy_GetPlayerKey_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_AAIEnemy_GetPlayerKey_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AAIEnemy, nullptr, "GetPlayerKey", nullptr, nullptr, Z_Construct_UFunction_AAIEnemy_GetPlayerKey_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_AAIEnemy_GetPlayerKey_Statics::PropPointers), sizeof(Z_Construct_UFunction_AAIEnemy_GetPlayerKey_Statics::AIEnemy_eventGetPlayerKey_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_AAIEnemy_GetPlayerKey_Statics::Function_MetaDataParams), Z_Construct_UFunction_AAIEnemy_GetPlayerKey_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_AAIEnemy_GetPlayerKey_Statics::AIEnemy_eventGetPlayerKey_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_AAIEnemy_GetPlayerKey()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_AAIEnemy_GetPlayerKey_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(AAIEnemy::execGetPlayerKey)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	*(ACharacter**)Z_Param__Result=P_THIS->GetPlayerKey();
	P_NATIVE_END;
}
// End Class AAIEnemy Function GetPlayerKey

// Begin Class AAIEnemy Function GetRootPointActor
struct Z_Construct_UFunction_AAIEnemy_GetRootPointActor_Statics
{
	struct AIEnemy_eventGetRootPointActor_Parms
	{
		const ARootPoint* ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "AI|Roaming" },
		{ "ModuleRelativePath", "AIEnemy.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_ReturnValue_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_AAIEnemy_GetRootPointActor_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000582, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AIEnemy_eventGetRootPointActor_Parms, ReturnValue), Z_Construct_UClass_ARootPoint_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_ReturnValue_MetaData), NewProp_ReturnValue_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AAIEnemy_GetRootPointActor_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AAIEnemy_GetRootPointActor_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_AAIEnemy_GetRootPointActor_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_AAIEnemy_GetRootPointActor_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AAIEnemy, nullptr, "GetRootPointActor", nullptr, nullptr, Z_Construct_UFunction_AAIEnemy_GetRootPointActor_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_AAIEnemy_GetRootPointActor_Statics::PropPointers), sizeof(Z_Construct_UFunction_AAIEnemy_GetRootPointActor_Statics::AIEnemy_eventGetRootPointActor_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_AAIEnemy_GetRootPointActor_Statics::Function_MetaDataParams), Z_Construct_UFunction_AAIEnemy_GetRootPointActor_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_AAIEnemy_GetRootPointActor_Statics::AIEnemy_eventGetRootPointActor_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_AAIEnemy_GetRootPointActor()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_AAIEnemy_GetRootPointActor_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(AAIEnemy::execGetRootPointActor)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	*(const ARootPoint**)Z_Param__Result=P_THIS->GetRootPointActor();
	P_NATIVE_END;
}
// End Class AAIEnemy Function GetRootPointActor

// Begin Class AAIEnemy Function OnPerceptionUpdated
struct Z_Construct_UFunction_AAIEnemy_OnPerceptionUpdated_Statics
{
	struct AIEnemy_eventOnPerceptionUpdated_Parms
	{
		TArray<AActor*> UpdatedActors;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
#if !UE_BUILD_SHIPPING
		{ "Comment", "// \xef\xbf\xbd\xef\xbf\xbd HTML\xef\xbf\xbdG\xef\xbf\xbdX\xef\xbf\xbdP\xef\xbf\xbd[\xef\xbf\xbdv\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd & \xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbdV\xef\xbf\xbdO\xef\xbf\xbdl\xef\xbf\xbd`\xef\xbf\xbd\xef\xbf\xbd\n" },
#endif
		{ "ModuleRelativePath", "AIEnemy.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "\xef\xbf\xbd\xef\xbf\xbd HTML\xef\xbf\xbdG\xef\xbf\xbdX\xef\xbf\xbdP\xef\xbf\xbd[\xef\xbf\xbdv\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd & \xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbdV\xef\xbf\xbdO\xef\xbf\xbdl\xef\xbf\xbd`\xef\xbf\xbd\xef\xbf\xbd" },
#endif
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
		{ "GetPlayerKey", &AAIEnemy::execGetPlayerKey },
		{ "GetRootPointActor", &AAIEnemy::execGetRootPointActor },
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
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_BehaviorComp_MetaData[] = {
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "AIEnemy.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_BlackboardComp_MetaData[] = {
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "AIEnemy.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_PlayerKeyName_MetaData[] = {
		{ "Category", "AI" },
		{ "ModuleRelativePath", "AIEnemy.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_PerceptionComp_MetaData[] = {
		{ "Category", "AI" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/** \xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbdo\xef\xbf\xbdiAI Perception\xef\xbf\xbdj */" },
#endif
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "AIEnemy.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbdo\xef\xbf\xbdiAI Perception\xef\xbf\xbdj" },
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
#if !UE_BUILD_SHIPPING
		{ "Comment", "/** \xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xdd\x82\xcc\x83^\xef\xbf\xbd[\xef\xbf\xbdQ\xef\xbf\xbd""b\xef\xbf\xbdg */" },
#endif
		{ "ModuleRelativePath", "AIEnemy.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xdd\x82\xcc\x83^\xef\xbf\xbd[\xef\xbf\xbdQ\xef\xbf\xbd""b\xef\xbf\xbdg" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_ChaseWalkSpeed_MetaData[] = {
		{ "Category", "AI" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/** \xef\xbf\xbd\xc7\x90\xd5\x8e\xef\xbf\xbd\xef\xbf\xbd\xcc\x95\xef\xbf\xbd\xef\xbf\xbds\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbdx */" },
#endif
		{ "ModuleRelativePath", "AIEnemy.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "\xef\xbf\xbd\xc7\x90\xd5\x8e\xef\xbf\xbd\xef\xbf\xbd\xcc\x95\xef\xbf\xbd\xef\xbf\xbds\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbdx" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_EngageDistance_MetaData[] = {
		{ "Category", "AI" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/** \xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbdJ\xef\xbf\xbdn\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbdiMoveTo \xef\xbf\xbd\xcc\x96\xda\x88\xef\xbf\xbd\xef\xbf\xbdj */" },
#endif
		{ "ModuleRelativePath", "AIEnemy.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbdJ\xef\xbf\xbdn\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbdiMoveTo \xef\xbf\xbd\xcc\x96\xda\x88\xef\xbf\xbd\xef\xbf\xbdj" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_RootPointActor_MetaData[] = {
		{ "Category", "AI|Roaming" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/** \xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xf1\x83\x8b\x81[\xef\xbf\xbdg\xef\xbf\xbd\xef\xbf\xbd RootPoint\xef\xbf\xbdi\xef\xbf\xbd""C\xef\xbf\xbd\xd3\x81j */" },
#endif
		{ "ModuleRelativePath", "AIEnemy.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xf1\x83\x8b\x81[\xef\xbf\xbdg\xef\xbf\xbd\xef\xbf\xbd RootPoint\xef\xbf\xbdi\xef\xbf\xbd""C\xef\xbf\xbd\xd3\x81j" },
#endif
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_BehaviorComp;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_BlackboardComp;
	static const UECodeGen_Private::FNamePropertyParams NewProp_PlayerKeyName;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_PerceptionComp;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_SightConfig;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_CurrentTarget;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_ChaseWalkSpeed;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_EngageDistance;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_RootPointActor;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static UObject* (*const DependentSingletons[])();
	static constexpr FClassFunctionLinkInfo FuncInfo[] = {
		{ &Z_Construct_UFunction_AAIEnemy_GetPlayerKey, "GetPlayerKey" }, // 1724517637
		{ &Z_Construct_UFunction_AAIEnemy_GetRootPointActor, "GetRootPointActor" }, // 2452815365
		{ &Z_Construct_UFunction_AAIEnemy_OnPerceptionUpdated, "OnPerceptionUpdated" }, // 3254584667
	};
	static_assert(UE_ARRAY_COUNT(FuncInfo) < 2048);
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<AAIEnemy>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AAIEnemy_Statics::NewProp_BehaviorComp = { "BehaviorComp", nullptr, (EPropertyFlags)0x0010000000080008, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AAIEnemy, BehaviorComp), Z_Construct_UClass_UBehaviorTreeComponent_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_BehaviorComp_MetaData), NewProp_BehaviorComp_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AAIEnemy_Statics::NewProp_BlackboardComp = { "BlackboardComp", nullptr, (EPropertyFlags)0x0010000000080008, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AAIEnemy, BlackboardComp), Z_Construct_UClass_UBlackboardComponent_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_BlackboardComp_MetaData), NewProp_BlackboardComp_MetaData) };
const UECodeGen_Private::FNamePropertyParams Z_Construct_UClass_AAIEnemy_Statics::NewProp_PlayerKeyName = { "PlayerKeyName", nullptr, (EPropertyFlags)0x0010000000010001, UECodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AAIEnemy, PlayerKeyName), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_PlayerKeyName_MetaData), NewProp_PlayerKeyName_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AAIEnemy_Statics::NewProp_PerceptionComp = { "PerceptionComp", nullptr, (EPropertyFlags)0x00100000000a001d, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AAIEnemy, PerceptionComp), Z_Construct_UClass_UAIPerceptionComponent_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_PerceptionComp_MetaData), NewProp_PerceptionComp_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AAIEnemy_Statics::NewProp_SightConfig = { "SightConfig", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AAIEnemy, SightConfig), Z_Construct_UClass_UAISenseConfig_Sight_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_SightConfig_MetaData), NewProp_SightConfig_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AAIEnemy_Statics::NewProp_CurrentTarget = { "CurrentTarget", nullptr, (EPropertyFlags)0x0010000000000014, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AAIEnemy, CurrentTarget), Z_Construct_UClass_AActor_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_CurrentTarget_MetaData), NewProp_CurrentTarget_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_AAIEnemy_Statics::NewProp_ChaseWalkSpeed = { "ChaseWalkSpeed", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AAIEnemy, ChaseWalkSpeed), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_ChaseWalkSpeed_MetaData), NewProp_ChaseWalkSpeed_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_AAIEnemy_Statics::NewProp_EngageDistance = { "EngageDistance", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AAIEnemy, EngageDistance), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_EngageDistance_MetaData), NewProp_EngageDistance_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AAIEnemy_Statics::NewProp_RootPointActor = { "RootPointActor", nullptr, (EPropertyFlags)0x0010000000000805, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AAIEnemy, RootPointActor), Z_Construct_UClass_ARootPoint_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_RootPointActor_MetaData), NewProp_RootPointActor_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_AAIEnemy_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AAIEnemy_Statics::NewProp_BehaviorComp,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AAIEnemy_Statics::NewProp_BlackboardComp,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AAIEnemy_Statics::NewProp_PlayerKeyName,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AAIEnemy_Statics::NewProp_PerceptionComp,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AAIEnemy_Statics::NewProp_SightConfig,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AAIEnemy_Statics::NewProp_CurrentTarget,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AAIEnemy_Statics::NewProp_ChaseWalkSpeed,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AAIEnemy_Statics::NewProp_EngageDistance,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AAIEnemy_Statics::NewProp_RootPointActor,
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
		{ Z_Construct_UClass_AAIEnemy, AAIEnemy::StaticClass, TEXT("AAIEnemy"), &Z_Registration_Info_UClass_AAIEnemy, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(AAIEnemy), 2576385240U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Users_Rihit_Desktop_WayHome_5_5_Source_WayHome_AIEnemy_h_4236157816(TEXT("/Script/WayHome"),
	Z_CompiledInDeferFile_FID_Users_Rihit_Desktop_WayHome_5_5_Source_WayHome_AIEnemy_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Users_Rihit_Desktop_WayHome_5_5_Source_WayHome_AIEnemy_h_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
