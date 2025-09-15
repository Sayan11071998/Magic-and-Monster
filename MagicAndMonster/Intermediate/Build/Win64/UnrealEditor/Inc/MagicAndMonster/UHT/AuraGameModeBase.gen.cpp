// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "MagicAndMonster/Public/Game/AuraGameModeBase.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeAuraGameModeBase() {}

// Begin Cross Module References
ENGINE_API UClass* Z_Construct_UClass_AGameModeBase();
MAGICANDMONSTER_API UClass* Z_Construct_UClass_AAuraGameModeBase();
MAGICANDMONSTER_API UClass* Z_Construct_UClass_AAuraGameModeBase_NoRegister();
UPackage* Z_Construct_UPackage__Script_MagicAndMonster();
// End Cross Module References

// Begin Class AAuraGameModeBase
void AAuraGameModeBase::StaticRegisterNativesAAuraGameModeBase()
{
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(AAuraGameModeBase);
UClass* Z_Construct_UClass_AAuraGameModeBase_NoRegister()
{
	return AAuraGameModeBase::StaticClass();
}
struct Z_Construct_UClass_AAuraGameModeBase_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "HideCategories", "Info Rendering MovementReplication Replication Actor Input Movement Collision Rendering HLOD WorldPartition DataLayers Transformation" },
		{ "IncludePath", "Game/AuraGameModeBase.h" },
		{ "ModuleRelativePath", "Public/Game/AuraGameModeBase.h" },
		{ "ShowCategories", "Input|MouseInput Input|TouchInput" },
	};
#endif // WITH_METADATA
	static UObject* (*const DependentSingletons[])();
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<AAuraGameModeBase>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
UObject* (*const Z_Construct_UClass_AAuraGameModeBase_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_AGameModeBase,
	(UObject* (*)())Z_Construct_UPackage__Script_MagicAndMonster,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_AAuraGameModeBase_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_AAuraGameModeBase_Statics::ClassParams = {
	&AAuraGameModeBase::StaticClass,
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
	0x009002ACu,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_AAuraGameModeBase_Statics::Class_MetaDataParams), Z_Construct_UClass_AAuraGameModeBase_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_AAuraGameModeBase()
{
	if (!Z_Registration_Info_UClass_AAuraGameModeBase.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_AAuraGameModeBase.OuterSingleton, Z_Construct_UClass_AAuraGameModeBase_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_AAuraGameModeBase.OuterSingleton;
}
template<> MAGICANDMONSTER_API UClass* StaticClass<AAuraGameModeBase>()
{
	return AAuraGameModeBase::StaticClass();
}
AAuraGameModeBase::AAuraGameModeBase(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
DEFINE_VTABLE_PTR_HELPER_CTOR(AAuraGameModeBase);
AAuraGameModeBase::~AAuraGameModeBase() {}
// End Class AAuraGameModeBase

// Begin Registration
struct Z_CompiledInDeferFile_FID_Users_sayan_Projects_Magic_and_Monster_MagicAndMonster_Source_MagicAndMonster_Public_Game_AuraGameModeBase_h_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_AAuraGameModeBase, AAuraGameModeBase::StaticClass, TEXT("AAuraGameModeBase"), &Z_Registration_Info_UClass_AAuraGameModeBase, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(AAuraGameModeBase), 3207691763U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Users_sayan_Projects_Magic_and_Monster_MagicAndMonster_Source_MagicAndMonster_Public_Game_AuraGameModeBase_h_1788883775(TEXT("/Script/MagicAndMonster"),
	Z_CompiledInDeferFile_FID_Users_sayan_Projects_Magic_and_Monster_MagicAndMonster_Source_MagicAndMonster_Public_Game_AuraGameModeBase_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Users_sayan_Projects_Magic_and_Monster_MagicAndMonster_Source_MagicAndMonster_Public_Game_AuraGameModeBase_h_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
