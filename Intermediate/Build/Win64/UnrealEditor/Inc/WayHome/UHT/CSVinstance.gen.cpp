// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "WayHome/CSVinstance.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeCSVinstance() {}

// Begin Cross Module References
ENGINE_API UClass* Z_Construct_UClass_UGameInstance();
UPackage* Z_Construct_UPackage__Script_WayHome();
WAYHOME_API UClass* Z_Construct_UClass_UCSVinstance();
WAYHOME_API UClass* Z_Construct_UClass_UCSVinstance_NoRegister();
// End Cross Module References

// Begin Class UCSVinstance
void UCSVinstance::StaticRegisterNativesUCSVinstance()
{
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UCSVinstance);
UClass* Z_Construct_UClass_UCSVinstance_NoRegister()
{
	return UCSVinstance::StaticClass();
}
struct Z_Construct_UClass_UCSVinstance_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n * \n */" },
#endif
		{ "IncludePath", "CSVinstance.h" },
		{ "ModuleRelativePath", "CSVinstance.h" },
	};
#endif // WITH_METADATA
	static UObject* (*const DependentSingletons[])();
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UCSVinstance>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
UObject* (*const Z_Construct_UClass_UCSVinstance_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UGameInstance,
	(UObject* (*)())Z_Construct_UPackage__Script_WayHome,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UCSVinstance_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_UCSVinstance_Statics::ClassParams = {
	&UCSVinstance::StaticClass,
	nullptr,
	&StaticCppClassTypeInfo,
	DependentSingletons,
	nullptr,
	nullptr,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	0,
	0,
	0,
	0x009000A8u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UCSVinstance_Statics::Class_MetaDataParams), Z_Construct_UClass_UCSVinstance_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_UCSVinstance()
{
	if (!Z_Registration_Info_UClass_UCSVinstance.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UCSVinstance.OuterSingleton, Z_Construct_UClass_UCSVinstance_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_UCSVinstance.OuterSingleton;
}
template<> WAYHOME_API UClass* StaticClass<UCSVinstance>()
{
	return UCSVinstance::StaticClass();
}
UCSVinstance::UCSVinstance(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
DEFINE_VTABLE_PTR_HELPER_CTOR(UCSVinstance);
UCSVinstance::~UCSVinstance() {}
// End Class UCSVinstance

// Begin Registration
struct Z_CompiledInDeferFile_FID_Users_Rihit_Desktop_UE5_5_WayHome_Source_WayHome_CSVinstance_h_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_UCSVinstance, UCSVinstance::StaticClass, TEXT("UCSVinstance"), &Z_Registration_Info_UClass_UCSVinstance, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UCSVinstance), 2648296819U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Users_Rihit_Desktop_UE5_5_WayHome_Source_WayHome_CSVinstance_h_2882376754(TEXT("/Script/WayHome"),
	Z_CompiledInDeferFile_FID_Users_Rihit_Desktop_UE5_5_WayHome_Source_WayHome_CSVinstance_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Users_Rihit_Desktop_UE5_5_WayHome_Source_WayHome_CSVinstance_h_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
