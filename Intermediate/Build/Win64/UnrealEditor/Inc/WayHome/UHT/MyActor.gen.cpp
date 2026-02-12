// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "WayHome/MyActor.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeMyActor() {}

// Begin Cross Module References
COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FFilePath();
COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FTransform();
ENGINE_API UClass* Z_Construct_UClass_AActor();
ENGINE_API UClass* Z_Construct_UClass_AActor_NoRegister();
ENGINE_API UClass* Z_Construct_UClass_UStaticMesh_NoRegister();
UPackage* Z_Construct_UPackage__Script_WayHome();
WAYHOME_API UClass* Z_Construct_UClass_AMyActor();
WAYHOME_API UClass* Z_Construct_UClass_AMyActor_NoRegister();
WAYHOME_API UEnum* Z_Construct_UEnum_WayHome_ECellType();
WAYHOME_API UScriptStruct* Z_Construct_UScriptStruct_FCellTypeInfo();
WAYHOME_API UScriptStruct* Z_Construct_UScriptStruct_FGridCell();
// End Cross Module References

// Begin Enum ECellType
static FEnumRegistrationInfo Z_Registration_Info_UEnum_ECellType;
static UEnum* ECellType_StaticEnum()
{
	if (!Z_Registration_Info_UEnum_ECellType.OuterSingleton)
	{
		Z_Registration_Info_UEnum_ECellType.OuterSingleton = GetStaticEnum(Z_Construct_UEnum_WayHome_ECellType, (UObject*)Z_Construct_UPackage__Script_WayHome(), TEXT("ECellType"));
	}
	return Z_Registration_Info_UEnum_ECellType.OuterSingleton;
}
template<> WAYHOME_API UEnum* StaticEnum<ECellType>()
{
	return ECellType_StaticEnum();
}
struct Z_Construct_UEnum_WayHome_ECellType_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[] = {
		{ "BlueprintType", "true" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n * \xe3\x82\xb0\xe3\x83\xaa\xe3\x83\x83\xe3\x83\x89\xe3\x81\xae\xe3\x82\xbb\xe3\x83\xab\xe7\xa8\xae\xe5\x88\xa5\n * - CSV \xe3\x81\xae \"CellType\" \xe5\x88\x97\xe3\x81\xa8\xe5\xaf\xbe\xe5\xbf\x9c\xef\xbc\x88\xe6\x95\xb0\xe5\x80\xa4/\xe6\x96\x87\xe5\xad\x97\xe5\x88\x97\xe3\x81\xa9\xe3\x81\xa1\xe3\x82\x89\xe3\x81\xa7\xe3\x82\x82\xe3\x83\x91\xe3\x83\xbc\xe3\x82\xb9\xe5\x8f\xaf\xef\xbc\x9a\xe5\xae\x9f\xe8\xa3\x85\xe3\x81\xaf .cpp \xe5\x81\xb4\xef\xbc\x89\n * - \xe5\x80\xa4\xe3\x81\xaf 0\xe3\x80\x9c""4 \xe3\x82\x92\xe5\x9b\xba\xe5\xae\x9a\xef\xbc\x88\xe5\xb0\x86\xe6\x9d\xa5 CSV \xe3\x81\xae\xe6\x95\xb0\xe5\x80\xa4\xe9\x81\x8b\xe7\x94\xa8\xe3\x81\xab\xe3\x82\x82\xe5\xae\x89\xe5\x85\xa8\xef\xbc\x89\n */" },
#endif
		{ "Empty.Name", "ECellType::Empty" },
		{ "Floor.Name", "ECellType::Floor" },
		{ "Goal.Name", "ECellType::Goal" },
		{ "ModuleRelativePath", "MyActor.h" },
		{ "Spawn.Name", "ECellType::Spawn" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "\xe3\x82\xb0\xe3\x83\xaa\xe3\x83\x83\xe3\x83\x89\xe3\x81\xae\xe3\x82\xbb\xe3\x83\xab\xe7\xa8\xae\xe5\x88\xa5\n- CSV \xe3\x81\xae \"CellType\" \xe5\x88\x97\xe3\x81\xa8\xe5\xaf\xbe\xe5\xbf\x9c\xef\xbc\x88\xe6\x95\xb0\xe5\x80\xa4/\xe6\x96\x87\xe5\xad\x97\xe5\x88\x97\xe3\x81\xa9\xe3\x81\xa1\xe3\x82\x89\xe3\x81\xa7\xe3\x82\x82\xe3\x83\x91\xe3\x83\xbc\xe3\x82\xb9\xe5\x8f\xaf\xef\xbc\x9a\xe5\xae\x9f\xe8\xa3\x85\xe3\x81\xaf .cpp \xe5\x81\xb4\xef\xbc\x89\n- \xe5\x80\xa4\xe3\x81\xaf 0\xe3\x80\x9c""4 \xe3\x82\x92\xe5\x9b\xba\xe5\xae\x9a\xef\xbc\x88\xe5\xb0\x86\xe6\x9d\xa5 CSV \xe3\x81\xae\xe6\x95\xb0\xe5\x80\xa4\xe9\x81\x8b\xe7\x94\xa8\xe3\x81\xab\xe3\x82\x82\xe5\xae\x89\xe5\x85\xa8\xef\xbc\x89" },
#endif
		{ "Wall.Name", "ECellType::Wall" },
	};
