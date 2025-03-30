// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "aKMcontrol/Public/ImGUIActor.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeImGUIActor() {}

// Begin Cross Module References
AKMCONTROL_API UClass* Z_Construct_UClass_AImGUIActor();
AKMCONTROL_API UClass* Z_Construct_UClass_AImGUIActor_NoRegister();
ENGINE_API UClass* Z_Construct_UClass_AActor();
UPackage* Z_Construct_UPackage__Script_aKMcontrol();
// End Cross Module References

// Begin Class AImGUIActor
void AImGUIActor::StaticRegisterNativesAImGUIActor()
{
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(AImGUIActor);
UClass* Z_Construct_UClass_AImGUIActor_NoRegister()
{
	return AImGUIActor::StaticClass();
}
struct Z_Construct_UClass_AImGUIActor_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "IncludePath", "ImGUIActor.h" },
		{ "ModuleRelativePath", "Public/ImGUIActor.h" },
	};
#endif // WITH_METADATA
	static UObject* (*const DependentSingletons[])();
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<AImGUIActor>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
UObject* (*const Z_Construct_UClass_AImGUIActor_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_AActor,
	(UObject* (*)())Z_Construct_UPackage__Script_aKMcontrol,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_AImGUIActor_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_AImGUIActor_Statics::ClassParams = {
	&AImGUIActor::StaticClass,
	"Engine",
	&StaticCppClassTypeInfo,
	DependentSingletons,
	nullptr,
	nullptr,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	0,
	0,
	0,
	0x009000A4u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_AImGUIActor_Statics::Class_MetaDataParams), Z_Construct_UClass_AImGUIActor_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_AImGUIActor()
{
	if (!Z_Registration_Info_UClass_AImGUIActor.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_AImGUIActor.OuterSingleton, Z_Construct_UClass_AImGUIActor_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_AImGUIActor.OuterSingleton;
}
template<> AKMCONTROL_API UClass* StaticClass<AImGUIActor>()
{
	return AImGUIActor::StaticClass();
}
DEFINE_VTABLE_PTR_HELPER_CTOR(AImGUIActor);
AImGUIActor::~AImGUIActor() {}
// End Class AImGUIActor

// Begin Registration
struct Z_CompiledInDeferFile_FID_Users_nicol_Documents_aKMdev_akm_control_UE_aKMcontrol_Source_aKMcontrol_Public_ImGUIActor_h_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_AImGUIActor, AImGUIActor::StaticClass, TEXT("AImGUIActor"), &Z_Registration_Info_UClass_AImGUIActor, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(AImGUIActor), 3393559521U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Users_nicol_Documents_aKMdev_akm_control_UE_aKMcontrol_Source_aKMcontrol_Public_ImGUIActor_h_2110383412(TEXT("/Script/aKMcontrol"),
	Z_CompiledInDeferFile_FID_Users_nicol_Documents_aKMdev_akm_control_UE_aKMcontrol_Source_aKMcontrol_Public_ImGUIActor_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Users_nicol_Documents_aKMdev_akm_control_UE_aKMcontrol_Source_aKMcontrol_Public_ImGUIActor_h_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
