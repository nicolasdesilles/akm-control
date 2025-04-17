// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "aKMcontrol/ImGuiActor.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeImGuiActor() {}

// Begin Cross Module References
AKMCONTROL_API UClass* Z_Construct_UClass_AImGuiActor();
AKMCONTROL_API UClass* Z_Construct_UClass_AImGuiActor_NoRegister();
ENGINE_API UClass* Z_Construct_UClass_AActor();
UPackage* Z_Construct_UPackage__Script_aKMcontrol();
// End Cross Module References

// Begin Class AImGuiActor Function ToggleImGuiInput
struct Z_Construct_UFunction_AImGuiActor_ToggleImGuiInput_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "ImGuiActor.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_AImGuiActor_ToggleImGuiInput_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AImGuiActor, nullptr, "ToggleImGuiInput", nullptr, nullptr, nullptr, 0, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_AImGuiActor_ToggleImGuiInput_Statics::Function_MetaDataParams), Z_Construct_UFunction_AImGuiActor_ToggleImGuiInput_Statics::Function_MetaDataParams) };
UFunction* Z_Construct_UFunction_AImGuiActor_ToggleImGuiInput()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_AImGuiActor_ToggleImGuiInput_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(AImGuiActor::execToggleImGuiInput)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	AImGuiActor::ToggleImGuiInput();
	P_NATIVE_END;
}
// End Class AImGuiActor Function ToggleImGuiInput

// Begin Class AImGuiActor
void AImGuiActor::StaticRegisterNativesAImGuiActor()
{
	UClass* Class = AImGuiActor::StaticClass();
	static const FNameNativePtrPair Funcs[] = {
		{ "ToggleImGuiInput", &AImGuiActor::execToggleImGuiInput },
	};
	FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(AImGuiActor);
UClass* Z_Construct_UClass_AImGuiActor_NoRegister()
{
	return AImGuiActor::StaticClass();
}
struct Z_Construct_UClass_AImGuiActor_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "IncludePath", "ImGuiActor.h" },
		{ "ModuleRelativePath", "ImGuiActor.h" },
	};
#endif // WITH_METADATA
	static UObject* (*const DependentSingletons[])();
	static constexpr FClassFunctionLinkInfo FuncInfo[] = {
		{ &Z_Construct_UFunction_AImGuiActor_ToggleImGuiInput, "ToggleImGuiInput" }, // 163431947
	};
	static_assert(UE_ARRAY_COUNT(FuncInfo) < 2048);
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<AImGuiActor>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
UObject* (*const Z_Construct_UClass_AImGuiActor_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_AActor,
	(UObject* (*)())Z_Construct_UPackage__Script_aKMcontrol,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_AImGuiActor_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_AImGuiActor_Statics::ClassParams = {
	&AImGuiActor::StaticClass,
	"Engine",
	&StaticCppClassTypeInfo,
	DependentSingletons,
	FuncInfo,
	nullptr,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	UE_ARRAY_COUNT(FuncInfo),
	0,
	0,
	0x009000A4u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_AImGuiActor_Statics::Class_MetaDataParams), Z_Construct_UClass_AImGuiActor_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_AImGuiActor()
{
	if (!Z_Registration_Info_UClass_AImGuiActor.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_AImGuiActor.OuterSingleton, Z_Construct_UClass_AImGuiActor_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_AImGuiActor.OuterSingleton;
}
template<> AKMCONTROL_API UClass* StaticClass<AImGuiActor>()
{
	return AImGuiActor::StaticClass();
}
DEFINE_VTABLE_PTR_HELPER_CTOR(AImGuiActor);
AImGuiActor::~AImGuiActor() {}
// End Class AImGuiActor

// Begin Registration
struct Z_CompiledInDeferFile_FID_Users_nicol_Documents_aKMdev_akm_control_UE_aKMcontrol_Source_aKMcontrol_ImGuiActor_h_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_AImGuiActor, AImGuiActor::StaticClass, TEXT("AImGuiActor"), &Z_Registration_Info_UClass_AImGuiActor, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(AImGuiActor), 1039998903U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Users_nicol_Documents_aKMdev_akm_control_UE_aKMcontrol_Source_aKMcontrol_ImGuiActor_h_3849597079(TEXT("/Script/aKMcontrol"),
	Z_CompiledInDeferFile_FID_Users_nicol_Documents_aKMdev_akm_control_UE_aKMcontrol_Source_aKMcontrol_ImGuiActor_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Users_nicol_Documents_aKMdev_akm_control_UE_aKMcontrol_Source_aKMcontrol_ImGuiActor_h_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