#endif // WITH_METADATA
	static constexpr UECodeGen_Private::FEnumeratorParam Enumerators[] = {
		{ "ECellType::Empty", (int64)ECellType::Empty },
		{ "ECellType::Wall", (int64)ECellType::Wall },
		{ "ECellType::Floor", (int64)ECellType::Floor },
		{ "ECellType::Spawn", (int64)ECellType::Spawn },
		{ "ECellType::Goal", (int64)ECellType::Goal },
	};
	static const UECodeGen_Private::FEnumParams EnumParams;
};
const UECodeGen_Private::FEnumParams Z_Construct_UEnum_WayHome_ECellType_Statics::EnumParams = {
	(UObject*(*)())Z_Construct_UPackage__Script_WayHome,
	nullptr,
	"ECellType",
	"ECellType",
	Z_Construct_UEnum_WayHome_ECellType_Statics::Enumerators,
	RF_Public|RF_Transient|RF_MarkAsNative,
	UE_ARRAY_COUNT(Z_Construct_UEnum_WayHome_ECellType_Statics::Enumerators),
	EEnumFlags::None,
	(uint8)UEnum::ECppForm::EnumClass,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UEnum_WayHome_ECellType_Statics::Enum_MetaDataParams), Z_Construct_UEnum_WayHome_ECellType_Statics::Enum_MetaDataParams)
};
UEnum* Z_Construct_UEnum_WayHome_ECellType()
{
	if (!Z_Registration_Info_UEnum_ECellType.InnerSingleton)
	{
		UECodeGen_Private::ConstructUEnum(Z_Registration_Info_UEnum_ECellType.InnerSingleton, Z_Construct_UEnum_WayHome_ECellType_Statics::EnumParams);
	}
	return Z_Registration_Info_UEnum_ECellType.InnerSingleton;
}
// End Enum ECellType

