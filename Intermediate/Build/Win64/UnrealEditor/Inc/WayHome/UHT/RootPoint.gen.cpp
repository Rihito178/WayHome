// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "WayHome/RootPoint.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeRootPoint() {}

// Begin Cross Module References
COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FVector();
ENGINE_API UClass* Z_Construct_UClass_AActor();
UPackage* Z_Construct_UPackage__Script_WayHome();
WAYHOME_API UClass* Z_Construct_UClass_ARootPoint();
WAYHOME_API UClass* Z_Construct_UClass_ARootPoint_NoRegister();
// End Cross Module References

// Begin Class ARootPoint Function GetNearestRoamingPointWorld
struct Z_Construct_UFunction_ARootPoint_GetNearestRoamingPointWorld_Statics
{
	struct RootPoint_eventGetNearestRoamingPointWorld_Parms
	{
		FVector FromLocation;
		FVector ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "AI|Roaming" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "//\xef\xbf\xbd\xc5\x82\xef\xbf\xbd\xef\xbf\xbd\xdf\x82\xef\xbf\xbd\xef\xbf\xbd_\n" },
#endif
		{ "ModuleRelativePath", "RootPoint.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "\xef\xbf\xbd\xc5\x82\xef\xbf\xbd\xef\xbf\xbd\xdf\x82\xef\xbf\xbd\xef\xbf\xbd_" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_FromLocation_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStructPropertyParams NewProp_FromLocation;
	static const UECodeGen_Private::FStructPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_ARootPoint_GetNearestRoamingPointWorld_Statics::NewProp_FromLocation = { "FromLocation", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(RootPoint_eventGetNearestRoamingPointWorld_Parms, FromLocation), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_FromLocation_MetaData), NewProp_FromLocation_MetaData) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_ARootPoint_GetNearestRoamingPointWorld_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(RootPoint_eventGetNearestRoamingPointWorld_Parms, ReturnValue), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_ARootPoint_GetNearestRoamingPointWorld_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ARootPoint_GetNearestRoamingPointWorld_Statics::NewProp_FromLocation,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ARootPoint_GetNearestRoamingPointWorld_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_ARootPoint_GetNearestRoamingPointWorld_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_ARootPoint_GetNearestRoamingPointWorld_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ARootPoint, nullptr, "GetNearestRoamingPointWorld", nullptr, nullptr, Z_Construct_UFunction_ARootPoint_GetNearestRoamingPointWorld_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_ARootPoint_GetNearestRoamingPointWorld_Statics::PropPointers), sizeof(Z_Construct_UFunction_ARootPoint_GetNearestRoamingPointWorld_Statics::RootPoint_eventGetNearestRoamingPointWorld_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54C20401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_ARootPoint_GetNearestRoamingPointWorld_Statics::Function_MetaDataParams), Z_Construct_UFunction_ARootPoint_GetNearestRoamingPointWorld_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_ARootPoint_GetNearestRoamingPointWorld_Statics::RootPoint_eventGetNearestRoamingPointWorld_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_ARootPoint_GetNearestRoamingPointWorld()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_ARootPoint_GetNearestRoamingPointWorld_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(ARootPoint::execGetNearestRoamingPointWorld)
{
	P_GET_STRUCT_REF(FVector,Z_Param_Out_FromLocation);
	P_FINISH;
	P_NATIVE_BEGIN;
	*(FVector*)Z_Param__Result=P_THIS->GetNearestRoamingPointWorld(Z_Param_Out_FromLocation);
	P_NATIVE_END;
}
// End Class ARootPoint Function GetNearestRoamingPointWorld

