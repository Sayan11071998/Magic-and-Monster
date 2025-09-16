// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "MagicAndMonster/Public/AbilitySystem/AuraAttributeSet.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeAuraAttributeSet() {}

// Begin Cross Module References
GAMEPLAYABILITIES_API UClass* Z_Construct_UClass_UAttributeSet();
MAGICANDMONSTER_API UClass* Z_Construct_UClass_UAuraAttributeSet();
MAGICANDMONSTER_API UClass* Z_Construct_UClass_UAuraAttributeSet_NoRegister();
UPackage* Z_Construct_UPackage__Script_MagicAndMonster();
// End Cross Module References

// Begin Class UAuraAttributeSet
void UAuraAttributeSet::StaticRegisterNativesUAuraAttributeSet()
{
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UAuraAttributeSet);
UClass* Z_Construct_UClass_UAuraAttributeSet_NoRegister()
{
	return UAuraAttributeSet::StaticClass();
}
struct Z_Construct_UClass_UAuraAttributeSet_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "IncludePath", "AbilitySystem/AuraAttributeSet.h" },
		{ "ModuleRelativePath", "Public/AbilitySystem/AuraAttributeSet.h" },
	};
#endif // WITH_METADATA
	static UObject* (*const DependentSingletons[])();
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UAuraAttributeSet>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
UObject* (*const Z_Construct_UClass_UAuraAttributeSet_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UAttributeSet,
	(UObject* (*)())Z_Construct_UPackage__Script_MagicAndMonster,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UAuraAttributeSet_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_UAuraAttributeSet_Statics::ClassParams = {
	&UAuraAttributeSet::StaticClass,
	nullptr,
	&StaticCppClassTypeInfo,
	DependentSingletons,
	nullptr,
	nullptr,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	0,
	0,
	0,
	0x003000A0u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UAuraAttributeSet_Statics::Class_MetaDataParams), Z_Construct_UClass_UAuraAttributeSet_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_UAuraAttributeSet()
{
	if (!Z_Registration_Info_UClass_UAuraAttributeSet.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UAuraAttributeSet.OuterSingleton, Z_Construct_UClass_UAuraAttributeSet_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_UAuraAttributeSet.OuterSingleton;
}
template<> MAGICANDMONSTER_API UClass* StaticClass<UAuraAttributeSet>()
{
	return UAuraAttributeSet::StaticClass();
}
UAuraAttributeSet::UAuraAttributeSet(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
DEFINE_VTABLE_PTR_HELPER_CTOR(UAuraAttributeSet);
UAuraAttributeSet::~UAuraAttributeSet() {}
// End Class UAuraAttributeSet

// Begin Registration
struct Z_CompiledInDeferFile_FID_Users_sayan_Projects_Magic_and_Monster_MagicAndMonster_Source_MagicAndMonster_Public_AbilitySystem_AuraAttributeSet_h_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_UAuraAttributeSet, UAuraAttributeSet::StaticClass, TEXT("UAuraAttributeSet"), &Z_Registration_Info_UClass_UAuraAttributeSet, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UAuraAttributeSet), 1780446003U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Users_sayan_Projects_Magic_and_Monster_MagicAndMonster_Source_MagicAndMonster_Public_AbilitySystem_AuraAttributeSet_h_3277571056(TEXT("/Script/MagicAndMonster"),
	Z_CompiledInDeferFile_FID_Users_sayan_Projects_Magic_and_Monster_MagicAndMonster_Source_MagicAndMonster_Public_AbilitySystem_AuraAttributeSet_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Users_sayan_Projects_Magic_and_Monster_MagicAndMonster_Source_MagicAndMonster_Public_AbilitySystem_AuraAttributeSet_h_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