// Begin ScriptStruct FCellTypeInfo
static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_CellTypeInfo;
class UScriptStruct* FCellTypeInfo::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_CellTypeInfo.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_CellTypeInfo.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FCellTypeInfo, (UObject*)Z_Construct_UPackage__Script_WayHome(), TEXT("CellTypeInfo"));
	}
	return Z_Registration_Info_UScriptStruct_CellTypeInfo.OuterSingleton;
}
template<> WAYHOME_API UScriptStruct* StaticStruct<FCellTypeInfo>()
{
	return FCellTypeInfo::StaticStruct();
}
struct Z_Construct_UScriptStruct_FCellTypeInfo_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n * TypeMap \xe3\x81\xae 1 \xe8\xa1\x8c\xe5\x88\x86\xef\xbc\x88\xe5\xb1\x9e\xe6\x80\xa7\xe5\xae\x9a\xe7\xbe\xa9\xef\xbc\x89\n * CSV \xe5\x88\x97\xef\xbc\x9aRowName,Code,CellType,RotPitch,RotYaw,RotRoll,ScaleX,ScaleY,ScaleZ,DefaultHeight,Tag\n * - Code: Grid \xe3\x81\xae Code\xef\xbc\x88""0\xe3\x80\x9c""4\xef\xbc\x89\xe3\x81\xab\xe4\xb8\x80\xe8\x87\xb4\n * - CellType: \xe4\xb8\x8a\xe8\xa8\x98\xe5\x88\x97\xe6\x8c\x99\xe3\x80\x82""CSV \xe3\x81\xaf \"0\" / \"Empty\" \xe3\x81\xaa\xe3\x81\xa9\xe6\x95\xb0\xe5\x80\xa4/\xe6\x96\x87\xe5\xad\x97\xe5\x88\x97\xe4\xb8\xa1\xe5\xaf\xbe\xe5\xbf\x9c\n */" },
#endif
		{ "ModuleRelativePath", "MyActor.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "TypeMap \xe3\x81\xae 1 \xe8\xa1\x8c\xe5\x88\x86\xef\xbc\x88\xe5\xb1\x9e\xe6\x80\xa7\xe5\xae\x9a\xe7\xbe\xa9\xef\xbc\x89\nCSV \xe5\x88\x97\xef\xbc\x9aRowName,Code,CellType,RotPitch,RotYaw,RotRoll,ScaleX,ScaleY,ScaleZ,DefaultHeight,Tag\n- Code: Grid \xe3\x81\xae Code\xef\xbc\x88""0\xe3\x80\x9c""4\xef\xbc\x89\xe3\x81\xab\xe4\xb8\x80\xe8\x87\xb4\n- CellType: \xe4\xb8\x8a\xe8\xa8\x98\xe5\x88\x97\xe6\x8c\x99\xe3\x80\x82""CSV \xe3\x81\xaf \"0\" / \"Empty\" \xe3\x81\xaa\xe3\x81\xa9\xe6\x95\xb0\xe5\x80\xa4/\xe6\x96\x87\xe5\xad\x97\xe5\x88\x97\xe4\xb8\xa1\xe5\xaf\xbe\xe5\xbf\x9c" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Code_MetaData[] = {
		{ "Category", "CellTypeInfo" },
		{ "ModuleRelativePath", "MyActor.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_CellType_MetaData[] = {
		{ "Category", "CellTypeInfo" },
		{ "ModuleRelativePath", "MyActor.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_RotPitch_MetaData[] = {
		{ "Category", "CellTypeInfo" },
		{ "ModuleRelativePath", "MyActor.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_RotYaw_MetaData[] = {
		{ "Category", "CellTypeInfo" },
		{ "ModuleRelativePath", "MyActor.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_RotRoll_MetaData[] = {
		{ "Category", "CellTypeInfo" },
		{ "ModuleRelativePath", "MyActor.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_ScaleX_MetaData[] = {
		{ "Category", "CellTypeInfo" },
		{ "ModuleRelativePath", "MyActor.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_ScaleY_MetaData[] = {
		{ "Category", "CellTypeInfo" },
		{ "ModuleRelativePath", "MyActor.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_ScaleZ_MetaData[] = {
		{ "Category", "CellTypeInfo" },
		{ "ModuleRelativePath", "MyActor.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_DefaultHeight_MetaData[] = {
		{ "Category", "CellTypeInfo" },
		{ "ModuleRelativePath", "MyActor.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Tag_MetaData[] = {
		{ "Category", "CellTypeInfo" },
		{ "ModuleRelativePath", "MyActor.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_BPClass_MetaData[] = {
		{ "Category", "CellTypeInfo" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "// \xe5\xb0\x86\xe6\x9d\xa5\xe6\x8b\xa1\xe5\xbc\xb5\xef\xbc\x88""CSV \xe3\x81\x8b\xe3\x82\x89\xe3\x83\x91\xe3\x82\xb9\xe3\x82\x92\xe8\xaa\xad\xe3\x81\xbf\xe8\xbe\xbc\xe3\x82\x93\xe3\x81\xa7 Soft \xe5\x8f\x82\xe7\x85\xa7\xe8\xa7\xa3\xe6\xb1\xba\xe7\xad\x89\xe3\x81\x97\xe3\x81\x9f\xe3\x81\x84\xe5\xa0\xb4\xe5\x90\x88\xe3\x81\xab\xe4\xbd\xbf\xe7\x94\xa8\xef\xbc\x89\n" },
#endif
		{ "ModuleRelativePath", "MyActor.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "\xe5\xb0\x86\xe6\x9d\xa5\xe6\x8b\xa1\xe5\xbc\xb5\xef\xbc\x88""CSV \xe3\x81\x8b\xe3\x82\x89\xe3\x83\x91\xe3\x82\xb9\xe3\x82\x92\xe8\xaa\xad\xe3\x81\xbf\xe8\xbe\xbc\xe3\x82\x93\xe3\x81\xa7 Soft \xe5\x8f\x82\xe7\x85\xa7\xe8\xa7\xa3\xe6\xb1\xba\xe7\xad\x89\xe3\x81\x97\xe3\x81\x9f\xe3\x81\x84\xe5\xa0\xb4\xe5\x90\x88\xe3\x81\xab\xe4\xbd\xbf\xe7\x94\xa8\xef\xbc\x89" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Mesh_MetaData[] = {
		{ "Category", "CellTypeInfo" },
		{ "ModuleRelativePath", "MyActor.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FIntPropertyParams NewProp_Code;
	static const UECodeGen_Private::FBytePropertyParams NewProp_CellType_Underlying;
	static const UECodeGen_Private::FEnumPropertyParams NewProp_CellType;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_RotPitch;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_RotYaw;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_RotRoll;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_ScaleX;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_ScaleY;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_ScaleZ;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_DefaultHeight;
	static const UECodeGen_Private::FNamePropertyParams NewProp_Tag;
	static const UECodeGen_Private::FSoftClassPropertyParams NewProp_BPClass;
	static const UECodeGen_Private::FSoftObjectPropertyParams NewProp_Mesh;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static void* NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FCellTypeInfo>();
	}
	static const UECodeGen_Private::FStructParams StructParams;
};
const UECodeGen_Private::FIntPropertyParams Z_Construct_UScriptStruct_FCellTypeInfo_Statics::NewProp_Code = { "Code", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FCellTypeInfo, Code), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Code_MetaData), NewProp_Code_MetaData) };
const UECodeGen_Private::FBytePropertyParams Z_Construct_UScriptStruct_FCellTypeInfo_Statics::NewProp_CellType_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, nullptr, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FEnumPropertyParams Z_Construct_UScriptStruct_FCellTypeInfo_Statics::NewProp_CellType = { "CellType", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FCellTypeInfo, CellType), Z_Construct_UEnum_WayHome_ECellType, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_CellType_MetaData), NewProp_CellType_MetaData) }; // 209798783
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FCellTypeInfo_Statics::NewProp_RotPitch = { "RotPitch", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FCellTypeInfo, RotPitch), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_RotPitch_MetaData), NewProp_RotPitch_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FCellTypeInfo_Statics::NewProp_RotYaw = { "RotYaw", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FCellTypeInfo, RotYaw), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_RotYaw_MetaData), NewProp_RotYaw_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FCellTypeInfo_Statics::NewProp_RotRoll = { "RotRoll", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FCellTypeInfo, RotRoll), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_RotRoll_MetaData), NewProp_RotRoll_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FCellTypeInfo_Statics::NewProp_ScaleX = { "ScaleX", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FCellTypeInfo, ScaleX), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_ScaleX_MetaData), NewProp_ScaleX_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FCellTypeInfo_Statics::NewProp_ScaleY = { "ScaleY", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FCellTypeInfo, ScaleY), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_ScaleY_MetaData), NewProp_ScaleY_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FCellTypeInfo_Statics::NewProp_ScaleZ = { "ScaleZ", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FCellTypeInfo, ScaleZ), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_ScaleZ_MetaData), NewProp_ScaleZ_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FCellTypeInfo_Statics::NewProp_DefaultHeight = { "DefaultHeight", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FCellTypeInfo, DefaultHeight), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_DefaultHeight_MetaData), NewProp_DefaultHeight_MetaData) };
const UECodeGen_Private::FNamePropertyParams Z_Construct_UScriptStruct_FCellTypeInfo_Statics::NewProp_Tag = { "Tag", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FCellTypeInfo, Tag), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Tag_MetaData), NewProp_Tag_MetaData) };
const UECodeGen_Private::FSoftClassPropertyParams Z_Construct_UScriptStruct_FCellTypeInfo_Statics::NewProp_BPClass = { "BPClass", nullptr, (EPropertyFlags)0x0014000000000005, UECodeGen_Private::EPropertyGenFlags::SoftClass, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FCellTypeInfo, BPClass), Z_Construct_UClass_AActor_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_BPClass_MetaData), NewProp_BPClass_MetaData) };
const UECodeGen_Private::FSoftObjectPropertyParams Z_Construct_UScriptStruct_FCellTypeInfo_Statics::NewProp_Mesh = { "Mesh", nullptr, (EPropertyFlags)0x0014000000000005, UECodeGen_Private::EPropertyGenFlags::SoftObject, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FCellTypeInfo, Mesh), Z_Construct_UClass_UStaticMesh_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Mesh_MetaData), NewProp_Mesh_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FCellTypeInfo_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FCellTypeInfo_Statics::NewProp_Code,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FCellTypeInfo_Statics::NewProp_CellType_Underlying,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FCellTypeInfo_Statics::NewProp_CellType,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FCellTypeInfo_Statics::NewProp_RotPitch,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FCellTypeInfo_Statics::NewProp_RotYaw,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FCellTypeInfo_Statics::NewProp_RotRoll,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FCellTypeInfo_Statics::NewProp_ScaleX,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FCellTypeInfo_Statics::NewProp_ScaleY,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FCellTypeInfo_Statics::NewProp_ScaleZ,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FCellTypeInfo_Statics::NewProp_DefaultHeight,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FCellTypeInfo_Statics::NewProp_Tag,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FCellTypeInfo_Statics::NewProp_BPClass,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FCellTypeInfo_Statics::NewProp_Mesh,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FCellTypeInfo_Statics::PropPointers) < 2048);
const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FCellTypeInfo_Statics::StructParams = {
	(UObject* (*)())Z_Construct_UPackage__Script_WayHome,
	nullptr,
	&NewStructOps,
	"CellTypeInfo",
	Z_Construct_UScriptStruct_FCellTypeInfo_Statics::PropPointers,
	UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FCellTypeInfo_Statics::PropPointers),
	sizeof(FCellTypeInfo),
	alignof(FCellTypeInfo),
	RF_Public|RF_Transient|RF_MarkAsNative,
	EStructFlags(0x00000001),
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FCellTypeInfo_Statics::Struct_MetaDataParams), Z_Construct_UScriptStruct_FCellTypeInfo_Statics::Struct_MetaDataParams)
};
UScriptStruct* Z_Construct_UScriptStruct_FCellTypeInfo()
{
	if (!Z_Registration_Info_UScriptStruct_CellTypeInfo.InnerSingleton)
	{
		UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_CellTypeInfo.InnerSingleton, Z_Construct_UScriptStruct_FCellTypeInfo_Statics::StructParams);
	}
	return Z_Registration_Info_UScriptStruct_CellTypeInfo.InnerSingleton;
}
// End ScriptStruct FCellTypeInfo

