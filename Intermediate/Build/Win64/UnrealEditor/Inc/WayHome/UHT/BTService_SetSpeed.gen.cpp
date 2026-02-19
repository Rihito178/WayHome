// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "WayHome/BTService_SetSpeed.h"
#include "Runtime/AIModule/Classes/BehaviorTree/BehaviorTreeTypes.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeBTService_SetSpeed() {}

// Begin Cross Module References
AIMODULE_API UClass* Z_Construct_UClass_UBTService();
AIMODULE_API UScriptStruct* Z_Construct_UScriptStruct_FBlackboardKeySelector();
UPackage* Z_Construct_UPackage__Script_WayHome();
WAYHOME_API UClass* Z_Construct_UClass_UBTService_SetSpeed();
WAYHOME_API UClass* Z_Construct_UClass_UBTService_SetSpeed_NoRegister();
// End Cross Module References

// Begin Class UBTService_SetSpeed
void UBTService_SetSpeed::StaticRegisterNativesUBTService_SetSpeed()
{
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UBTService_SetSpeed);
UClass* Z_Construct_UClass_UBTService_SetSpeed_NoRegister()
{
	return UBTService_SetSpeed::StaticClass();
}
struct Z_Construct_UClass_UBTService_SetSpeed_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "IncludePath", "BTService_SetSpeed.h" },
		{ "ModuleRelativePath", "BTService_SetSpeed.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_WalkSpeed_MetaData[] = {
		{ "Category", "Speed" },
		{ "ModuleRelativePath", "BTService_SetSpeed.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_RunSpeed_MetaData[] = {
		{ "Category", "Speed" },
		{ "ModuleRelativePath", "BTService_SetSpeed.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_TargetKey_MetaData[] = {
		{ "Category", "Speed" },
		{ "ModuleRelativePath", "BTService_SetSpeed.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FFloatPropertyParams NewProp_WalkSpeed;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_RunSpeed;
	static const UECodeGen_Private::FStructPropertyParams NewProp_TargetKey;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static UObject* (*const DependentSingletons[])();
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UBTService_SetSpeed>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UBTService_SetSpeed_Statics::NewProp_WalkSpeed = { "WalkSpeed", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UBTService_SetSpeed, WalkSpeed), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_WalkSpeed_MetaData), NewProp_WalkSpeed_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UBTService_SetSpeed_Statics::NewProp_RunSpeed = { "RunSpeed", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UBTService_SetSpeed, RunSpeed), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_RunSpeed_MetaData), NewProp_RunSpeed_MetaData) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UBTService_SetSpeed_Statics::NewProp_TargetKey = { "TargetKey", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UBTService_SetSpeed, TargetKey), Z_Construct_UScriptStruct_FBlackboardKeySelector, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_TargetKey_MetaData), NewProp_TargetKey_MetaData) }; // 3940742986
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UBTService_SetSpeed_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UBTService_SetSpeed_Statics::NewProp_WalkSpeed,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UBTService_SetSpeed_Statics::NewProp_RunSpeed,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UBTService_SetSpeed_Statics::NewProp_TargetKey,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UBTService_SetSpeed_Statics::PropPointers) < 2048);
UObject* (*const Z_Construct_UClass_UBTService_SetSpeed_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UBTService,
	(UObject* (*)())Z_Construct_UPackage__Script_WayHome,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UBTService_SetSpeed_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_UBTService_SetSpeed_Statics::ClassParams = {
	&UBTService_SetSpeed::StaticClass,
	nullptr,
	&StaticCppClassTypeInfo,
	DependentSingletons,
	nullptr,
	Z_Construct_UClass_UBTService_SetSpeed_Statics::PropPointers,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	0,
	UE_ARRAY_COUNT(Z_Construct_UClass_UBTService_SetSpeed_Statics::PropPointers),
	0,
	0x001000A0u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UBTService_SetSpeed_Statics::Class_MetaDataParams), Z_Construct_UClass_UBTService_SetSpeed_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_UBTService_SetSpeed()
{
	if (!Z_Registration_Info_UClass_UBTService_SetSpeed.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UBTService_SetSpeed.OuterSingleton, Z_Construct_UClass_UBTService_SetSpeed_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_UBTService_SetSpeed.OuterSingleton;
}
template<> WAYHOME_API UClass* StaticClass<UBTService_SetSpeed>()
{
	return UBTService_SetSpeed::StaticClass();
}
DEFINE_VTABLE_PTR_HELPER_CTOR(UBTService_SetSpeed);
UBTService_SetSpeed::~UBTService_SetSpeed() {}
// End Class UBTService_SetSpeed

// Begin Registration
struct Z_CompiledInDeferFile_FID_Users_Rihit_Desktop_WayHome_5_5_Source_WayHome_BTService_SetSpeed_h_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_UBTService_SetSpeed, UBTService_SetSpeed::StaticClass, TEXT("UBTService_SetSpeed"), &Z_Registration_Info_UClass_UBTService_SetSpeed, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UBTService_SetSpeed), 3608179735U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Users_Rihit_Desktop_WayHome_5_5_Source_WayHome_BTService_SetSpeed_h_1281631520(TEXT("/Script/WayHome"),
	Z_CompiledInDeferFile_FID_Users_Rihit_Desktop_WayHome_5_5_Source_WayHome_BTService_SetSpeed_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Users_Rihit_Desktop_WayHome_5_5_Source_WayHome_BTService_SetSpeed_h_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
