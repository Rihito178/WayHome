// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "WayHome/MyBTTask_RootPoint.h"
#include "Runtime/AIModule/Classes/BehaviorTree/BehaviorTreeTypes.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeMyBTTask_RootPoint() {}

// Begin Cross Module References
AIMODULE_API UClass* Z_Construct_UClass_UBTTask_BlackboardBase();
AIMODULE_API UScriptStruct* Z_Construct_UScriptStruct_FBlackboardKeySelector();
COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FVector();
UPackage* Z_Construct_UPackage__Script_WayHome();
WAYHOME_API UClass* Z_Construct_UClass_UMyBTTask_RootPoint();
WAYHOME_API UClass* Z_Construct_UClass_UMyBTTask_RootPoint_NoRegister();
// End Cross Module References

// Begin Class UMyBTTask_RootPoint
void UMyBTTask_RootPoint::StaticRegisterNativesUMyBTTask_RootPoint()
{
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UMyBTTask_RootPoint);
UClass* Z_Construct_UClass_UMyBTTask_RootPoint_NoRegister()
{
	return UMyBTTask_RootPoint::StaticClass();
}
struct Z_Construct_UClass_UMyBTTask_RootPoint_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n * Blackboard \xef\xbf\xbd\xef\xbf\xbd Int\xef\xbf\xbdiPoint_Index\xef\xbf\xbdj\xef\xbf\xbd\xc9\x8f]\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd""AARootPoint \xef\xbf\xbd\xcc\x94z\xef\xbf\xbd\xf1\x82\xa9\x82\xe7\x83\x8f\xef\xbf\xbd[\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbdh\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbdW\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbdo\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd""A\n * NavMesh \xef\xbf\xbd\xef\xbf\xbd\xc9\x93\xef\xbf\xbd\xef\xbf\xbd""e\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd Blackboard(Vector)\xef\xbf\xbdi= BlackboardKey\xef\xbf\xbdj\xef\xbf\xbd\xc9\x8f\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xde\x83^\xef\xbf\xbdX\xef\xbf\xbdN\xef\xbf\xbd""B\n * - BlackboardKey   : Vector\xef\xbf\xbdi\xef\xbf\xbd\xef\xbf\xbd \"Point_Location\"\xef\xbf\xbdj\n * - PointIndexKey   : Int   \xef\xbf\xbdi\xef\xbf\xbd\xef\xbf\xbd \"Point_Index\"\xef\xbf\xbdj\n * - RootPoint \xef\xbf\xbd\xcd\x83^\xef\xbf\xbdX\xef\xbf\xbdN\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xc5\x88\xef\xbf\xbdx\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbdT\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbdL\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd""b\xef\xbf\xbdV\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbdi\xef\xbf\xbdL\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd`\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbdj\n */" },
#endif
		{ "IncludePath", "MyBTTask_RootPoint.h" },
		{ "ModuleRelativePath", "MyBTTask_RootPoint.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Blackboard \xef\xbf\xbd\xef\xbf\xbd Int\xef\xbf\xbdiPoint_Index\xef\xbf\xbdj\xef\xbf\xbd\xc9\x8f]\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd""AARootPoint \xef\xbf\xbd\xcc\x94z\xef\xbf\xbd\xf1\x82\xa9\x82\xe7\x83\x8f\xef\xbf\xbd[\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbdh\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbdW\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbdo\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd""A\nNavMesh \xef\xbf\xbd\xef\xbf\xbd\xc9\x93\xef\xbf\xbd\xef\xbf\xbd""e\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd Blackboard(Vector)\xef\xbf\xbdi= BlackboardKey\xef\xbf\xbdj\xef\xbf\xbd\xc9\x8f\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xde\x83^\xef\xbf\xbdX\xef\xbf\xbdN\xef\xbf\xbd""B\n- BlackboardKey   : Vector\xef\xbf\xbdi\xef\xbf\xbd\xef\xbf\xbd \"Point_Location\"\xef\xbf\xbdj\n- PointIndexKey   : Int   \xef\xbf\xbdi\xef\xbf\xbd\xef\xbf\xbd \"Point_Index\"\xef\xbf\xbdj\n- RootPoint \xef\xbf\xbd\xcd\x83^\xef\xbf\xbdX\xef\xbf\xbdN\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xc5\x88\xef\xbf\xbdx\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbdT\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbdL\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd""b\xef\xbf\xbdV\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbdi\xef\xbf\xbdL\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd`\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbdj" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_PointIndexKey_MetaData[] = {
		{ "Category", "Blackboard" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/** Index \xef\xbf\xbd\xef\xbf\xbd\xc7\x82\xde\x82\xef\xbf\xbd\xef\xbf\xbd\xdf\x82\xef\xbf\xbd BB \xef\xbf\xbdL\xef\xbf\xbd[\xef\xbf\xbdi\xef\xbf\xbd\xef\xbf\xbd \"Point_Index\"\xef\xbf\xbdj */" },
#endif
		{ "ModuleRelativePath", "MyBTTask_RootPoint.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Index \xef\xbf\xbd\xef\xbf\xbd\xc7\x82\xde\x82\xef\xbf\xbd\xef\xbf\xbd\xdf\x82\xef\xbf\xbd BB \xef\xbf\xbdL\xef\xbf\xbd[\xef\xbf\xbdi\xef\xbf\xbd\xef\xbf\xbd \"Point_Index\"\xef\xbf\xbdj" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_ProjectSearchExtent_MetaData[] = {
		{ "Category", "FindPoint" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/** NavMesh \xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd""e\xef\xbf\xbd\xcc\x8c\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xcd\x88\xef\xbf\xbd */" },
#endif
		{ "ModuleRelativePath", "MyBTTask_RootPoint.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "NavMesh \xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd""e\xef\xbf\xbd\xcc\x8c\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xcd\x88\xef\xbf\xbd" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_RetryCountIfProjectionFails_MetaData[] = {
		{ "Category", "FindPoint" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/** \xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd""e\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbds\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xcc\x8d\xc4\x8e\xef\xbf\xbd\xef\xbf\xbds\xef\xbf\xbd\xef\xbf\xbd */" },
#endif
		{ "ModuleRelativePath", "MyBTTask_RootPoint.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd""e\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbds\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xcc\x8d\xc4\x8e\xef\xbf\xbd\xef\xbf\xbds\xef\xbf\xbd\xef\xbf\xbd" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_RetryExtentScale_MetaData[] = {
		{ "Category", "FindPoint" },
		{ "ClampMin", "1.0" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/** \xef\xbf\xbd\xc4\x8e\xef\xbf\xbd\xef\xbf\xbds\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xc6\x82\xc9\x8c\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xcd\x88\xcd\x82\xc9\x8a|\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd{\xef\xbf\xbd\xef\xbf\xbd */" },
#endif
		{ "ModuleRelativePath", "MyBTTask_RootPoint.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "\xef\xbf\xbd\xc4\x8e\xef\xbf\xbd\xef\xbf\xbds\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xc6\x82\xc9\x8c\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xcd\x88\xcd\x82\xc9\x8a|\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd{\xef\xbf\xbd\xef\xbf\xbd" },
#endif
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStructPropertyParams NewProp_PointIndexKey;
	static const UECodeGen_Private::FStructPropertyParams NewProp_ProjectSearchExtent;
	static const UECodeGen_Private::FIntPropertyParams NewProp_RetryCountIfProjectionFails;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_RetryExtentScale;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static UObject* (*const DependentSingletons[])();
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UMyBTTask_RootPoint>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UMyBTTask_RootPoint_Statics::NewProp_PointIndexKey = { "PointIndexKey", nullptr, (EPropertyFlags)0x0020080000000001, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UMyBTTask_RootPoint, PointIndexKey), Z_Construct_UScriptStruct_FBlackboardKeySelector, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_PointIndexKey_MetaData), NewProp_PointIndexKey_MetaData) }; // 3940742986
const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UMyBTTask_RootPoint_Statics::NewProp_ProjectSearchExtent = { "ProjectSearchExtent", nullptr, (EPropertyFlags)0x0020080000000001, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UMyBTTask_RootPoint, ProjectSearchExtent), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_ProjectSearchExtent_MetaData), NewProp_ProjectSearchExtent_MetaData) };
const UECodeGen_Private::FIntPropertyParams Z_Construct_UClass_UMyBTTask_RootPoint_Statics::NewProp_RetryCountIfProjectionFails = { "RetryCountIfProjectionFails", nullptr, (EPropertyFlags)0x0020080000000001, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UMyBTTask_RootPoint, RetryCountIfProjectionFails), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_RetryCountIfProjectionFails_MetaData), NewProp_RetryCountIfProjectionFails_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UMyBTTask_RootPoint_Statics::NewProp_RetryExtentScale = { "RetryExtentScale", nullptr, (EPropertyFlags)0x0020080000000001, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UMyBTTask_RootPoint, RetryExtentScale), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_RetryExtentScale_MetaData), NewProp_RetryExtentScale_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UMyBTTask_RootPoint_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UMyBTTask_RootPoint_Statics::NewProp_PointIndexKey,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UMyBTTask_RootPoint_Statics::NewProp_ProjectSearchExtent,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UMyBTTask_RootPoint_Statics::NewProp_RetryCountIfProjectionFails,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UMyBTTask_RootPoint_Statics::NewProp_RetryExtentScale,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UMyBTTask_RootPoint_Statics::PropPointers) < 2048);
UObject* (*const Z_Construct_UClass_UMyBTTask_RootPoint_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UBTTask_BlackboardBase,
	(UObject* (*)())Z_Construct_UPackage__Script_WayHome,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UMyBTTask_RootPoint_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_UMyBTTask_RootPoint_Statics::ClassParams = {
	&UMyBTTask_RootPoint::StaticClass,
	nullptr,
	&StaticCppClassTypeInfo,
	DependentSingletons,
	nullptr,
	Z_Construct_UClass_UMyBTTask_RootPoint_Statics::PropPointers,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	0,
	UE_ARRAY_COUNT(Z_Construct_UClass_UMyBTTask_RootPoint_Statics::PropPointers),
	0,
	0x001000A0u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UMyBTTask_RootPoint_Statics::Class_MetaDataParams), Z_Construct_UClass_UMyBTTask_RootPoint_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_UMyBTTask_RootPoint()
{
	if (!Z_Registration_Info_UClass_UMyBTTask_RootPoint.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UMyBTTask_RootPoint.OuterSingleton, Z_Construct_UClass_UMyBTTask_RootPoint_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_UMyBTTask_RootPoint.OuterSingleton;
}
template<> WAYHOME_API UClass* StaticClass<UMyBTTask_RootPoint>()
{
	return UMyBTTask_RootPoint::StaticClass();
}
DEFINE_VTABLE_PTR_HELPER_CTOR(UMyBTTask_RootPoint);
UMyBTTask_RootPoint::~UMyBTTask_RootPoint() {}
// End Class UMyBTTask_RootPoint

// Begin Registration
struct Z_CompiledInDeferFile_FID_240160_WayHome_Source_WayHome_MyBTTask_RootPoint_h_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_UMyBTTask_RootPoint, UMyBTTask_RootPoint::StaticClass, TEXT("UMyBTTask_RootPoint"), &Z_Registration_Info_UClass_UMyBTTask_RootPoint, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UMyBTTask_RootPoint), 2286454276U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_240160_WayHome_Source_WayHome_MyBTTask_RootPoint_h_870536944(TEXT("/Script/WayHome"),
	Z_CompiledInDeferFile_FID_240160_WayHome_Source_WayHome_MyBTTask_RootPoint_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_240160_WayHome_Source_WayHome_MyBTTask_RootPoint_h_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