// Begin ScriptStruct FGridCell
static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_GridCell;
class UScriptStruct* FGridCell::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_GridCell.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_GridCell.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FGridCell, (UObject*)Z_Construct_UPackage__Script_WayHome(), TEXT("GridCell"));
	}
	return Z_Registration_Info_UScriptStruct_GridCell.OuterSingleton;
}
template<> WAYHOME_API UScriptStruct* StaticStruct<FGridCell>()
{
	return FGridCell::StaticStruct();
}
struct Z_Construct_UScriptStruct_FGridCell_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n * \xe3\x82\xb0\xe3\x83\xaa\xe3\x83\x83\xe3\x83\x89\xe3\x81\xae 1 \xe3\x82\xbb\xe3\x83\xab\xef\xbc\x88\xe9\x85\x8d\xe7\xbd\xae\xe5\xaf\xbe\xe8\xb1\xa1\xef\xbc\x89\n * CSV \xe5\x88\x97\xef\xbc\x9aRowName,X,Y,Code\n */" },
#endif
		{ "ModuleRelativePath", "MyActor.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "\xe3\x82\xb0\xe3\x83\xaa\xe3\x83\x83\xe3\x83\x89\xe3\x81\xae 1 \xe3\x82\xbb\xe3\x83\xab\xef\xbc\x88\xe9\x85\x8d\xe7\xbd\xae\xe5\xaf\xbe\xe8\xb1\xa1\xef\xbc\x89\nCSV \xe5\x88\x97\xef\xbc\x9aRowName,X,Y,Code" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_X_MetaData[] = {
		{ "Category", "GridCell" },
		{ "ModuleRelativePath", "MyActor.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Y_MetaData[] = {
		{ "Category", "GridCell" },
		{ "ModuleRelativePath", "MyActor.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Code_MetaData[] = {
		{ "Category", "GridCell" },
		{ "ModuleRelativePath", "MyActor.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FIntPropertyParams NewProp_X;
	static const UECodeGen_Private::FIntPropertyParams NewProp_Y;
	static const UECodeGen_Private::FIntPropertyParams NewProp_Code;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static void* NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FGridCell>();
	}
	static const UECodeGen_Private::FStructParams StructParams;
};
const UECodeGen_Private::FIntPropertyParams Z_Construct_UScriptStruct_FGridCell_Statics::NewProp_X = { "X", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FGridCell, X), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_X_MetaData), NewProp_X_MetaData) };
const UECodeGen_Private::FIntPropertyParams Z_Construct_UScriptStruct_FGridCell_Statics::NewProp_Y = { "Y", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FGridCell, Y), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Y_MetaData), NewProp_Y_MetaData) };
const UECodeGen_Private::FIntPropertyParams Z_Construct_UScriptStruct_FGridCell_Statics::NewProp_Code = { "Code", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FGridCell, Code), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Code_MetaData), NewProp_Code_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FGridCell_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FGridCell_Statics::NewProp_X,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FGridCell_Statics::NewProp_Y,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FGridCell_Statics::NewProp_Code,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FGridCell_Statics::PropPointers) < 2048);
const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FGridCell_Statics::StructParams = {
	(UObject* (*)())Z_Construct_UPackage__Script_WayHome,
	nullptr,
	&NewStructOps,
	"GridCell",
	Z_Construct_UScriptStruct_FGridCell_Statics::PropPointers,
	UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FGridCell_Statics::PropPointers),
	sizeof(FGridCell),
	alignof(FGridCell),
	RF_Public|RF_Transient|RF_MarkAsNative,
	EStructFlags(0x00000001),
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FGridCell_Statics::Struct_MetaDataParams), Z_Construct_UScriptStruct_FGridCell_Statics::Struct_MetaDataParams)
};
UScriptStruct* Z_Construct_UScriptStruct_FGridCell()
{
	if (!Z_Registration_Info_UScriptStruct_GridCell.InnerSingleton)
	{
		UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_GridCell.InnerSingleton, Z_Construct_UScriptStruct_FGridCell_Statics::StructParams);
	}
	return Z_Registration_Info_UScriptStruct_GridCell.InnerSingleton;
}
// End ScriptStruct FGridCell

