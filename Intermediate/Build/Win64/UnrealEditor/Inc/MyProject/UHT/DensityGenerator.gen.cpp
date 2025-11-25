// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "DensityGenerator.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
static_assert(!UE_WITH_CONSTINIT_UOBJECT, "This generated code can only be compiled with !UE_WITH_CONSTINIT_OBJECT");
void EmptyLinkFunctionForGeneratedCodeDensityGenerator() {}

// ********** Begin Cross Module References ********************************************************
COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FVector();
ENGINE_API UClass* Z_Construct_UClass_UBlueprintFunctionLibrary();
MYPROJECT_API UClass* Z_Construct_UClass_UDensityGenerator();
MYPROJECT_API UClass* Z_Construct_UClass_UDensityGenerator_NoRegister();
UPackage* Z_Construct_UPackage__Script_MyProject();
// ********** End Cross Module References **********************************************************

// ********** Begin Class UDensityGenerator Function SampleDensity *********************************
struct Z_Construct_UFunction_UDensityGenerator_SampleDensity_Statics
{
	struct DensityGenerator_eventSampleDensity_Parms
	{
		FVector WorldPos;
		int32 LodLevel;
		float ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Voxel" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/** Returns density at a world position.\n     *  density < 0  = inside solid\n     *  density = 0  = surface\n     *  density > 0  = empty air\n     */" },
#endif
		{ "CPP_Default_LodLevel", "0" },
		{ "ModuleRelativePath", "Public/DensityGenerator.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Returns density at a world position.\ndensity < 0  = inside solid\ndensity = 0  = surface\ndensity > 0  = empty air" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_WorldPos_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif // WITH_METADATA

// ********** Begin Function SampleDensity constinit property declarations *************************
	static const UECodeGen_Private::FStructPropertyParams NewProp_WorldPos;
	static const UECodeGen_Private::FIntPropertyParams NewProp_LodLevel;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
// ********** End Function SampleDensity constinit property declarations ***************************
	static const UECodeGen_Private::FFunctionParams FuncParams;
};

// ********** Begin Function SampleDensity Property Definitions ************************************
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UDensityGenerator_SampleDensity_Statics::NewProp_WorldPos = { "WorldPos", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(DensityGenerator_eventSampleDensity_Parms, WorldPos), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_WorldPos_MetaData), NewProp_WorldPos_MetaData) };
const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UDensityGenerator_SampleDensity_Statics::NewProp_LodLevel = { "LodLevel", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(DensityGenerator_eventSampleDensity_Parms, LodLevel), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UDensityGenerator_SampleDensity_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(DensityGenerator_eventSampleDensity_Parms, ReturnValue), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UDensityGenerator_SampleDensity_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UDensityGenerator_SampleDensity_Statics::NewProp_WorldPos,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UDensityGenerator_SampleDensity_Statics::NewProp_LodLevel,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UDensityGenerator_SampleDensity_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UDensityGenerator_SampleDensity_Statics::PropPointers) < 2048);
// ********** End Function SampleDensity Property Definitions **************************************
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UDensityGenerator_SampleDensity_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_UDensityGenerator, nullptr, "SampleDensity", 	Z_Construct_UFunction_UDensityGenerator_SampleDensity_Statics::PropPointers, 
	UE_ARRAY_COUNT(Z_Construct_UFunction_UDensityGenerator_SampleDensity_Statics::PropPointers), 
sizeof(Z_Construct_UFunction_UDensityGenerator_SampleDensity_Statics::DensityGenerator_eventSampleDensity_Parms),
RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04C22401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UDensityGenerator_SampleDensity_Statics::Function_MetaDataParams), Z_Construct_UFunction_UDensityGenerator_SampleDensity_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UFunction_UDensityGenerator_SampleDensity_Statics::DensityGenerator_eventSampleDensity_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UDensityGenerator_SampleDensity()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UDensityGenerator_SampleDensity_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UDensityGenerator::execSampleDensity)
{
	P_GET_STRUCT_REF(FVector,Z_Param_Out_WorldPos);
	P_GET_PROPERTY(FIntProperty,Z_Param_LodLevel);
	P_FINISH;
	P_NATIVE_BEGIN;
	*(float*)Z_Param__Result=UDensityGenerator::SampleDensity(Z_Param_Out_WorldPos,Z_Param_LodLevel);
	P_NATIVE_END;
}
// ********** End Class UDensityGenerator Function SampleDensity ***********************************

