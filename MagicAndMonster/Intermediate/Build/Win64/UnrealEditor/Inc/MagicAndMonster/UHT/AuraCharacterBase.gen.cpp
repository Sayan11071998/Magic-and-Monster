// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "MagicAndMonster/Public/AuraCharacterBase.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeAuraCharacterBase() {}

// Begin Cross Module References
ENGINE_API UClass* Z_Construct_UClass_ACharacter();
MAGICANDMONSTER_API UClass* Z_Construct_UClass_AAuraCharacterBase();
MAGICANDMONSTER_API UClass* Z_Construct_UClass_AAuraCharacterBase_NoRegister();
UPackage* Z_Construct_UPackage__Script_MagicAndMonster();
// End Cross Module References

// Begin Class AAuraCharacterBase
void AAuraCharacterBase::StaticRegisterNativesAAuraCharacterBase()
{
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(AAuraCharacterBase);
UClass* Z_Construct_UClass_AAuraCharacterBase_NoRegister()
{
	return AAuraCharacterBase::StaticClass();
}
struct Z_Construct_UClass_AAuraCharacterBase_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "HideCategories", "Navigation" },
		{ "IncludePath", "AuraCharacterBase.h" },
		{ "ModuleRelativePath", "Public/AuraCharacterBase.h" },
	};
#endif // WITH_METADATA
	static UObject* (*const DependentSingletons[])();
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<AAuraCharacterBase>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
UObject* (*const Z_Construct_UClass_AAuraCharacterBase_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_ACharacter,
	(UObject* (*)())Z_Construct_UPackage__Script_MagicAndMonster,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_AAuraCharacterBase_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_AAuraCharacterBase_Statics::ClassParams = {
	&AAuraCharacterBase::StaticClass,
	"Game",
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
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_AAuraCharacterBase_Statics::Class_MetaDataParams), Z_Construct_UClass_AAuraCharacterBase_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_AAuraCharacterBase()
{
	if (!Z_Registration_Info_UClass_AAuraCharacterBase.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_AAuraCharacterBase.OuterSingleton, Z_Construct_UClass_AAuraCharacterBase_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_AAuraCharacterBase.OuterSingleton;
}
template<> MAGICANDMONSTER_API UClass* StaticClass<AAuraCharacterBase>()
{
	return AAuraCharacterBase::StaticClass();
}
DEFINE_VTABLE_PTR_HELPER_CTOR(AAuraCharacterBase);
AAuraCharacterBase::~AAuraCharacterBase() {}
// End Class AAuraCharacterBase

// Begin Registration
struct Z_CompiledInDeferFile_FID_Users_sayan_Projects_Magic_and_Monster_MagicAndMonster_Source_MagicAndMonster_Public_AuraCharacterBase_h_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_AAuraCharacterBase, AAuraCharacterBase::StaticClass, TEXT("AAuraCharacterBase"), &Z_Registration_Info_UClass_AAuraCharacterBase, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(AAuraCharacterBase), 3429536035U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Users_sayan_Projects_Magic_and_Monster_MagicAndMonster_Source_MagicAndMonster_Public_AuraCharacterBase_h_3535138693(TEXT("/Script/MagicAndMonster"),
	Z_CompiledInDeferFile_FID_Users_sayan_Projects_Magic_and_Monster_MagicAndMonster_Source_MagicAndMonster_Public_AuraCharacterBase_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Users_sayan_Projects_Magic_and_Monster_MagicAndMonster_Source_MagicAndMonster_Public_AuraCharacterBase_h_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
