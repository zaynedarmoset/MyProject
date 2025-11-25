// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "VoxelChunk.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
static_assert(!UE_WITH_CONSTINIT_UOBJECT, "This generated code can only be compiled with !UE_WITH_CONSTINIT_OBJECT");
void EmptyLinkFunctionForGeneratedCodeVoxelChunk() {}

// ********** Begin Cross Module References ********************************************************
COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FIntVector();
ENGINE_API UClass* Z_Construct_UClass_AActor();
MYPROJECT_API UClass* Z_Construct_UClass_AVoxelChunk();
MYPROJECT_API UClass* Z_Construct_UClass_AVoxelChunk_NoRegister();
PROCEDURALMESHCOMPONENT_API UClass* Z_Construct_UClass_UProceduralMeshComponent_NoRegister();
UPackage* Z_Construct_UPackage__Script_MyProject();
// ********** End Cross Module References **********************************************************

// ********** Begin Class AVoxelChunk Function InitializeChunk *************************************
struct Z_Construct_UFunction_AVoxelChunk_InitializeChunk_Statics
{
	struct VoxelChunk_eventInitializeChunk_Parms
	{
		FIntVector InChunkCoords;
		int32 InCellsPerAxis;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Voxel" },
		{ "ModuleRelativePath", "Public/VoxelChunk.h" },
	};
#endif // WITH_METADATA

// ********** Begin Function InitializeChunk constinit property declarations ***********************
	static const UECodeGen_Private::FStructPropertyParams NewProp_InChunkCoords;
	static const UECodeGen_Private::FIntPropertyParams NewProp_InCellsPerAxis;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
// ********** End Function InitializeChunk constinit property declarations *************************
	static const UECodeGen_Private::FFunctionParams FuncParams;
};

// ********** Begin Function InitializeChunk Property Definitions **********************************
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_AVoxelChunk_InitializeChunk_Statics::NewProp_InChunkCoords = { "InChunkCoords", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(VoxelChunk_eventInitializeChunk_Parms, InChunkCoords), Z_Construct_UScriptStruct_FIntVector, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_AVoxelChunk_InitializeChunk_Statics::NewProp_InCellsPerAxis = { "InCellsPerAxis", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(VoxelChunk_eventInitializeChunk_Parms, InCellsPerAxis), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AVoxelChunk_InitializeChunk_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AVoxelChunk_InitializeChunk_Statics::NewProp_InChunkCoords,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AVoxelChunk_InitializeChunk_Statics::NewProp_InCellsPerAxis,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_AVoxelChunk_InitializeChunk_Statics::PropPointers) < 2048);
// ********** End Function InitializeChunk Property Definitions ************************************
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_AVoxelChunk_InitializeChunk_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_AVoxelChunk, nullptr, "InitializeChunk", 	Z_Construct_UFunction_AVoxelChunk_InitializeChunk_Statics::PropPointers, 
	UE_ARRAY_COUNT(Z_Construct_UFunction_AVoxelChunk_InitializeChunk_Statics::PropPointers), 
sizeof(Z_Construct_UFunction_AVoxelChunk_InitializeChunk_Statics::VoxelChunk_eventInitializeChunk_Parms),
RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04820401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_AVoxelChunk_InitializeChunk_Statics::Function_MetaDataParams), Z_Construct_UFunction_AVoxelChunk_InitializeChunk_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UFunction_AVoxelChunk_InitializeChunk_Statics::VoxelChunk_eventInitializeChunk_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_AVoxelChunk_InitializeChunk()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_AVoxelChunk_InitializeChunk_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(AVoxelChunk::execInitializeChunk)
{
	P_GET_STRUCT(FIntVector,Z_Param_InChunkCoords);
	P_GET_PROPERTY(FIntProperty,Z_Param_InCellsPerAxis);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->InitializeChunk(Z_Param_InChunkCoords,Z_Param_InCellsPerAxis);
	P_NATIVE_END;
}
// ********** End Class AVoxelChunk Function InitializeChunk ***************************************

// ********** Begin Class AVoxelChunk Function UpdateMesh ******************************************
struct Z_Construct_UFunction_AVoxelChunk_UpdateMesh_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Voxel" },
		{ "ModuleRelativePath", "Public/VoxelChunk.h" },
	};
#endif // WITH_METADATA

// ********** Begin Function UpdateMesh constinit property declarations ****************************
// ********** End Function UpdateMesh constinit property declarations ******************************
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_AVoxelChunk_UpdateMesh_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_AVoxelChunk, nullptr, "UpdateMesh", 	nullptr, 
	0, 
