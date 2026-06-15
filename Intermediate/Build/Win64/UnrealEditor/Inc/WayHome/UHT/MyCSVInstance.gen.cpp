// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "WayHome/MyCSVInstance.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeMyCSVInstance() {}

// Begin Cross Module References
ENGINE_API UClass* Z_Construct_UClass_UGameInstance();
UPackage* Z_Construct_UPackage__Script_WayHome();
WAYHOME_API UClass* Z_Construct_UClass_UMyCSVInstance();
WAYHOME_API UClass* Z_Construct_UClass_UMyCSVInstance_NoRegister();
// End Cross Module References

// Begin Class UMyCSVInstance Function GetDialogue
struct Z_Construct_UFunction_UMyCSVInstance_GetDialogue_Statics
{
	struct MyCSVInstance_eventGetDialogue_Parms
	{
		FString FilePath;
		TArray<FString> ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
#if !UE_BUILD_SHIPPING
		{ "Comment", "// \xe2\x9c\x85 CSV\xe3\x83\x91\xe3\x82\xb9\xe3\x82\x92\xe5\xbc\x95\xe6\x95\xb0\xe3\x81\xa7\xe5\x8f\x97\xe3\x81\x91\xe5\x8f\x96\xe3\x82\x8b\n" },
#endif
		{ "ModuleRelativePath", "MyCSVInstance.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "\xe2\x9c\x85 CSV\xe3\x83\x91\xe3\x82\xb9\xe3\x82\x92\xe5\xbc\x95\xe6\x95\xb0\xe3\x81\xa7\xe5\x8f\x97\xe3\x81\x91\xe5\x8f\x96\xe3\x82\x8b" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_FilePath_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStrPropertyParams NewProp_FilePath;
	static const UECodeGen_Private::FStrPropertyParams NewProp_ReturnValue_Inner;
	static const UECodeGen_Private::FArrayPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UMyCSVInstance_GetDialogue_Statics::NewProp_FilePath = { "FilePath", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(MyCSVInstance_eventGetDialogue_Parms, FilePath), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_FilePath_MetaData), NewProp_FilePath_MetaData) };
const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UMyCSVInstance_GetDialogue_Statics::NewProp_ReturnValue_Inner = { "ReturnValue", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FArrayPropertyParams Z_Construct_UFunction_UMyCSVInstance_GetDialogue_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(MyCSVInstance_eventGetDialogue_Parms, ReturnValue), EArrayPropertyFlags::None, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UMyCSVInstance_GetDialogue_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UMyCSVInstance_GetDialogue_Statics::NewProp_FilePath,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UMyCSVInstance_GetDialogue_Statics::NewProp_ReturnValue_Inner,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UMyCSVInstance_GetDialogue_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UMyCSVInstance_GetDialogue_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UMyCSVInstance_GetDialogue_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UMyCSVInstance, nullptr, "GetDialogue", nullptr, nullptr, Z_Construct_UFunction_UMyCSVInstance_GetDialogue_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UMyCSVInstance_GetDialogue_Statics::PropPointers), sizeof(Z_Construct_UFunction_UMyCSVInstance_GetDialogue_Statics::MyCSVInstance_eventGetDialogue_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UMyCSVInstance_GetDialogue_Statics::Function_MetaDataParams), Z_Construct_UFunction_UMyCSVInstance_GetDialogue_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UMyCSVInstance_GetDialogue_Statics::MyCSVInstance_eventGetDialogue_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UMyCSVInstance_GetDialogue()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UMyCSVInstance_GetDialogue_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UMyCSVInstance::execGetDialogue)
{
	P_GET_PROPERTY(FStrProperty,Z_Param_FilePath);
	P_FINISH;
	P_NATIVE_BEGIN;
	*(TArray<FString>*)Z_Param__Result=P_THIS->GetDialogue(Z_Param_FilePath);
	P_NATIVE_END;
}
// End Class UMyCSVInstance Function GetDialogue

// Begin Class UMyCSVInstance
void UMyCSVInstance::StaticRegisterNativesUMyCSVInstance()
{
	UClass* Class = UMyCSVInstance::StaticClass();
	static const FNameNativePtrPair Funcs[] = {
		{ "GetDialogue", &UMyCSVInstance::execGetDialogue },
	};
	FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UMyCSVInstance);
UClass* Z_Construct_UClass_UMyCSVInstance_NoRegister()
{
	return UMyCSVInstance::StaticClass();
}
struct Z_Construct_UClass_UMyCSVInstance_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "IncludePath", "MyCSVInstance.h" },
		{ "ModuleRelativePath", "MyCSVInstance.h" },
	};
#endif // WITH_METADATA
	static UObject* (*const DependentSingletons[])();
	static constexpr FClassFunctionLinkInfo FuncInfo[] = {
		{ &Z_Construct_UFunction_UMyCSVInstance_GetDialogue, "GetDialogue" }, // 3406846882
	};
	static_assert(UE_ARRAY_COUNT(FuncInfo) < 2048);
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UMyCSVInstance>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
UObject* (*const Z_Construct_UClass_UMyCSVInstance_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UGameInstance,
	(UObject* (*)())Z_Construct_UPackage__Script_WayHome,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UMyCSVInstance_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_UMyCSVInstance_Statics::ClassParams = {
	&UMyCSVInstance::StaticClass,
	nullptr,
	&StaticCppClassTypeInfo,
	DependentSingletons,
	FuncInfo,
	nullptr,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	UE_ARRAY_COUNT(FuncInfo),
	0,
	0,
	0x009000A8u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UMyCSVInstance_Statics::Class_MetaDataParams), Z_Construct_UClass_UMyCSVInstance_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_UMyCSVInstance()
{
	if (!Z_Registration_Info_UClass_UMyCSVInstance.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UMyCSVInstance.OuterSingleton, Z_Construct_UClass_UMyCSVInstance_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_UMyCSVInstance.OuterSingleton;
}
template<> WAYHOME_API UClass* StaticClass<UMyCSVInstance>()
{
	return UMyCSVInstance::StaticClass();
}
UMyCSVInstance::UMyCSVInstance(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
DEFINE_VTABLE_PTR_HELPER_CTOR(UMyCSVInstance);
UMyCSVInstance::~UMyCSVInstance() {}
// End Class UMyCSVInstance

// Begin Registration
struct Z_CompiledInDeferFile_FID_Users_Rihit_Desktop_UE5_5_WayHome_Source_WayHome_MyCSVInstance_h_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_UMyCSVInstance, UMyCSVInstance::StaticClass, TEXT("UMyCSVInstance"), &Z_Registration_Info_UClass_UMyCSVInstance, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UMyCSVInstance), 1166828140U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Users_Rihit_Desktop_UE5_5_WayHome_Source_WayHome_MyCSVInstance_h_254109291(TEXT("/Script/WayHome"),
	Z_CompiledInDeferFile_FID_Users_Rihit_Desktop_UE5_5_WayHome_Source_WayHome_MyCSVInstance_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Users_Rihit_Desktop_UE5_5_WayHome_Source_WayHome_MyCSVInstance_h_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