// ********** Begin Class UDensityGenerator ********************************************************
FClassRegistrationInfo Z_Registration_Info_UClass_UDensityGenerator;
UClass* UDensityGenerator::GetPrivateStaticClass()
{
	using TClass = UDensityGenerator;
	if (!Z_Registration_Info_UClass_UDensityGenerator.InnerSingleton)
	{
		GetPrivateStaticClassBody(
			TClass::StaticPackage(),
			TEXT("DensityGenerator"),
			Z_Registration_Info_UClass_UDensityGenerator.InnerSingleton,
			StaticRegisterNativesUDensityGenerator,
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
	return Z_Registration_Info_UClass_UDensityGenerator.InnerSingleton;
}
UClass* Z_Construct_UClass_UDensityGenerator_NoRegister()
{
	return UDensityGenerator::GetPrivateStaticClass();
}
struct Z_Construct_UClass_UDensityGenerator_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "IncludePath", "DensityGenerator.h" },
		{ "ModuleRelativePath", "Public/DensityGenerator.h" },
	};
#endif // WITH_METADATA

// ********** Begin Class UDensityGenerator constinit property declarations ************************
// ********** End Class UDensityGenerator constinit property declarations **************************
	static constexpr UE::CodeGen::FClassNativeFunction Funcs[] = {
		{ .NameUTF8 = UTF8TEXT("SampleDensity"), .Pointer = &UDensityGenerator::execSampleDensity },
	};
	static UObject* (*const DependentSingletons[])();
	static constexpr FClassFunctionLinkInfo FuncInfo[] = {
		{ &Z_Construct_UFunction_UDensityGenerator_SampleDensity, "SampleDensity" }, // 568258674
	};
	static_assert(UE_ARRAY_COUNT(FuncInfo) < 2048);
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UDensityGenerator>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
}; // struct Z_Construct_UClass_UDensityGenerator_Statics
UObject* (*const Z_Construct_UClass_UDensityGenerator_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UBlueprintFunctionLibrary,
	(UObject* (*)())Z_Construct_UPackage__Script_MyProject,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UDensityGenerator_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_UDensityGenerator_Statics::ClassParams = {
	&UDensityGenerator::StaticClass,
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
	0x001000A0u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UDensityGenerator_Statics::Class_MetaDataParams), Z_Construct_UClass_UDensityGenerator_Statics::Class_MetaDataParams)
};
void UDensityGenerator::StaticRegisterNativesUDensityGenerator()
{
	UClass* Class = UDensityGenerator::StaticClass();
	FNativeFunctionRegistrar::RegisterFunctions(Class, MakeConstArrayView(Z_Construct_UClass_UDensityGenerator_Statics::Funcs));
}
UClass* Z_Construct_UClass_UDensityGenerator()
{
	if (!Z_Registration_Info_UClass_UDensityGenerator.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UDensityGenerator.OuterSingleton, Z_Construct_UClass_UDensityGenerator_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_UDensityGenerator.OuterSingleton;
}
UDensityGenerator::UDensityGenerator(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
DEFINE_VTABLE_PTR_HELPER_CTOR_NS(, UDensityGenerator);
UDensityGenerator::~UDensityGenerator() {}
// ********** End Class UDensityGenerator **********************************************************

// ********** Begin Registration *******************************************************************
struct Z_CompiledInDeferFile_FID_MyProject_Source_MyProject_Public_DensityGenerator_h__Script_MyProject_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_UDensityGenerator, UDensityGenerator::StaticClass, TEXT("UDensityGenerator"), &Z_Registration_Info_UClass_UDensityGenerator, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UDensityGenerator), 3051774363U) },
	};
}; // Z_CompiledInDeferFile_FID_MyProject_Source_MyProject_Public_DensityGenerator_h__Script_MyProject_Statics 
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_MyProject_Source_MyProject_Public_DensityGenerator_h__Script_MyProject_3257389162{
	TEXT("/Script/MyProject"),
	Z_CompiledInDeferFile_FID_MyProject_Source_MyProject_Public_DensityGenerator_h__Script_MyProject_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_MyProject_Source_MyProject_Public_DensityGenerator_h__Script_MyProject_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0,
};
// ********** End Registration *********************************************************************

PRAGMA_ENABLE_DEPRECATION_WARNINGS