// Begin Class ARootPoint Function GetRandomRoamingPointWorld
struct Z_Construct_UFunction_ARootPoint_GetRandomRoamingPointWorld_Statics
{
	struct RootPoint_eventGetRandomRoamingPointWorld_Parms
	{
		FVector ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "AI|Roaming" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "// \xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd_\xef\xbf\xbd\xef\xbf\xbd\n" },
#endif
		{ "ModuleRelativePath", "RootPoint.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd_\xef\xbf\xbd\xef\xbf\xbd" },
#endif
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStructPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_ARootPoint_GetRandomRoamingPointWorld_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(RootPoint_eventGetRandomRoamingPointWorld_Parms, ReturnValue), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_ARootPoint_GetRandomRoamingPointWorld_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ARootPoint_GetRandomRoamingPointWorld_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_ARootPoint_GetRandomRoamingPointWorld_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_ARootPoint_GetRandomRoamingPointWorld_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ARootPoint, nullptr, "GetRandomRoamingPointWorld", nullptr, nullptr, Z_Construct_UFunction_ARootPoint_GetRandomRoamingPointWorld_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_ARootPoint_GetRandomRoamingPointWorld_Statics::PropPointers), sizeof(Z_Construct_UFunction_ARootPoint_GetRandomRoamingPointWorld_Statics::RootPoint_eventGetRandomRoamingPointWorld_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54820401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_ARootPoint_GetRandomRoamingPointWorld_Statics::Function_MetaDataParams), Z_Construct_UFunction_ARootPoint_GetRandomRoamingPointWorld_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_ARootPoint_GetRandomRoamingPointWorld_Statics::RootPoint_eventGetRandomRoamingPointWorld_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_ARootPoint_GetRandomRoamingPointWorld()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_ARootPoint_GetRandomRoamingPointWorld_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(ARootPoint::execGetRandomRoamingPointWorld)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	*(FVector*)Z_Param__Result=P_THIS->GetRandomRoamingPointWorld();
	P_NATIVE_END;
}
// End Class ARootPoint Function GetRandomRoamingPointWorld

