// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "aKMcontrol/SourceActor.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeSourceActor() {}

// Begin Cross Module References
AKMCONTROL_API UClass* Z_Construct_UClass_ASourceActor();
AKMCONTROL_API UClass* Z_Construct_UClass_ASourceActor_NoRegister();
ENGINE_API UClass* Z_Construct_UClass_AActor();
UPackage* Z_Construct_UPackage__Script_aKMcontrol();
// End Cross Module References

// Begin Class ASourceActor Function GetName
struct Z_Construct_UFunction_ASourceActor_GetName_Statics
{
	struct SourceActor_eventGetName_Parms
	{
		FString ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Getters" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "// Getter Functions\n" },
#endif
		{ "ModuleRelativePath", "SourceActor.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Getter Functions" },
#endif
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStrPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_ASourceActor_GetName_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(SourceActor_eventGetName_Parms, ReturnValue), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_ASourceActor_GetName_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ASourceActor_GetName_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_ASourceActor_GetName_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_ASourceActor_GetName_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ASourceActor, nullptr, "GetName", nullptr, nullptr, Z_Construct_UFunction_ASourceActor_GetName_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_ASourceActor_GetName_Statics::PropPointers), sizeof(Z_Construct_UFunction_ASourceActor_GetName_Statics::SourceActor_eventGetName_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_ASourceActor_GetName_Statics::Function_MetaDataParams), Z_Construct_UFunction_ASourceActor_GetName_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_ASourceActor_GetName_Statics::SourceActor_eventGetName_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_ASourceActor_GetName()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_ASourceActor_GetName_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(ASourceActor::execGetName)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	*(FString*)Z_Param__Result=P_THIS->GetName();
	P_NATIVE_END;
}
// End Class ASourceActor Function GetName

// Begin Class ASourceActor
void ASourceActor::StaticRegisterNativesASourceActor()
{
	UClass* Class = ASourceActor::StaticClass();
	static const FNameNativePtrPair Funcs[] = {
		{ "GetName", &ASourceActor::execGetName },
	};
	FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(ASourceActor);
UClass* Z_Construct_UClass_ASourceActor_NoRegister()
{
	return ASourceActor::StaticClass();
}
struct Z_Construct_UClass_ASourceActor_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "IncludePath", "SourceActor.h" },
		{ "ModuleRelativePath", "SourceActor.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Name_MetaData[] = {
		{ "Category", "Settings" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "// Variables\n" },
#endif
		{ "ModuleRelativePath", "SourceActor.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Variables" },
#endif
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStrPropertyParams NewProp_Name;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static UObject* (*const DependentSingletons[])();
	static constexpr FClassFunctionLinkInfo FuncInfo[] = {
		{ &Z_Construct_UFunction_ASourceActor_GetName, "GetName" }, // 2538657164
	};
	static_assert(UE_ARRAY_COUNT(FuncInfo) < 2048);
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<ASourceActor>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
const UECodeGen_Private::FStrPropertyParams Z_Construct_UClass_ASourceActor_Statics::NewProp_Name = { "Name", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ASourceActor, Name), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Name_MetaData), NewProp_Name_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_ASourceActor_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ASourceActor_Statics::NewProp_Name,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_ASourceActor_Statics::PropPointers) < 2048);
UObject* (*const Z_Construct_UClass_ASourceActor_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_AActor,
	(UObject* (*)())Z_Construct_UPackage__Script_aKMcontrol,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_ASourceActor_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_ASourceActor_Statics::ClassParams = {
	&ASourceActor::StaticClass,
	"Engine",
	&StaticCppClassTypeInfo,
	DependentSingletons,
	FuncInfo,
	Z_Construct_UClass_ASourceActor_Statics::PropPointers,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	UE_ARRAY_COUNT(FuncInfo),
	UE_ARRAY_COUNT(Z_Construct_UClass_ASourceActor_Statics::PropPointers),
	0,
	0x009000A4u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_ASourceActor_Statics::Class_MetaDataParams), Z_Construct_UClass_ASourceActor_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_ASourceActor()
{
	if (!Z_Registration_Info_UClass_ASourceActor.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_ASourceActor.OuterSingleton, Z_Construct_UClass_ASourceActor_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_ASourceActor.OuterSingleton;
}
template<> AKMCONTROL_API UClass* StaticClass<ASourceActor>()
{
	return ASourceActor::StaticClass();
}
DEFINE_VTABLE_PTR_HELPER_CTOR(ASourceActor);
ASourceActor::~ASourceActor() {}
// End Class ASourceActor

// Begin Registration
struct Z_CompiledInDeferFile_FID_Users_nicol_Documents_aKMdev_akm_control_UE_aKMcontrol_Source_aKMcontrol_SourceActor_h_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_ASourceActor, ASourceActor::StaticClass, TEXT("ASourceActor"), &Z_Registration_Info_UClass_ASourceActor, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(ASourceActor), 2613959370U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Users_nicol_Documents_aKMdev_akm_control_UE_aKMcontrol_Source_aKMcontrol_SourceActor_h_1914068184(TEXT("/Script/aKMcontrol"),
	Z_CompiledInDeferFile_FID_Users_nicol_Documents_aKMdev_akm_control_UE_aKMcontrol_Source_aKMcontrol_SourceActor_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Users_nicol_Documents_aKMdev_akm_control_UE_aKMcontrol_Source_aKMcontrol_SourceActor_h_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