// Begin Class AMyActor Function BP_OnPostBuild
static const FName NAME_AMyActor_BP_OnPostBuild = FName(TEXT("BP_OnPostBuild"));
void AMyActor::BP_OnPostBuild()
{
	UFunction* Func = FindFunctionChecked(NAME_AMyActor_BP_OnPostBuild);
	ProcessEvent(Func,NULL);
}
struct Z_Construct_UFunction_AMyActor_BP_OnPostBuild_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Build" },
		{ "ModuleRelativePath", "MyActor.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_AMyActor_BP_OnPostBuild_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AMyActor, nullptr, "BP_OnPostBuild", nullptr, nullptr, nullptr, 0, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x08080800, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_AMyActor_BP_OnPostBuild_Statics::Function_MetaDataParams), Z_Construct_UFunction_AMyActor_BP_OnPostBuild_Statics::Function_MetaDataParams) };
UFunction* Z_Construct_UFunction_AMyActor_BP_OnPostBuild()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_AMyActor_BP_OnPostBuild_Statics::FuncParams);
	}
	return ReturnFunction;
}
// End Class AMyActor Function BP_OnPostBuild

// Begin Class AMyActor Function BP_OnPreBuild
static const FName NAME_AMyActor_BP_OnPreBuild = FName(TEXT("BP_OnPreBuild"));
void AMyActor::BP_OnPreBuild()
{
	UFunction* Func = FindFunctionChecked(NAME_AMyActor_BP_OnPreBuild);
	ProcessEvent(Func,NULL);
}
struct Z_Construct_UFunction_AMyActor_BP_OnPreBuild_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Build" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "// BP \xe5\x81\xb4\xe3\x81\xa7\xe5\xae\x9f\xe8\xa3\x85\xe3\x81\x99\xe3\x82\x8b 3 \xe3\x81\xa4\xe3\x81\xae\xe3\x82\xa4\xe3\x83\x99\xe3\x83\xb3\xe3\x83\x88\n" },
#endif
		{ "ModuleRelativePath", "MyActor.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "BP \xe5\x81\xb4\xe3\x81\xa7\xe5\xae\x9f\xe8\xa3\x85\xe3\x81\x99\xe3\x82\x8b 3 \xe3\x81\xa4\xe3\x81\xae\xe3\x82\xa4\xe3\x83\x99\xe3\x83\xb3\xe3\x83\x88" },
#endif
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_AMyActor_BP_OnPreBuild_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AMyActor, nullptr, "BP_OnPreBuild", nullptr, nullptr, nullptr, 0, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x08080800, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_AMyActor_BP_OnPreBuild_Statics::Function_MetaDataParams), Z_Construct_UFunction_AMyActor_BP_OnPreBuild_Statics::Function_MetaDataParams) };
UFunction* Z_Construct_UFunction_AMyActor_BP_OnPreBuild()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_AMyActor_BP_OnPreBuild_Statics::FuncParams);
	}
	return ReturnFunction;
}
// End Class AMyActor Function BP_OnPreBuild

// Begin Class AMyActor Function BP_PlaceByType
struct MyActor_eventBP_PlaceByType_Parms
{
	FCellTypeInfo TypeInfo;
	FTransform Transform;
};
static const FName NAME_AMyActor_BP_PlaceByType = FName(TEXT("BP_PlaceByType"));
void AMyActor::BP_PlaceByType(FCellTypeInfo const& TypeInfo, FTransform const& Transform)
{
	MyActor_eventBP_PlaceByType_Parms Parms;
	Parms.TypeInfo=TypeInfo;
	Parms.Transform=Transform;
	UFunction* Func = FindFunctionChecked(NAME_AMyActor_BP_PlaceByType);
	ProcessEvent(Func,&Parms);
}
struct Z_Construct_UFunction_AMyActor_BP_PlaceByType_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Build" },
		{ "ModuleRelativePath", "MyActor.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_TypeInfo_MetaData[] = {
		{ "NativeConst", "" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Transform_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStructPropertyParams NewProp_TypeInfo;
	static const UECodeGen_Private::FStructPropertyParams NewProp_Transform;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_AMyActor_BP_PlaceByType_Statics::NewProp_TypeInfo = { "TypeInfo", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(MyActor_eventBP_PlaceByType_Parms, TypeInfo), Z_Construct_UScriptStruct_FCellTypeInfo, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_TypeInfo_MetaData), NewProp_TypeInfo_MetaData) }; // 2986778908
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_AMyActor_BP_PlaceByType_Statics::NewProp_Transform = { "Transform", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(MyActor_eventBP_PlaceByType_Parms, Transform), Z_Construct_UScriptStruct_FTransform, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Transform_MetaData), NewProp_Transform_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AMyActor_BP_PlaceByType_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AMyActor_BP_PlaceByType_Statics::NewProp_TypeInfo,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AMyActor_BP_PlaceByType_Statics::NewProp_Transform,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_AMyActor_BP_PlaceByType_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_AMyActor_BP_PlaceByType_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AMyActor, nullptr, "BP_PlaceByType", nullptr, nullptr, Z_Construct_UFunction_AMyActor_BP_PlaceByType_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_AMyActor_BP_PlaceByType_Statics::PropPointers), sizeof(MyActor_eventBP_PlaceByType_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x08C80800, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_AMyActor_BP_PlaceByType_Statics::Function_MetaDataParams), Z_Construct_UFunction_AMyActor_BP_PlaceByType_Statics::Function_MetaDataParams) };
static_assert(sizeof(MyActor_eventBP_PlaceByType_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_AMyActor_BP_PlaceByType()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_AMyActor_BP_PlaceByType_Statics::FuncParams);
	}
	return ReturnFunction;
}
// End Class AMyActor Function BP_PlaceByType