0,
RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_AVoxelChunk_UpdateMesh_Statics::Function_MetaDataParams), Z_Construct_UFunction_AVoxelChunk_UpdateMesh_Statics::Function_MetaDataParams)},  };
UFunction* Z_Construct_UFunction_AVoxelChunk_UpdateMesh()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_AVoxelChunk_UpdateMesh_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(AVoxelChunk::execUpdateMesh)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->UpdateMesh();
	P_NATIVE_END;
}
// ********** End Class AVoxelChunk Function UpdateMesh ********************************************

// ********** Begin Class AVoxelChunk **************************************************************
FClassRegistrationInfo Z_Registration_Info_UClass_AVoxelChunk;
UClass* AVoxelChunk::GetPrivateStaticClass()
{
	using TClass = AVoxelChunk;
	if (!Z_Registration_Info_UClass_AVoxelChunk.InnerSingleton)
	{
		GetPrivateStaticClassBody(
			TClass::StaticPackage(),
			TEXT("VoxelChunk"),
			Z_Registration_Info_UClass_AVoxelChunk.InnerSingleton,
			StaticRegisterNativesAVoxelChunk,
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
	return Z_Registration_Info_UClass_AVoxelChunk.InnerSingleton;
}
UClass* Z_Construct_UClass_AVoxelChunk_NoRegister()
{
	return AVoxelChunk::GetPrivateStaticClass();
}
struct Z_Construct_UClass_AVoxelChunk_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "IncludePath", "VoxelChunk.h" },
		{ "ModuleRelativePath", "Public/VoxelChunk.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_MeshComponent_MetaData[] = {
		{ "Category", "Voxel" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/VoxelChunk.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_CellsPerAxis_MetaData[] = {
		{ "Category", "Voxel" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/** Number of cells (cubes) per axis at LOD0. Samples per axis = CellsPerAxis + 1. */" },
#endif
		{ "ModuleRelativePath", "Public/VoxelChunk.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Number of cells (cubes) per axis at LOD0. Samples per axis = CellsPerAxis + 1." },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_VoxelScale_MetaData[] = {
		{ "Category", "Voxel" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/** World size of 1 voxel cell (25 = 25cm, 100 = 1m). */" },
#endif
		{ "ModuleRelativePath", "Public/VoxelChunk.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "World size of 1 voxel cell (25 = 25cm, 100 = 1m)." },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_LodLevel_MetaData[] = {
		{ "Category", "Voxel" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/** LOD level for this chunk (0 = full resolution). */" },
#endif
		{ "ModuleRelativePath", "Public/VoxelChunk.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "LOD level for this chunk (0 = full resolution)." },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_ChunkCoords_MetaData[] = {
		{ "Category", "Voxel" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/** Grid coordinates used to position and seed the chunk. */" },
#endif
		{ "ModuleRelativePath", "Public/VoxelChunk.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Grid coordinates used to position and seed the chunk." },
#endif
	};
#endif // WITH_METADATA

// ********** Begin Class AVoxelChunk constinit property declarations ******************************
	static const UECodeGen_Private::FObjectPropertyParams NewProp_MeshComponent;
	static const UECodeGen_Private::FIntPropertyParams NewProp_CellsPerAxis;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_VoxelScale;
	static const UECodeGen_Private::FIntPropertyParams NewProp_LodLevel;
	static const UECodeGen_Private::FStructPropertyParams NewProp_ChunkCoords;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
// ********** End Class AVoxelChunk constinit property declarations ********************************
	static constexpr UE::CodeGen::FClassNativeFunction Funcs[] = {
		{ .NameUTF8 = UTF8TEXT("InitializeChunk"), .Pointer = &AVoxelChunk::execInitializeChunk },
		{ .NameUTF8 = UTF8TEXT("UpdateMesh"), .Pointer = &AVoxelChunk::execUpdateMesh },
	};
	static UObject* (*const DependentSingletons[])();
	static constexpr FClassFunctionLinkInfo FuncInfo[] = {
		{ &Z_Construct_UFunction_AVoxelChunk_InitializeChunk, "InitializeChunk" }, // 5179170
		{ &Z_Construct_UFunction_AVoxelChunk_UpdateMesh, "UpdateMesh" }, // 2147317422
	};
	static_assert(UE_ARRAY_COUNT(FuncInfo) < 2048);
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<AVoxelChunk>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
}; // struct Z_Construct_UClass_AVoxelChunk_Statics

// ********** Begin Class AVoxelChunk Property Definitions *****************************************
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AVoxelChunk_Statics::NewProp_MeshComponent = { "MeshComponent", nullptr, (EPropertyFlags)0x00100000000a001d, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AVoxelChunk, MeshComponent), Z_Construct_UClass_UProceduralMeshComponent_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_MeshComponent_MetaData), NewProp_MeshComponent_MetaData) };
const UECodeGen_Private::FIntPropertyParams Z_Construct_UClass_AVoxelChunk_Statics::NewProp_CellsPerAxis = { "CellsPerAxis", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AVoxelChunk, CellsPerAxis), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_CellsPerAxis_MetaData), NewProp_CellsPerAxis_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_AVoxelChunk_Statics::NewProp_VoxelScale = { "VoxelScale", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AVoxelChunk, VoxelScale), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_VoxelScale_MetaData), NewProp_VoxelScale_MetaData) };
const UECodeGen_Private::FIntPropertyParams Z_Construct_UClass_AVoxelChunk_Statics::NewProp_LodLevel = { "LodLevel", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AVoxelChunk, LodLevel), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_LodLevel_MetaData), NewProp_LodLevel_MetaData) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_AVoxelChunk_Statics::NewProp_ChunkCoords = { "ChunkCoords", nullptr, (EPropertyFlags)0x0010000000020015, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AVoxelChunk, ChunkCoords), Z_Construct_UScriptStruct_FIntVector, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_ChunkCoords_MetaData), NewProp_ChunkCoords_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_AVoxelChunk_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AVoxelChunk_Statics::NewProp_MeshComponent,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AVoxelChunk_Statics::NewProp_CellsPerAxis,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AVoxelChunk_Statics::NewProp_VoxelScale,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AVoxelChunk_Statics::NewProp_LodLevel,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AVoxelChunk_Statics::NewProp_ChunkCoords,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_AVoxelChunk_Statics::PropPointers) < 2048);
// ********** End Class AVoxelChunk Property Definitions *******************************************
UObject* (*const Z_Construct_UClass_AVoxelChunk_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_AActor,
	(UObject* (*)())Z_Construct_UPackage__Script_MyProject,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_AVoxelChunk_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_AVoxelChunk_Statics::ClassParams = {
	&AVoxelChunk::StaticClass,
	"Engine",
	&StaticCppClassTypeInfo,
	DependentSingletons,
	FuncInfo,
	Z_Construct_UClass_AVoxelChunk_Statics::PropPointers,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	UE_ARRAY_COUNT(FuncInfo),
	UE_ARRAY_COUNT(Z_Construct_UClass_AVoxelChunk_Statics::PropPointers),
	0,
	0x009000A4u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_AVoxelChunk_Statics::Class_MetaDataParams), Z_Construct_UClass_AVoxelChunk_Statics::Class_MetaDataParams)
};
void AVoxelChunk::StaticRegisterNativesAVoxelChunk()
{
	UClass* Class = AVoxelChunk::StaticClass();
	FNativeFunctionRegistrar::RegisterFunctions(Class, MakeConstArrayView(Z_Construct_UClass_AVoxelChunk_Statics::Funcs));
}
UClass* Z_Construct_UClass_AVoxelChunk()
{
	if (!Z_Registration_Info_UClass_AVoxelChunk.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_AVoxelChunk.OuterSingleton, Z_Construct_UClass_AVoxelChunk_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_AVoxelChunk.OuterSingleton;
}
DEFINE_VTABLE_PTR_HELPER_CTOR_NS(, AVoxelChunk);
AVoxelChunk::~AVoxelChunk() {}
// ********** End Class AVoxelChunk ****************************************************************

// ********** Begin Registration *******************************************************************
struct Z_CompiledInDeferFile_FID_MyProject_Source_MyProject_Public_VoxelChunk_h__Script_MyProject_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_AVoxelChunk, AVoxelChunk::StaticClass, TEXT("AVoxelChunk"), &Z_Registration_Info_UClass_AVoxelChunk, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(AVoxelChunk), 1922945730U) },
	};
}; // Z_CompiledInDeferFile_FID_MyProject_Source_MyProject_Public_VoxelChunk_h__Script_MyProject_Statics 
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_MyProject_Source_MyProject_Public_VoxelChunk_h__Script_MyProject_359507105{
	TEXT("/Script/MyProject"),
	Z_CompiledInDeferFile_FID_MyProject_Source_MyProject_Public_VoxelChunk_h__Script_MyProject_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_MyProject_Source_MyProject_Public_VoxelChunk_h__Script_MyProject_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0,
};
// ********** End Registration *********************************************************************

PRAGMA_ENABLE_DEPRECATION_WARNINGS
