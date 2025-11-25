// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "DensityGenerator.h"

#ifdef MYPROJECT_DensityGenerator_generated_h
#error "DensityGenerator.generated.h already included, missing '#pragma once' in DensityGenerator.h"
#endif
#define MYPROJECT_DensityGenerator_generated_h

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS

// ********** Begin Class UDensityGenerator ********************************************************
#define FID_MyProject_Source_MyProject_Public_DensityGenerator_h_10_RPC_WRAPPERS_NO_PURE_DECLS \
	DECLARE_FUNCTION(execSampleDensity);


struct Z_Construct_UClass_UDensityGenerator_Statics;
MYPROJECT_API UClass* Z_Construct_UClass_UDensityGenerator_NoRegister();

#define FID_MyProject_Source_MyProject_Public_DensityGenerator_h_10_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUDensityGenerator(); \
	friend struct ::Z_Construct_UClass_UDensityGenerator_Statics; \
	static UClass* GetPrivateStaticClass(); \
	friend MYPROJECT_API UClass* ::Z_Construct_UClass_UDensityGenerator_NoRegister(); \
public: \
	DECLARE_CLASS2(UDensityGenerator, UBlueprintFunctionLibrary, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/MyProject"), Z_Construct_UClass_UDensityGenerator_NoRegister) \
	DECLARE_SERIALIZER(UDensityGenerator)


#define FID_MyProject_Source_MyProject_Public_DensityGenerator_h_10_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UDensityGenerator(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	/** Deleted move- and copy-constructors, should never be used */ \
	UDensityGenerator(UDensityGenerator&&) = delete; \
	UDensityGenerator(const UDensityGenerator&) = delete; \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UDensityGenerator); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UDensityGenerator); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UDensityGenerator) \
	NO_API virtual ~UDensityGenerator();


#define FID_MyProject_Source_MyProject_Public_DensityGenerator_h_7_PROLOG
#define FID_MyProject_Source_MyProject_Public_DensityGenerator_h_10_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_MyProject_Source_MyProject_Public_DensityGenerator_h_10_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_MyProject_Source_MyProject_Public_DensityGenerator_h_10_INCLASS_NO_PURE_DECLS \
	FID_MyProject_Source_MyProject_Public_DensityGenerator_h_10_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


class UDensityGenerator;

// ********** End Class UDensityGenerator **********************************************************

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_MyProject_Source_MyProject_Public_DensityGenerator_h

PRAGMA_ENABLE_DEPRECATION_WARNINGS