// Begin Class AMyActor Function BuildFromCsv
struct Z_Construct_UFunction_AMyActor_BuildFromCsv_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "CallInEditor", "true" },
		{ "Category", "Build" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "// \xe6\x89\x8b\xe5\x8b\x95\xe3\x83\x88\xe3\x83\xaa\xe3\x82\xac\xef\xbc\x88\xe3\x82\xa8\xe3\x83\x87\xe3\x82\xa3\xe3\x82\xbf\xe3\x81\xae Details \xe3\x81\x8b\xe3\x82\x89\xe6\x8a\xbc\xe4\xb8\x8b\xe5\x8f\xaf\xef\xbc\x89\n" },
#endif
		{ "ModuleRelativePath", "MyActor.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "\xe6\x89\x8b\xe5\x8b\x95\xe3\x83\x88\xe3\x83\xaa\xe3\x82\xac\xef\xbc\x88\xe3\x82\xa8\xe3\x83\x87\xe3\x82\xa3\xe3\x82\xbf\xe3\x81\xae Details \xe3\x81\x8b\xe3\x82\x89\xe6\x8a\xbc\xe4\xb8\x8b\xe5\x8f\xaf\xef\xbc\x89" },
#endif
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_AMyActor_BuildFromCsv_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AMyActor, nullptr, "BuildFromCsv", nullptr, nullptr, nullptr, 0, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_AMyActor_BuildFromCsv_Statics::Function_MetaDataParams), Z_Construct_UFunction_AMyActor_BuildFromCsv_Statics::Function_MetaDataParams) };
UFunction* Z_Construct_UFunction_AMyActor_BuildFromCsv()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_AMyActor_BuildFromCsv_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(AMyActor::execBuildFromCsv)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->BuildFromCsv();
	P_NATIVE_END;
}
// End Class AMyActor Function BuildFromCsv