// Begin Class ARootPoint Function GetRoamingPoint
struct Z_Construct_UFunction_ARootPoint_GetRoamingPoint_Statics
{
	struct RootPoint_eventGetRoamingPoint_Parms
	{
		int32 Index;
		FVector ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "AI|Roaming" },
		{ "DisplayName", "GetRoamingPoint (World)" },
		{ "ModuleRelativePath", "RootPoint.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FIntPropertyParams NewProp_Index;
	static const UECodeGen_Private::FStructPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_ARootPoint_GetRoamingPoint_Statics::NewProp_Index = { "Index", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(RootPoint_eventGetRoamingPoint_Parms, Index), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_ARootPoint_GetRoamingPoint_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(RootPoint_eventGetRoamingPoint_Parms, ReturnValue), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_ARootPoint_GetRoamingPoint_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ARootPoint_GetRoamingPoint_Statics::NewProp_Index,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ARootPoint_GetRoamingPoint_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_ARootPoint_GetRoamingPoint_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_ARootPoint_GetRoamingPoint_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ARootPoint, nullptr, "GetRoamingPoint", nullptr, nullptr, Z_Construct_UFunction_ARootPoint_GetRoamingPoint_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_ARootPoint_GetRoamingPoint_Statics::PropPointers), sizeof(Z_Construct_UFunction_ARootPoint_GetRoamingPoint_Statics::RootPoint_eventGetRoamingPoint_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54820401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_ARootPoint_GetRoamingPoint_Statics::Function_MetaDataParams), Z_Construct_UFunction_ARootPoint_GetRoamingPoint_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_ARootPoint_GetRoamingPoint_Statics::RootPoint_eventGetRoamingPoint_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_ARootPoint_GetRoamingPoint()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_ARootPoint_GetRoamingPoint_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(ARootPoint::execGetRoamingPoint)
{
	P_GET_PROPERTY(FIntProperty,Z_Param_Index);
	P_FINISH;
	P_NATIVE_BEGIN;
	*(FVector*)Z_Param__Result=P_THIS->GetRoamingPoint(Z_Param_Index);
	P_NATIVE_END;
}
// End Class ARootPoint Function GetRoamingPoint

// Begin Class ARootPoint Function GetRoamingPointLocal
struct Z_Construct_UFunction_ARootPoint_GetRoamingPointLocal_Statics
{
	struct RootPoint_eventGetRoamingPointLocal_Parms
	{
		int32 Index;
		FVector ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "AI|Roaming" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "//\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd[\xef\xbf\xbdJ\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbdW\xef\xbf\xbd\xc5\x8e\xe6\x93\xbe\n" },
#endif
		{ "ModuleRelativePath", "RootPoint.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd[\xef\xbf\xbdJ\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbdW\xef\xbf\xbd\xc5\x8e\xe6\x93\xbe" },
#endif
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FIntPropertyParams NewProp_Index;
	static const UECodeGen_Private::FStructPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_ARootPoint_GetRoamingPointLocal_Statics::NewProp_Index = { "Index", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(RootPoint_eventGetRoamingPointLocal_Parms, Index), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_ARootPoint_GetRoamingPointLocal_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(RootPoint_eventGetRoamingPointLocal_Parms, ReturnValue), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_ARootPoint_GetRoamingPointLocal_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ARootPoint_GetRoamingPointLocal_Statics::NewProp_Index,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ARootPoint_GetRoamingPointLocal_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_ARootPoint_GetRoamingPointLocal_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_ARootPoint_GetRoamingPointLocal_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ARootPoint, nullptr, "GetRoamingPointLocal", nullptr, nullptr, Z_Construct_UFunction_ARootPoint_GetRoamingPointLocal_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_ARootPoint_GetRoamingPointLocal_Statics::PropPointers), sizeof(Z_Construct_UFunction_ARootPoint_GetRoamingPointLocal_Statics::RootPoint_eventGetRoamingPointLocal_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54820401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_ARootPoint_GetRoamingPointLocal_Statics::Function_MetaDataParams), Z_Construct_UFunction_ARootPoint_GetRoamingPointLocal_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_ARootPoint_GetRoamingPointLocal_Statics::RootPoint_eventGetRoamingPointLocal_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_ARootPoint_GetRoamingPointLocal()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_ARootPoint_GetRoamingPointLocal_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(ARootPoint::execGetRoamingPointLocal)
{
	P_GET_PROPERTY(FIntProperty,Z_Param_Index);
	P_FINISH;
	P_NATIVE_BEGIN;
	*(FVector*)Z_Param__Result=P_THIS->GetRoamingPointLocal(Z_Param_Index);
	P_NATIVE_END;
}
// End Class ARootPoint Function GetRoamingPointLocal

// Begin Class ARootPoint Function GetRoamingPointWorld
struct Z_Construct_UFunction_ARootPoint_GetRoamingPointWorld_Statics
{
	struct RootPoint_eventGetRoamingPointWorld_Parms
	{
		int32 Index;
		FVector ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "AI|Roaming" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "//\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd[\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbdh\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbdW\xef\xbf\xbd\xc5\x8e\xe6\x93\xbe\n" },
#endif
		{ "ModuleRelativePath", "RootPoint.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd[\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbdh\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbdW\xef\xbf\xbd\xc5\x8e\xe6\x93\xbe" },
#endif
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FIntPropertyParams NewProp_Index;
	static const UECodeGen_Private::FStructPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_ARootPoint_GetRoamingPointWorld_Statics::NewProp_Index = { "Index", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(RootPoint_eventGetRoamingPointWorld_Parms, Index), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_ARootPoint_GetRoamingPointWorld_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(RootPoint_eventGetRoamingPointWorld_Parms, ReturnValue), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_ARootPoint_GetRoamingPointWorld_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ARootPoint_GetRoamingPointWorld_Statics::NewProp_Index,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ARootPoint_GetRoamingPointWorld_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_ARootPoint_GetRoamingPointWorld_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_ARootPoint_GetRoamingPointWorld_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ARootPoint, nullptr, "GetRoamingPointWorld", nullptr, nullptr, Z_Construct_UFunction_ARootPoint_GetRoamingPointWorld_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_ARootPoint_GetRoamingPointWorld_Statics::PropPointers), sizeof(Z_Construct_UFunction_ARootPoint_GetRoamingPointWorld_Statics::RootPoint_eventGetRoamingPointWorld_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54820401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_ARootPoint_GetRoamingPointWorld_Statics::Function_MetaDataParams), Z_Construct_UFunction_ARootPoint_GetRoamingPointWorld_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_ARootPoint_GetRoamingPointWorld_Statics::RootPoint_eventGetRoamingPointWorld_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_ARootPoint_GetRoamingPointWorld()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_ARootPoint_GetRoamingPointWorld_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(ARootPoint::execGetRoamingPointWorld)
{
	P_GET_PROPERTY(FIntProperty,Z_Param_Index);
	P_FINISH;
	P_NATIVE_BEGIN;
	*(FVector*)Z_Param__Result=P_THIS->GetRoamingPointWorld(Z_Param_Index);
	P_NATIVE_END;
}
// End Class ARootPoint Function GetRoamingPointWorld

// Begin Class ARootPoint Function PointNum
struct Z_Construct_UFunction_ARootPoint_PointNum_Statics
{
	struct RootPoint_eventPointNum_Parms
	{
		int32 ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "AI|Roaming" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "//\xef\xbf\xbdz\xef\xbf\xbd\xef\xbf\xbdT\xef\xbf\xbd""C\xef\xbf\xbdY\n" },
#endif
		{ "ModuleRelativePath", "RootPoint.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "\xef\xbf\xbdz\xef\xbf\xbd\xef\xbf\xbdT\xef\xbf\xbd""C\xef\xbf\xbdY" },
#endif
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FIntPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_ARootPoint_PointNum_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(RootPoint_eventPointNum_Parms, ReturnValue), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_ARootPoint_PointNum_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ARootPoint_PointNum_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_ARootPoint_PointNum_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_ARootPoint_PointNum_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ARootPoint, nullptr, "PointNum", nullptr, nullptr, Z_Construct_UFunction_ARootPoint_PointNum_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_ARootPoint_PointNum_Statics::PropPointers), sizeof(Z_Construct_UFunction_ARootPoint_PointNum_Statics::RootPoint_eventPointNum_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_ARootPoint_PointNum_Statics::Function_MetaDataParams), Z_Construct_UFunction_ARootPoint_PointNum_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_ARootPoint_PointNum_Statics::RootPoint_eventPointNum_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_ARootPoint_PointNum()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_ARootPoint_PointNum_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(ARootPoint::execPointNum)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	*(int32*)Z_Param__Result=P_THIS->PointNum();
	P_NATIVE_END;
}
// End Class ARootPoint Function PointNum

// Begin Class ARootPoint
void ARootPoint::StaticRegisterNativesARootPoint()
{
	UClass* Class = ARootPoint::StaticClass();
	static const FNameNativePtrPair Funcs[] = {
		{ "GetNearestRoamingPointWorld", &ARootPoint::execGetNearestRoamingPointWorld },
		{ "GetRandomRoamingPointWorld", &ARootPoint::execGetRandomRoamingPointWorld },
		{ "GetRoamingPoint", &ARootPoint::execGetRoamingPoint },
		{ "GetRoamingPointLocal", &ARootPoint::execGetRoamingPointLocal },
		{ "GetRoamingPointWorld", &ARootPoint::execGetRoamingPointWorld },
		{ "PointNum", &ARootPoint::execPointNum },
	};
	FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(ARootPoint);
UClass* Z_Construct_UClass_ARootPoint_NoRegister()
{
	return ARootPoint::StaticClass();
}
struct Z_Construct_UClass_ARootPoint_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "IncludePath", "RootPoint.h" },
		{ "ModuleRelativePath", "RootPoint.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_RoamingPointsLocal_MetaData[] = {
		{ "AllowPrivateAccess", "true" },
		{ "Category", "AI|Roaming" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "//\xef\xbf\xbdG\xef\xbf\xbd""f\xef\xbf\xbd""B\xef\xbf\xbd^\xef\xbf\xbd\xc5\x94z\xef\xbf\xbdu\xef\xbf\xbd\xc2\x94\\ \xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd[\xef\xbf\xbdJ\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbdW\xef\xbf\xbd\xdb\x91\xef\xbf\xbd\n" },
#endif
		{ "MakeEditWidget", "true" },
		{ "ModuleRelativePath", "RootPoint.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "\xef\xbf\xbdG\xef\xbf\xbd""f\xef\xbf\xbd""B\xef\xbf\xbd^\xef\xbf\xbd\xc5\x94z\xef\xbf\xbdu\xef\xbf\xbd\xc2\x94\\ \xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd[\xef\xbf\xbdJ\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbdW\xef\xbf\xbd\xdb\x91\xef\xbf\xbd" },
#endif
	};
#if WITH_EDITORONLY_DATA
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bDrawDebugInEditor_MetaData[] = {
		{ "Category", "AI|Roaming|Debug" },
		{ "ModuleRelativePath", "RootPoint.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_DebugSphereRadius_MetaData[] = {
		{ "Category", "AI|Roaming|Debug" },
		{ "ClampMin", "4.0" },
		{ "ModuleRelativePath", "RootPoint.h" },
		{ "UIMin", "4.0" },
	};
#endif // WITH_EDITORONLY_DATA
#endif // WITH_METADATA
	static const UECodeGen_Private::FStructPropertyParams NewProp_RoamingPointsLocal_Inner;
	static const UECodeGen_Private::FArrayPropertyParams NewProp_RoamingPointsLocal;
#if WITH_EDITORONLY_DATA
	static void NewProp_bDrawDebugInEditor_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bDrawDebugInEditor;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_DebugSphereRadius;
#endif // WITH_EDITORONLY_DATA
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static UObject* (*const DependentSingletons[])();
	static constexpr FClassFunctionLinkInfo FuncInfo[] = {
		{ &Z_Construct_UFunction_ARootPoint_GetNearestRoamingPointWorld, "GetNearestRoamingPointWorld" }, // 2981321291
		{ &Z_Construct_UFunction_ARootPoint_GetRandomRoamingPointWorld, "GetRandomRoamingPointWorld" }, // 929743864
		{ &Z_Construct_UFunction_ARootPoint_GetRoamingPoint, "GetRoamingPoint" }, // 2313126671
		{ &Z_Construct_UFunction_ARootPoint_GetRoamingPointLocal, "GetRoamingPointLocal" }, // 383330660
		{ &Z_Construct_UFunction_ARootPoint_GetRoamingPointWorld, "GetRoamingPointWorld" }, // 3290240024
		{ &Z_Construct_UFunction_ARootPoint_PointNum, "PointNum" }, // 1795969035
	};
	static_assert(UE_ARRAY_COUNT(FuncInfo) < 2048);
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<ARootPoint>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_ARootPoint_Statics::NewProp_RoamingPointsLocal_Inner = { "RoamingPointsLocal", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FArrayPropertyParams Z_Construct_UClass_ARootPoint_Statics::NewProp_RoamingPointsLocal = { "RoamingPointsLocal", nullptr, (EPropertyFlags)0x0040000000000005, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ARootPoint, RoamingPointsLocal), EArrayPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_RoamingPointsLocal_MetaData), NewProp_RoamingPointsLocal_MetaData) };
#if WITH_EDITORONLY_DATA
void Z_Construct_UClass_ARootPoint_Statics::NewProp_bDrawDebugInEditor_SetBit(void* Obj)
{
	((ARootPoint*)Obj)->bDrawDebugInEditor = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_ARootPoint_Statics::NewProp_bDrawDebugInEditor = { "bDrawDebugInEditor", nullptr, (EPropertyFlags)0x0040000800000001, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(ARootPoint), &Z_Construct_UClass_ARootPoint_Statics::NewProp_bDrawDebugInEditor_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bDrawDebugInEditor_MetaData), NewProp_bDrawDebugInEditor_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_ARootPoint_Statics::NewProp_DebugSphereRadius = { "DebugSphereRadius", nullptr, (EPropertyFlags)0x0040000800000001, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ARootPoint, DebugSphereRadius), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_DebugSphereRadius_MetaData), NewProp_DebugSphereRadius_MetaData) };
#endif // WITH_EDITORONLY_DATA
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_ARootPoint_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ARootPoint_Statics::NewProp_RoamingPointsLocal_Inner,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ARootPoint_Statics::NewProp_RoamingPointsLocal,
#if WITH_EDITORONLY_DATA
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ARootPoint_Statics::NewProp_bDrawDebugInEditor,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ARootPoint_Statics::NewProp_DebugSphereRadius,
#endif // WITH_EDITORONLY_DATA
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_ARootPoint_Statics::PropPointers) < 2048);
UObject* (*const Z_Construct_UClass_ARootPoint_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_AActor,
	(UObject* (*)())Z_Construct_UPackage__Script_WayHome,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_ARootPoint_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_ARootPoint_Statics::ClassParams = {
	&ARootPoint::StaticClass,
	"Engine",
	&StaticCppClassTypeInfo,
	DependentSingletons,
	FuncInfo,
	Z_Construct_UClass_ARootPoint_Statics::PropPointers,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	UE_ARRAY_COUNT(FuncInfo),
	UE_ARRAY_COUNT(Z_Construct_UClass_ARootPoint_Statics::PropPointers),
	0,
	0x009000A4u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_ARootPoint_Statics::Class_MetaDataParams), Z_Construct_UClass_ARootPoint_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_ARootPoint()
{
	if (!Z_Registration_Info_UClass_ARootPoint.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_ARootPoint.OuterSingleton, Z_Construct_UClass_ARootPoint_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_ARootPoint.OuterSingleton;
}
template<> WAYHOME_API UClass* StaticClass<ARootPoint>()
{
	return ARootPoint::StaticClass();
}
DEFINE_VTABLE_PTR_HELPER_CTOR(ARootPoint);
ARootPoint::~ARootPoint() {}
// End Class ARootPoint

// Begin Registration
struct Z_CompiledInDeferFile_FID_Users_Rihit_Desktop_UE5_5_WayHome_Source_WayHome_RootPoint_h_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_ARootPoint, ARootPoint::StaticClass, TEXT("ARootPoint"), &Z_Registration_Info_UClass_ARootPoint, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(ARootPoint), 474871796U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Users_Rihit_Desktop_UE5_5_WayHome_Source_WayHome_RootPoint_h_3089672088(TEXT("/Script/WayHome"),
	Z_CompiledInDeferFile_FID_Users_Rihit_Desktop_UE5_5_WayHome_Source_WayHome_RootPoint_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Users_Rihit_Desktop_UE5_5_WayHome_Source_WayHome_RootPoint_h_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
