// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "WayHome/MyBTTask_RootPointIndex.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeMyBTTask_RootPointIndex() {}

// Begin Cross Module References
AIMODULE_API UClass* Z_Construct_UClass_UBTTask_BlackboardBase();
UPackage* Z_Construct_UPackage__Script_WayHome();
WAYHOME_API UClass* Z_Construct_UClass_UMyBTTask_RootPointIndex();
WAYHOME_API UClass* Z_Construct_UClass_UMyBTTask_RootPointIndex_NoRegister();
// End Cross Module References

// Begin Class UMyBTTask_RootPointIndex
void UMyBTTask_RootPointIndex::StaticRegisterNativesUMyBTTask_RootPointIndex()
{
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UMyBTTask_RootPointIndex);
UClass* Z_Construct_UClass_UMyBTTask_RootPointIndex_NoRegister()
{
	return UMyBTTask_RootPointIndex::StaticClass();
}
struct Z_Construct_UClass_UMyBTTask_RootPointIndex_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n * \xe5\xb7\xa1\xe5\x9b\x9e\xe3\x83\x9d\xe3\x82\xa4\xe3\x83\xb3\xe3\x83\x88\xe3\x81\xae\xe3\x82\xa4\xe3\x83\xb3\xe3\x83\x87\xe3\x83\x83\xe3\x82\xaf\xe3\x82\xb9\xef\xbc\x88""Blackboard \xe3\x81\xae Int \xe3\x82\xad\xe3\x83\xbc\xef\xbc\x89\xe3\x82\x92\xe6\x9b\xb4\xe6\x96\xb0\xe3\x81\x99\xe3\x82\x8b BT \xe3\x82\xbf\xe3\x82\xb9\xe3\x82\xaf\xe3\x80\x82\n * \xe3\x83\xbb""bDirectional=false: 0\xe2\x86\x92""1\xe2\x86\x92\xe2\x80\xa6\xe2\x86\x92N-1\xe2\x86\x92""0 \xe3\x81\xa8\xe5\xbe\xaa\xe7\x92\xb0\n * \xe3\x83\xbb""bDirectional=true : \xe7\xab\xaf\xe7\x82\xb9\xe3\x81\xa7\xe5\x8f\x8d\xe8\xbb\xa2\xef\xbc\x88""0\xe2\x87\x84\xe2\x80\xa6\xe2\x87\x84N-1\xef\xbc\x89\xe3\x81\x99\xe3\x82\x8b\xe5\xbe\x80\xe5\xbe\xa9\n *\n * \xe3\x81\x93\xe3\x81\xae\xe3\x82\xbf\xe3\x82\xb9\xe3\x82\xaf\xe3\x81\x8c\xe6\x93\x8d\xe4\xbd\x9c\xe3\x81\x99\xe3\x82\x8b Blackboard \xe3\x81\xae\xe3\x82\xad\xe3\x83\xbc\xe3\x81\xaf\xe3\x80\x8c""BlackboardKey\xe3\x80\x8d\xef\xbc\x88""BTTask_BlackboardBase\xe6\x8f\x90\xe4\xbe\x9b\xef\xbc\x89\xe3\x81\xa7\xe6\x8c\x87\xe5\xae\x9a\xe3\x81\x97\xe3\x81\xbe\xe3\x81\x99\xe3\x80\x82\n */" },
#endif
		{ "IncludePath", "MyBTTask_RootPointIndex.h" },
		{ "ModuleRelativePath", "MyBTTask_RootPointIndex.h" },
		{ "ObjectInitializerConstructorDeclared", "" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "\xe5\xb7\xa1\xe5\x9b\x9e\xe3\x83\x9d\xe3\x82\xa4\xe3\x83\xb3\xe3\x83\x88\xe3\x81\xae\xe3\x82\xa4\xe3\x83\xb3\xe3\x83\x87\xe3\x83\x83\xe3\x82\xaf\xe3\x82\xb9\xef\xbc\x88""Blackboard \xe3\x81\xae Int \xe3\x82\xad\xe3\x83\xbc\xef\xbc\x89\xe3\x82\x92\xe6\x9b\xb4\xe6\x96\xb0\xe3\x81\x99\xe3\x82\x8b BT \xe3\x82\xbf\xe3\x82\xb9\xe3\x82\xaf\xe3\x80\x82\n\xe3\x83\xbb""bDirectional=false: 0\xe2\x86\x92""1\xe2\x86\x92\xe2\x80\xa6\xe2\x86\x92N-1\xe2\x86\x92""0 \xe3\x81\xa8\xe5\xbe\xaa\xe7\x92\xb0\n\xe3\x83\xbb""bDirectional=true : \xe7\xab\xaf\xe7\x82\xb9\xe3\x81\xa7\xe5\x8f\x8d\xe8\xbb\xa2\xef\xbc\x88""0\xe2\x87\x84\xe2\x80\xa6\xe2\x87\x84N-1\xef\xbc\x89\xe3\x81\x99\xe3\x82\x8b\xe5\xbe\x80\xe5\xbe\xa9\n\n\xe3\x81\x93\xe3\x81\xae\xe3\x82\xbf\xe3\x82\xb9\xe3\x82\xaf\xe3\x81\x8c\xe6\x93\x8d\xe4\xbd\x9c\xe3\x81\x99\xe3\x82\x8b Blackboard \xe3\x81\xae\xe3\x82\xad\xe3\x83\xbc\xe3\x81\xaf\xe3\x80\x8c""BlackboardKey\xe3\x80\x8d\xef\xbc\x88""BTTask_BlackboardBase\xe6\x8f\x90\xe4\xbe\x9b\xef\xbc\x89\xe3\x81\xa7\xe6\x8c\x87\xe5\xae\x9a\xe3\x81\x97\xe3\x81\xbe\xe3\x81\x99\xe3\x80\x82" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bDirectional_MetaData[] = {
		{ "Category", "AI" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/** \xe7\xab\xaf\xe7\x82\xb9\xe3\x81\xa7\xe5\x8f\x8d\xe8\xbb\xa2\xe3\x81\x99\xe3\x82\x8b\xe5\xbe\x80\xe5\xbe\xa9\xe3\x83\xa2\xe3\x83\xbc\xe3\x83\x89\xef\xbc\x88true \xe3\x81\xa7\xe5\xbe\x80\xe5\xbe\xa9 / false \xe3\x81\xa7\xe5\xb8\xb8\xe3\x81\xab\xe5\x89\x8d\xe9\x80\xb2\xe5\xbe\xaa\xe7\x92\xb0\xef\xbc\x89 */" },
#endif
		{ "ModuleRelativePath", "MyBTTask_RootPointIndex.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "\xe7\xab\xaf\xe7\x82\xb9\xe3\x81\xa7\xe5\x8f\x8d\xe8\xbb\xa2\xe3\x81\x99\xe3\x82\x8b\xe5\xbe\x80\xe5\xbe\xa9\xe3\x83\xa2\xe3\x83\xbc\xe3\x83\x89\xef\xbc\x88true \xe3\x81\xa7\xe5\xbe\x80\xe5\xbe\xa9 / false \xe3\x81\xa7\xe5\xb8\xb8\xe3\x81\xab\xe5\x89\x8d\xe9\x80\xb2\xe5\xbe\xaa\xe7\x92\xb0\xef\xbc\x89" },
#endif
	};
#endif // WITH_METADATA
	static void NewProp_bDirectional_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bDirectional;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static UObject* (*const DependentSingletons[])();
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UMyBTTask_RootPointIndex>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
void Z_Construct_UClass_UMyBTTask_RootPointIndex_Statics::NewProp_bDirectional_SetBit(void* Obj)
{
	((UMyBTTask_RootPointIndex*)Obj)->bDirectional = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UMyBTTask_RootPointIndex_Statics::NewProp_bDirectional = { "bDirectional", nullptr, (EPropertyFlags)0x0020080000000001, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(UMyBTTask_RootPointIndex), &Z_Construct_UClass_UMyBTTask_RootPointIndex_Statics::NewProp_bDirectional_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bDirectional_MetaData), NewProp_bDirectional_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UMyBTTask_RootPointIndex_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UMyBTTask_RootPointIndex_Statics::NewProp_bDirectional,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UMyBTTask_RootPointIndex_Statics::PropPointers) < 2048);
UObject* (*const Z_Construct_UClass_UMyBTTask_RootPointIndex_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UBTTask_BlackboardBase,
	(UObject* (*)())Z_Construct_UPackage__Script_WayHome,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UMyBTTask_RootPointIndex_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_UMyBTTask_RootPointIndex_Statics::ClassParams = {
	&UMyBTTask_RootPointIndex::StaticClass,
	nullptr,
	&StaticCppClassTypeInfo,
	DependentSingletons,
	nullptr,
	Z_Construct_UClass_UMyBTTask_RootPointIndex_Statics::PropPointers,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	0,
	UE_ARRAY_COUNT(Z_Construct_UClass_UMyBTTask_RootPointIndex_Statics::PropPointers),
	0,
	0x001000A0u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UMyBTTask_RootPointIndex_Statics::Class_MetaDataParams), Z_Construct_UClass_UMyBTTask_RootPointIndex_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_UMyBTTask_RootPointIndex()
{
	if (!Z_Registration_Info_UClass_UMyBTTask_RootPointIndex.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UMyBTTask_RootPointIndex.OuterSingleton, Z_Construct_UClass_UMyBTTask_RootPointIndex_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_UMyBTTask_RootPointIndex.OuterSingleton;
}
template<> WAYHOME_API UClass* StaticClass<UMyBTTask_RootPointIndex>()
{
	return UMyBTTask_RootPointIndex::StaticClass();
}
DEFINE_VTABLE_PTR_HELPER_CTOR(UMyBTTask_RootPointIndex);
UMyBTTask_RootPointIndex::~UMyBTTask_RootPointIndex() {}
// End Class UMyBTTask_RootPointIndex

// Begin Registration
struct Z_CompiledInDeferFile_FID_Users_Rihit_Desktop_WayHome_5_5_Source_WayHome_MyBTTask_RootPointIndex_h_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_UMyBTTask_RootPointIndex, UMyBTTask_RootPointIndex::StaticClass, TEXT("UMyBTTask_RootPointIndex"), &Z_Registration_Info_UClass_UMyBTTask_RootPointIndex, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UMyBTTask_RootPointIndex), 2121706610U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Users_Rihit_Desktop_WayHome_5_5_Source_WayHome_MyBTTask_RootPointIndex_h_428268771(TEXT("/Script/WayHome"),
	Z_CompiledInDeferFile_FID_Users_Rihit_Desktop_WayHome_5_5_Source_WayHome_MyBTTask_RootPointIndex_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Users_Rihit_Desktop_WayHome_5_5_Source_WayHome_MyBTTask_RootPointIndex_h_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
