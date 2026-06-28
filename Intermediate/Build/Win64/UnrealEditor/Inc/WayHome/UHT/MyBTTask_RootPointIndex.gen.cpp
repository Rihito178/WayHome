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
		{ "Comment", "/**\n * Blackboard \xe3\x81\xae Int\xef\xbc\x88Point_Index\xef\xbc\x89\xe3\x82\x92\xe6\x9b\xb4\xe6\x96\xb0\xe3\x81\x99\xe3\x82\x8b BT \xe3\x82\xbf\xe3\x82\xb9\xe3\x82\xaf\xe3\x80\x82\n * - bDirectional=false : 0 \xe2\x86\x92 1 \xe2\x86\x92 \xe2\x80\xa6 \xe2\x86\x92 N-1 \xe2\x86\x92 0 \xe3\x81\xae\xe5\xbe\xaa\xe7\x92\xb0\n * - bDirectional=true  : \xe7\xab\xaf\xe7\x82\xb9\xe3\x81\xa7\xe5\x8f\x8d\xe8\xbb\xa2\xef\xbc\x88""0 \xe2\x87\x84 \xe2\x80\xa6 \xe2\x87\x84 N-1\xef\xbc\x89\xe3\x81\xae\xe5\xbe\x80\xe5\xbe\xa9\n *\n * \xe8\xa8\xad\xe5\xae\x9a\xef\xbc\x88""BT\xe5\x81\xb4\xef\xbc\x89\xef\xbc\x9a\n *   BlackboardKey\xef\xbc\x88Int\xef\xbc\x89\xe2\x86\x92 Point_Index\n * \xe4\xbd\xbf\xe3\x81\x84\xe6\x96\xb9\xef\xbc\x88""BT\xef\xbc\x89\xef\xbc\x9a\n *   Find\xef\xbc\x88Index\xe2\x86\x92Point_Location\xef\xbc\x89\xe2\x86\x92 MoveTo(Point_Location) \xe2\x86\x92 \xe6\x9c\xac\xe3\x82\xbf\xe3\x82\xb9\xe3\x82\xaf \xe2\x86\x92 Wait \xe2\x80\xa6\xe3\x82\x92\xe3\x83\xab\xe3\x83\xbc\xe3\x83\x97\n */" },
#endif
		{ "IncludePath", "MyBTTask_RootPointIndex.h" },
		{ "ModuleRelativePath", "MyBTTask_RootPointIndex.h" },
		{ "ObjectInitializerConstructorDeclared", "" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Blackboard \xe3\x81\xae Int\xef\xbc\x88Point_Index\xef\xbc\x89\xe3\x82\x92\xe6\x9b\xb4\xe6\x96\xb0\xe3\x81\x99\xe3\x82\x8b BT \xe3\x82\xbf\xe3\x82\xb9\xe3\x82\xaf\xe3\x80\x82\n- bDirectional=false : 0 \xe2\x86\x92 1 \xe2\x86\x92 \xe2\x80\xa6 \xe2\x86\x92 N-1 \xe2\x86\x92 0 \xe3\x81\xae\xe5\xbe\xaa\xe7\x92\xb0\n- bDirectional=true  : \xe7\xab\xaf\xe7\x82\xb9\xe3\x81\xa7\xe5\x8f\x8d\xe8\xbb\xa2\xef\xbc\x88""0 \xe2\x87\x84 \xe2\x80\xa6 \xe2\x87\x84 N-1\xef\xbc\x89\xe3\x81\xae\xe5\xbe\x80\xe5\xbe\xa9\n\n\xe8\xa8\xad\xe5\xae\x9a\xef\xbc\x88""BT\xe5\x81\xb4\xef\xbc\x89\xef\xbc\x9a\n  BlackboardKey\xef\xbc\x88Int\xef\xbc\x89\xe2\x86\x92 Point_Index\n\xe4\xbd\xbf\xe3\x81\x84\xe6\x96\xb9\xef\xbc\x88""BT\xef\xbc\x89\xef\xbc\x9a\n  Find\xef\xbc\x88Index\xe2\x86\x92Point_Location\xef\xbc\x89\xe2\x86\x92 MoveTo(Point_Location) \xe2\x86\x92 \xe6\x9c\xac\xe3\x82\xbf\xe3\x82\xb9\xe3\x82\xaf \xe2\x86\x92 Wait \xe2\x80\xa6\xe3\x82\x92\xe3\x83\xab\xe3\x83\xbc\xe3\x83\x97" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bDirectional_MetaData[] = {
		{ "Category", "AI" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "//true:\xe5\xbe\x80\xe5\xbe\xa9/false:\xe5\xb8\xb8\xe3\x81\xab\xe5\x89\x8d\xe9\x80\xb2\n" },
#endif
		{ "ModuleRelativePath", "MyBTTask_RootPointIndex.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "true:\xe5\xbe\x80\xe5\xbe\xa9/false:\xe5\xb8\xb8\xe3\x81\xab\xe5\x89\x8d\xe9\x80\xb2" },
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
struct Z_CompiledInDeferFile_FID_Users_Rihit_Desktop_UE5_5_WayHome_Source_WayHome_MyBTTask_RootPointIndex_h_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_UMyBTTask_RootPointIndex, UMyBTTask_RootPointIndex::StaticClass, TEXT("UMyBTTask_RootPointIndex"), &Z_Registration_Info_UClass_UMyBTTask_RootPointIndex, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UMyBTTask_RootPointIndex), 1651485531U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Users_Rihit_Desktop_UE5_5_WayHome_Source_WayHome_MyBTTask_RootPointIndex_h_757163166(TEXT("/Script/WayHome"),
	Z_CompiledInDeferFile_FID_Users_Rihit_Desktop_UE5_5_WayHome_Source_WayHome_MyBTTask_RootPointIndex_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Users_Rihit_Desktop_UE5_5_WayHome_Source_WayHome_MyBTTask_RootPointIndex_h_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