// Begin Class AMyActor
void AMyActor::StaticRegisterNativesAMyActor()
{
	UClass* Class = AMyActor::StaticClass();
	static const FNameNativePtrPair Funcs[] = {
		{ "BuildFromCsv", &AMyActor::execBuildFromCsv },
	};
	FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(AMyActor);
UClass* Z_Construct_UClass_AMyActor_NoRegister()
{
	return AMyActor::StaticClass();
}
struct Z_Construct_UClass_AMyActor_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n * API \xe3\x83\x9e\xe3\x82\xaf\xe3\x83\xad\xe3\x81\xaf\xe3\x83\x97\xe3\x83\xad\xe3\x82\xb8\xe3\x82\xa7\xe3\x82\xaf\xe3\x83\x88\xe3\x81\xae\xe3\x83\xa2\xe3\x82\xb8\xe3\x83\xa5\xe3\x83\xbc\xe3\x83\xab\xe5\x90\x8d\xe3\x81\xab\xe5\x90\x88\xe3\x82\x8f\xe3\x81\x9b\xe3\x81\xa6\xe5\xa4\x89\xe6\x9b\xb4\xe3\x81\x97\xe3\x81\xa6\xe3\x81\x8f\xe3\x81\xa0\xe3\x81\x95\xe3\x81\x84\xe3\x80\x82\n * \xe4\xbe\x8b\xef\xbc\x89WayHome \xe2\x86\x92 WAYHOME_API / MyProject \xe2\x86\x92 MYPROJECT_API\n */" },
#endif
		{ "IncludePath", "MyActor.h" },
		{ "ModuleRelativePath", "MyActor.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "API \xe3\x83\x9e\xe3\x82\xaf\xe3\x83\xad\xe3\x81\xaf\xe3\x83\x97\xe3\x83\xad\xe3\x82\xb8\xe3\x82\xa7\xe3\x82\xaf\xe3\x83\x88\xe3\x81\xae\xe3\x83\xa2\xe3\x82\xb8\xe3\x83\xa5\xe3\x83\xbc\xe3\x83\xab\xe5\x90\x8d\xe3\x81\xab\xe5\x90\x88\xe3\x82\x8f\xe3\x81\x9b\xe3\x81\xa6\xe5\xa4\x89\xe6\x9b\xb4\xe3\x81\x97\xe3\x81\xa6\xe3\x81\x8f\xe3\x81\xa0\xe3\x81\x95\xe3\x81\x84\xe3\x80\x82\n\xe4\xbe\x8b\xef\xbc\x89WayHome \xe2\x86\x92 WAYHOME_API / MyProject \xe2\x86\x92 MYPROJECT_API" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_GridCsvPath_MetaData[] = {
		{ "Category", "CSV" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "// === \xe5\x85\xa5\xe5\x8a\x9b CSV \xe3\x83\x91\xe3\x82\xb9\xef\xbc\x88\xe7\x9b\xb8\xe5\xaf\xbe\xe3\x81\xaf ProjectDir \xe5\x9f\xba\xe6\xba\x96\xef\xbc\x89 ===\n" },
#endif
		{ "ModuleRelativePath", "MyActor.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "=== \xe5\x85\xa5\xe5\x8a\x9b CSV \xe3\x83\x91\xe3\x82\xb9\xef\xbc\x88\xe7\x9b\xb8\xe5\xaf\xbe\xe3\x81\xaf ProjectDir \xe5\x9f\xba\xe6\xba\x96\xef\xbc\x89 ===" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_TypeMapCsvPath_MetaData[] = {
		{ "Category", "CSV" },
		{ "ModuleRelativePath", "MyActor.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_CellSizeX_MetaData[] = {
		{ "Category", "Grid" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "// === \xe3\x82\xb0\xe3\x83\xaa\xe3\x83\x83\xe3\x83\x89\xe8\xa8\xad\xe5\xae\x9a\xef\xbc\x88\xe3\x82\xa2\xe3\x82\xaf\xe3\x82\xbf\xe3\x83\xbc\xe5\x9f\xba\xe6\xba\x96\xe3\x81\xae\xe3\x83\xad\xe3\x83\xbc\xe3\x82\xab\xe3\x83\xab\xe5\xba\xa7\xe6\xa8\x99\xe2\x86\x92\xe3\x82\xa2\xe3\x82\xaf\xe3\x82\xbf\xe3\x83\xbc TRS \xe3\x82\x92\xe4\xb9\x97\xe7\xae\x97\xef\xbc\x89 ===\n" },
#endif
		{ "ModuleRelativePath", "MyActor.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "=== \xe3\x82\xb0\xe3\x83\xaa\xe3\x83\x83\xe3\x83\x89\xe8\xa8\xad\xe5\xae\x9a\xef\xbc\x88\xe3\x82\xa2\xe3\x82\xaf\xe3\x82\xbf\xe3\x83\xbc\xe5\x9f\xba\xe6\xba\x96\xe3\x81\xae\xe3\x83\xad\xe3\x83\xbc\xe3\x82\xab\xe3\x83\xab\xe5\xba\xa7\xe6\xa8\x99\xe2\x86\x92\xe3\x82\xa2\xe3\x82\xaf\xe3\x82\xbf\xe3\x83\xbc TRS \xe3\x82\x92\xe4\xb9\x97\xe7\xae\x97\xef\xbc\x89 ===" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_CellSizeY_MetaData[] = {
		{ "Category", "Grid" },
		{ "ModuleRelativePath", "MyActor.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_BaseZ_MetaData[] = {
		{ "Category", "Grid" },
		{ "ModuleRelativePath", "MyActor.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bBuildOnBeginPlay_MetaData[] = {
		{ "Category", "Build" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "// === \xe8\xb5\xb7\xe5\x8b\x95\xe6\x99\x82\xe8\x87\xaa\xe5\x8b\x95\xe3\x83\x93\xe3\x83\xab\xe3\x83\x89\xef\xbc\x88\xe6\x96\xb9\xe5\xbc\x8f""B\xef\xbc\x89 ===\n" },
#endif
		{ "ModuleRelativePath", "MyActor.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "=== \xe8\xb5\xb7\xe5\x8b\x95\xe6\x99\x82\xe8\x87\xaa\xe5\x8b\x95\xe3\x83\x93\xe3\x83\xab\xe3\x83\x89\xef\xbc\x88\xe6\x96\xb9\xe5\xbc\x8f""B\xef\xbc\x89 ===" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bServerOnlyBuild_MetaData[] = {
		{ "Category", "Build" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "// \xe8\xb5\xb7\xe5\x8b\x95\xe6\x99\x82\xe3\x81\xab BuildFromCsv \xe3\x82\x92\xe8\x87\xaa\xe5\x8b\x95\xe5\xae\x9f\xe8\xa1\x8c\n" },
#endif
		{ "ModuleRelativePath", "MyActor.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "\xe8\xb5\xb7\xe5\x8b\x95\xe6\x99\x82\xe3\x81\xab BuildFromCsv \xe3\x82\x92\xe8\x87\xaa\xe5\x8b\x95\xe5\xae\x9f\xe8\xa1\x8c" },
#endif
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStructPropertyParams NewProp_GridCsvPath;
	static const UECodeGen_Private::FStructPropertyParams NewProp_TypeMapCsvPath;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_CellSizeX;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_CellSizeY;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_BaseZ;
	static void NewProp_bBuildOnBeginPlay_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bBuildOnBeginPlay;
	static void NewProp_bServerOnlyBuild_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bServerOnlyBuild;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static UObject* (*const DependentSingletons[])();
	static constexpr FClassFunctionLinkInfo FuncInfo[] = {
		{ &Z_Construct_UFunction_AMyActor_BP_OnPostBuild, "BP_OnPostBuild" }, // 61480574
		{ &Z_Construct_UFunction_AMyActor_BP_OnPreBuild, "BP_OnPreBuild" }, // 931974105
		{ &Z_Construct_UFunction_AMyActor_BP_PlaceByType, "BP_PlaceByType" }, // 3076143859
		{ &Z_Construct_UFunction_AMyActor_BuildFromCsv, "BuildFromCsv" }, // 1856280996
	};
	static_assert(UE_ARRAY_COUNT(FuncInfo) < 2048);
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<AMyActor>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_AMyActor_Statics::NewProp_GridCsvPath = { "GridCsvPath", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AMyActor, GridCsvPath), Z_Construct_UScriptStruct_FFilePath, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_GridCsvPath_MetaData), NewProp_GridCsvPath_MetaData) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_AMyActor_Statics::NewProp_TypeMapCsvPath = { "TypeMapCsvPath", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AMyActor, TypeMapCsvPath), Z_Construct_UScriptStruct_FFilePath, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_TypeMapCsvPath_MetaData), NewProp_TypeMapCsvPath_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_AMyActor_Statics::NewProp_CellSizeX = { "CellSizeX", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AMyActor, CellSizeX), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_CellSizeX_MetaData), NewProp_CellSizeX_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_AMyActor_Statics::NewProp_CellSizeY = { "CellSizeY", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AMyActor, CellSizeY), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_CellSizeY_MetaData), NewProp_CellSizeY_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_AMyActor_Statics::NewProp_BaseZ = { "BaseZ", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AMyActor, BaseZ), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_BaseZ_MetaData), NewProp_BaseZ_MetaData) };
void Z_Construct_UClass_AMyActor_Statics::NewProp_bBuildOnBeginPlay_SetBit(void* Obj)
{
	((AMyActor*)Obj)->bBuildOnBeginPlay = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_AMyActor_Statics::NewProp_bBuildOnBeginPlay = { "bBuildOnBeginPlay", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(AMyActor), &Z_Construct_UClass_AMyActor_Statics::NewProp_bBuildOnBeginPlay_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bBuildOnBeginPlay_MetaData), NewProp_bBuildOnBeginPlay_MetaData) };
