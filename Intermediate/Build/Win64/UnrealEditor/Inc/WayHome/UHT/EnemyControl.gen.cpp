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
UPackage* Z_Construct_UPackage__Script_WayHome();
WAYHOME_API UClass* Z_Construct_UClass_AEnemyControl();
WAYHOME_API UClass* Z_Construct_UClass_AEnemyControl_NoRegister();
// End Cross Module References

// Begin Class AEnemyControl
void AEnemyControl::StaticRegisterNativesAEnemyControl()
{
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
#endif // WITH_METADATA
	static UObject* (*const DependentSingletons[])();
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<AEnemyControl>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
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
	nullptr,
	nullptr,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	0,
	0,
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
		{ Z_Construct_UClass_AEnemyControl, AEnemyControl::StaticClass, TEXT("AEnemyControl"), &Z_Registration_Info_UClass_AEnemyControl, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(AEnemyControl), 2068774904U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Users_Rihit_Desktop_WayHome_5_5_Source_WayHome_EnemyControl_h_1383306554(TEXT("/Script/WayHome"),
	Z_CompiledInDeferFile_FID_Users_Rihit_Desktop_WayHome_5_5_Source_WayHome_EnemyControl_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Users_Rihit_Desktop_WayHome_5_5_Source_WayHome_EnemyControl_h_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
