// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "VoxelWorld.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
static_assert(!UE_WITH_CONSTINIT_UOBJECT, "This generated code can only be compiled with !UE_WITH_CONSTINIT_OBJECT");
void EmptyLinkFunctionForGeneratedCodeVoxelWorld() {}

// ********** Begin Cross Module References ********************************************************
ENGINE_API UClass* Z_Construct_UClass_AActor();
MYPROJECT_API UClass* Z_Construct_UClass_AVoxelChunk_NoRegister();
MYPROJECT_API UClass* Z_Construct_UClass_AVoxelWorld();
MYPROJECT_API UClass* Z_Construct_UClass_AVoxelWorld_NoRegister();
UPackage* Z_Construct_UPackage__Script_MyProject();
// ********** End Cross Module References **********************************************************

// ********** Begin Class AVoxelWorld **************************************************************
FClassRegistrationInfo Z_Registration_Info_UClass_AVoxelWorld;
UClass* AVoxelWorld::GetPrivateStaticClass()
{
	using TClass = AVoxelWorld;
	if (!Z_Registration_Info_UClass_AVoxelWorld.InnerSingleton)
	{
		GetPrivateStaticClassBody(
			TClass::StaticPackage(),
			TEXT("VoxelWorld"),
			Z_Registration_Info_UClass_AVoxelWorld.InnerSingleton,
			StaticRegisterNativesAVoxelWorld,
			sizeof(TClass),
			alignof(TClass),
			TClass::StaticClassFlags,
			TClass::StaticClassCastFlags(),
			TClass::StaticConfigName(),
			(UClass::ClassConstructorType)InternalConstructor<TClass>,
			(UClass::ClassVTableHelperCtorCallerType)InternalVTableHelperCtorCaller<TClass>,
			UOBJECT_CPPCLASS_STATICFUNCTIONS_FORCLASS(TClass),
			&TClass::Super::StaticClass,
			&TClass::WithinClass::StaticClass
		);
	}
	return Z_Registration_Info_UClass_AVoxelWorld.InnerSingleton;
}
UClass* Z_Construct_UClass_AVoxelWorld_NoRegister()
{
	return AVoxelWorld::GetPrivateStaticClass();
}
struct Z_Construct_UClass_AVoxelWorld_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "IncludePath", "VoxelWorld.h" },
		{ "ModuleRelativePath", "Public/VoxelWorld.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_CellsPerChunk_MetaData[] = {
		{ "Category", "Voxel" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/** Number of voxel cells per axis in each chunk (e.g. 32 => 32^3 cells). */" },
#endif
		{ "ModuleRelativePath", "Public/VoxelWorld.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Number of voxel cells per axis in each chunk (e.g. 32 => 32^3 cells)." },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_WorldSizeInChunks_MetaData[] = {
		{ "Category", "Voxel" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/** Number of chunks along X and Y (world is WorldSizeInChunks x WorldSizeInChunks). */" },
#endif
		{ "ModuleRelativePath", "Public/VoxelWorld.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Number of chunks along X and Y (world is WorldSizeInChunks x WorldSizeInChunks)." },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_VoxelScale_MetaData[] = {
		{ "Category", "Voxel" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/** World size of one voxel cell (25 = 25cm, 100 = 1m). */" },
#endif
		{ "ModuleRelativePath", "Public/VoxelWorld.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "World size of one voxel cell (25 = 25cm, 100 = 1m)." },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_SpawnedChunks_MetaData[] = {
		{ "ModuleRelativePath", "Public/VoxelWorld.h" },
	};
#endif // WITH_METADATA

// ********** Begin Class AVoxelWorld constinit property declarations ******************************
	static const UECodeGen_Private::FIntPropertyParams NewProp_CellsPerChunk;
	static const UECodeGen_Private::FIntPropertyParams NewProp_WorldSizeInChunks;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_VoxelScale;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_SpawnedChunks_Inner;
	static const UECodeGen_Private::FArrayPropertyParams NewProp_SpawnedChunks;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
// ********** End Class AVoxelWorld constinit property declarations ********************************
	static UObject* (*const DependentSingletons[])();
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<AVoxelWorld>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
}; // struct Z_Construct_UClass_AVoxelWorld_Statics

// ********** Begin Class AVoxelWorld Property Definitions *****************************************
const UECodeGen_Private::FIntPropertyParams Z_Construct_UClass_AVoxelWorld_Statics::NewProp_CellsPerChunk = { "CellsPerChunk", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AVoxelWorld, CellsPerChunk), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_CellsPerChunk_MetaData), NewProp_CellsPerChunk_MetaData) };
const UECodeGen_Private::FIntPropertyParams Z_Construct_UClass_AVoxelWorld_Statics::NewProp_WorldSizeInChunks = { "WorldSizeInChunks", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AVoxelWorld, WorldSizeInChunks), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_WorldSizeInChunks_MetaData), NewProp_WorldSizeInChunks_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_AVoxelWorld_Statics::NewProp_VoxelScale = { "VoxelScale", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AVoxelWorld, VoxelScale), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_VoxelScale_MetaData), NewProp_VoxelScale_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AVoxelWorld_Statics::NewProp_SpawnedChunks_Inner = { "SpawnedChunks", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, Z_Construct_UClass_AVoxelChunk_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FArrayPropertyParams Z_Construct_UClass_AVoxelWorld_Statics::NewProp_SpawnedChunks = { "SpawnedChunks", nullptr, (EPropertyFlags)0x0020080000000000, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AVoxelWorld, SpawnedChunks), EArrayPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_SpawnedChunks_MetaData), NewProp_SpawnedChunks_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_AVoxelWorld_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AVoxelWorld_Statics::NewProp_CellsPerChunk,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AVoxelWorld_Statics::NewProp_WorldSizeInChunks,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AVoxelWorld_Statics::NewProp_VoxelScale,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AVoxelWorld_Statics::NewProp_SpawnedChunks_Inner,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AVoxelWorld_Statics::NewProp_SpawnedChunks,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_AVoxelWorld_Statics::PropPointers) < 2048);
// ********** End Class AVoxelWorld Property Definitions *******************************************
UObject* (*const Z_Construct_UClass_AVoxelWorld_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_AActor,
	(UObject* (*)())Z_Construct_UPackage__Script_MyProject,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_AVoxelWorld_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_AVoxelWorld_Statics::ClassParams = {
	&AVoxelWorld::StaticClass,
	"Engine",
	&StaticCppClassTypeInfo,
	DependentSingletons,
	nullptr,
	Z_Construct_UClass_AVoxelWorld_Statics::PropPointers,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	0,
	UE_ARRAY_COUNT(Z_Construct_UClass_AVoxelWorld_Statics::PropPointers),
	0,
	0x009000A4u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_AVoxelWorld_Statics::Class_MetaDataParams), Z_Construct_UClass_AVoxelWorld_Statics::Class_MetaDataParams)
};
void AVoxelWorld::StaticRegisterNativesAVoxelWorld()
{
}
UClass* Z_Construct_UClass_AVoxelWorld()
{
	if (!Z_Registration_Info_UClass_AVoxelWorld.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_AVoxelWorld.OuterSingleton, Z_Construct_UClass_AVoxelWorld_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_AVoxelWorld.OuterSingleton;
}
DEFINE_VTABLE_PTR_HELPER_CTOR_NS(, AVoxelWorld);
AVoxelWorld::~AVoxelWorld() {}
// ********** End Class AVoxelWorld ****************************************************************

// ********** Begin Registration *******************************************************************
struct Z_CompiledInDeferFile_FID_MyProject_Source_MyProject_Public_VoxelWorld_h__Script_MyProject_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_AVoxelWorld, AVoxelWorld::StaticClass, TEXT("AVoxelWorld"), &Z_Registration_Info_UClass_AVoxelWorld, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(AVoxelWorld), 3806236982U) },
	};
}; // Z_CompiledInDeferFile_FID_MyProject_Source_MyProject_Public_VoxelWorld_h__Script_MyProject_Statics 
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_MyProject_Source_MyProject_Public_VoxelWorld_h__Script_MyProject_3096712763{
	TEXT("/Script/MyProject"),
	Z_CompiledInDeferFile_FID_MyProject_Source_MyProject_Public_VoxelWorld_h__Script_MyProject_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_MyProject_Source_MyProject_Public_VoxelWorld_h__Script_MyProject_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0,
};
// ********** End Registration *********************************************************************

PRAGMA_ENABLE_DEPRECATION_WARNINGS