void Z_Construct_UClass_AMyActor_Statics::NewProp_bServerOnlyBuild_SetBit(void* Obj)
{
	((AMyActor*)Obj)->bServerOnlyBuild = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_AMyActor_Statics::NewProp_bServerOnlyBuild = { "bServerOnlyBuild", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(AMyActor), &Z_Construct_UClass_AMyActor_Statics::NewProp_bServerOnlyBuild_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bServerOnlyBuild_MetaData), NewProp_bServerOnlyBuild_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_AMyActor_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AMyActor_Statics::NewProp_GridCsvPath,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AMyActor_Statics::NewProp_TypeMapCsvPath,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AMyActor_Statics::NewProp_CellSizeX,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AMyActor_Statics::NewProp_CellSizeY,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AMyActor_Statics::NewProp_BaseZ,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AMyActor_Statics::NewProp_bBuildOnBeginPlay,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AMyActor_Statics::NewProp_bServerOnlyBuild,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_AMyActor_Statics::PropPointers) < 2048);
UObject* (*const Z_Construct_UClass_AMyActor_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_AActor,
	(UObject* (*)())Z_Construct_UPackage__Script_WayHome,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_AMyActor_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_AMyActor_Statics::ClassParams = {
	&AMyActor::StaticClass,
	"Engine",
	&StaticCppClassTypeInfo,
	DependentSingletons,
	FuncInfo,
	Z_Construct_UClass_AMyActor_Statics::PropPointers,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	UE_ARRAY_COUNT(FuncInfo),
	UE_ARRAY_COUNT(Z_Construct_UClass_AMyActor_Statics::PropPointers),
	0,
	0x009000A4u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_AMyActor_Statics::Class_MetaDataParams), Z_Construct_UClass_AMyActor_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_AMyActor()
{
	if (!Z_Registration_Info_UClass_AMyActor.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_AMyActor.OuterSingleton, Z_Construct_UClass_AMyActor_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_AMyActor.OuterSingleton;
}
template<> WAYHOME_API UClass* StaticClass<AMyActor>()
{
	return AMyActor::StaticClass();
}
DEFINE_VTABLE_PTR_HELPER_CTOR(AMyActor);
AMyActor::~AMyActor() {}
// End Class AMyActor

// Begin Registration
struct Z_CompiledInDeferFile_FID_Users_Rihit_Desktop_WayHome_5_5_Source_WayHome_MyActor_h_Statics
{
	static constexpr FEnumRegisterCompiledInInfo EnumInfo[] = {
		{ ECellType_StaticEnum, TEXT("ECellType"), &Z_Registration_Info_UEnum_ECellType, CONSTRUCT_RELOAD_VERSION_INFO(FEnumReloadVersionInfo, 209798783U) },
	};
	static constexpr FStructRegisterCompiledInInfo ScriptStructInfo[] = {
		{ FCellTypeInfo::StaticStruct, Z_Construct_UScriptStruct_FCellTypeInfo_Statics::NewStructOps, TEXT("CellTypeInfo"), &Z_Registration_Info_UScriptStruct_CellTypeInfo, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FCellTypeInfo), 2986778908U) },
		{ FGridCell::StaticStruct, Z_Construct_UScriptStruct_FGridCell_Statics::NewStructOps, TEXT("GridCell"), &Z_Registration_Info_UScriptStruct_GridCell, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FGridCell), 3487467718U) },
	};
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_AMyActor, AMyActor::StaticClass, TEXT("AMyActor"), &Z_Registration_Info_UClass_AMyActor, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(AMyActor), 1290546822U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Users_Rihit_Desktop_WayHome_5_5_Source_WayHome_MyActor_h_2231106619(TEXT("/Script/WayHome"),
	Z_CompiledInDeferFile_FID_Users_Rihit_Desktop_WayHome_5_5_Source_WayHome_MyActor_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Users_Rihit_Desktop_WayHome_5_5_Source_WayHome_MyActor_h_Statics::ClassInfo),
	Z_CompiledInDeferFile_FID_Users_Rihit_Desktop_WayHome_5_5_Source_WayHome_MyActor_h_Statics::ScriptStructInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Users_Rihit_Desktop_WayHome_5_5_Source_WayHome_MyActor_h_Statics::ScriptStructInfo),
	Z_CompiledInDeferFile_FID_Users_Rihit_Desktop_WayHome_5_5_Source_WayHome_MyActor_h_Statics::EnumInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Users_Rihit_Desktop_WayHome_5_5_Source_WayHome_MyActor_h_Statics::EnumInfo));
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
