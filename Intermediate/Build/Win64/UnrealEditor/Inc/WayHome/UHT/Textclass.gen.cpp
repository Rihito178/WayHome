// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "WayHome/Textclass.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeTextclass() {}

// Begin Cross Module References
ENGINE_API UClass* Z_Construct_UClass_AActor();
UPackage* Z_Construct_UPackage__Script_WayHome();
WAYHOME_API UClass* Z_Construct_UClass_ATextclass();
WAYHOME_API UClass* Z_Construct_UClass_ATextclass_NoRegister();
// End Cross Module References

// Begin Class ATextclass
void ATextclass::StaticRegisterNativesATextclass()
{
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(ATextclass);
UClass* Z_Construct_UClass_ATextclass_NoRegister()
{
	return ATextclass::StaticClass();
}
struct Z_Construct_UClass_ATextclass_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "IncludePath", "Textclass.h" },
		{ "ModuleRelativePath", "Textclass.h" },
	};
#endif // WITH_METADATA
	static UObject* (*const DependentSingletons[])();
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<ATextclass>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
UObject* (*const Z_Construct_UClass_ATextclass_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_AActor,
	(UObject* (*)())Z_Construct_UPackage__Script_WayHome,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_ATextclass_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_ATextclass_Statics::ClassParams = {
	&ATextclass::StaticClass,
	"Engine",
	&StaticCppClassTypeInfo,
	DependentSingletons,
	nullptr,
	nullptr,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	0,
	0,
	0,
	0x009000A4u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_ATextclass_Statics::Class_MetaDataParams), Z_Construct_UClass_ATextclass_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_ATextclass()
{
	if (!Z_Registration_Info_UClass_ATextclass.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_ATextclass.OuterSingleton, Z_Construct_UClass_ATextclass_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_ATextclass.OuterSingleton;
}
template<> WAYHOME_API UClass* StaticClass<ATextclass>()
{
	return ATextclass::StaticClass();
}
DEFINE_VTABLE_PTR_HELPER_CTOR(ATextclass);
ATextclass::~ATextclass() {}
// End Class ATextclass

// Begin Registration
struct Z_CompiledInDeferFile_FID_Users_Rihit_Desktop_WayHome_5_5_Source_WayHome_Textclass_h_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_ATextclass, ATextclass::StaticClass, TEXT("ATextclass"), &Z_Registration_Info_UClass_ATextclass, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(ATextclass), 2920451530U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Users_Rihit_Desktop_WayHome_5_5_Source_WayHome_Textclass_h_952050755(TEXT("/Script/WayHome"),
	Z_CompiledInDeferFile_FID_Users_Rihit_Desktop_WayHome_5_5_Source_WayHome_Textclass_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Users_Rihit_Desktop_WayHome_5_5_Source_WayHome_Textclass_h_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
