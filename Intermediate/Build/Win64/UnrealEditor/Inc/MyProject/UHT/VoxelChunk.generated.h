// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "VoxelChunk.h"

#ifdef MYPROJECT_VoxelChunk_generated_h
#error "VoxelChunk.generated.h already included, missing '#pragma once' in VoxelChunk.h"
#endif
#define MYPROJECT_VoxelChunk_generated_h

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS

// ********** Begin Class AVoxelChunk **************************************************************
#define FID_MyProject_Source_MyProject_Public_VoxelChunk_h_13_RPC_WRAPPERS_NO_PURE_DECLS \
	DECLARE_FUNCTION(execUpdateMesh); \
	DECLARE_FUNCTION(execInitializeChunk);


struct Z_Construct_UClass_AVoxelChunk_Statics;
MYPROJECT_API UClass* Z_Construct_UClass_AVoxelChunk_NoRegister();

#define FID_MyProject_Source_MyProject_Public_VoxelChunk_h_13_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesAVoxelChunk(); \
	friend struct ::Z_Construct_UClass_AVoxelChunk_Statics; \
	static UClass* GetPrivateStaticClass(); \
	friend MYPROJECT_API UClass* ::Z_Construct_UClass_AVoxelChunk_NoRegister(); \
public: \
	DECLARE_CLASS2(AVoxelChunk, AActor, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/MyProject"), Z_Construct_UClass_AVoxelChunk_NoRegister) \
	DECLARE_SERIALIZER(AVoxelChunk)


#define FID_MyProject_Source_MyProject_Public_VoxelChunk_h_13_ENHANCED_CONSTRUCTORS \
	/** Deleted move- and copy-constructors, should never be used */ \
	AVoxelChunk(AVoxelChunk&&) = delete; \
	AVoxelChunk(const AVoxelChunk&) = delete; \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, AVoxelChunk); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(AVoxelChunk); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(AVoxelChunk) \
	NO_API virtual ~AVoxelChunk();


#define FID_MyProject_Source_MyProject_Public_VoxelChunk_h_10_PROLOG
#define FID_MyProject_Source_MyProject_Public_VoxelChunk_h_13_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_MyProject_Source_MyProject_Public_VoxelChunk_h_13_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_MyProject_Source_MyProject_Public_VoxelChunk_h_13_INCLASS_NO_PURE_DECLS \
	FID_MyProject_Source_MyProject_Public_VoxelChunk_h_13_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


class AVoxelChunk;

// ********** End Class AVoxelChunk ****************************************************************

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_MyProject_Source_MyProject_Public_VoxelChunk_h

PRAGMA_ENABLE_DEPRECATION_WARNINGS
