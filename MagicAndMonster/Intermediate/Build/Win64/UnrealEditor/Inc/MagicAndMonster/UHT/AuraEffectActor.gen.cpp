// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "MagicAndMonster/Public/Actor/AuraEffectActor.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeAuraEffectActor() {}

// Begin Cross Module References
COREUOBJECT_API UClass* Z_Construct_UClass_UClass();
ENGINE_API UClass* Z_Construct_UClass_AActor();
ENGINE_API UClass* Z_Construct_UClass_AActor_NoRegister();
GAMEPLAYABILITIES_API UClass* Z_Construct_UClass_UGameplayEffect_NoRegister();
MAGICANDMONSTER_API UClass* Z_Construct_UClass_AAuraEffectActor();
MAGICANDMONSTER_API UClass* Z_Construct_UClass_AAuraEffectActor_NoRegister();
UPackage* Z_Construct_UPackage__Script_MagicAndMonster();
// End Cross Module References

// Begin Class AAuraEffectActor Function ApplyEffectToTarget
struct Z_Construct_UFunction_AAuraEffectActor_ApplyEffectToTarget_Statics
{
	struct AuraEffectActor_eventApplyEffectToTarget_Parms
	{
		AActor* Target;
		TSubclassOf<UGameplayEffect> GameplayEffectClass;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/Actor/AuraEffectActor.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_Target;
	static const UECodeGen_Private::FClassPropertyParams NewProp_GameplayEffectClass;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_AAuraEffectActor_ApplyEffectToTarget_Statics::NewProp_Target = { "Target", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AuraEffectActor_eventApplyEffectToTarget_Parms, Target), Z_Construct_UClass_AActor_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FClassPropertyParams Z_Construct_UFunction_AAuraEffectActor_ApplyEffectToTarget_Statics::NewProp_GameplayEffectClass = { "GameplayEffectClass", nullptr, (EPropertyFlags)0x0014000000000080, UECodeGen_Private::EPropertyGenFlags::Class, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AuraEffectActor_eventApplyEffectToTarget_Parms, GameplayEffectClass), Z_Construct_UClass_UClass, Z_Construct_UClass_UGameplayEffect_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AAuraEffectActor_ApplyEffectToTarget_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AAuraEffectActor_ApplyEffectToTarget_Statics::NewProp_Target,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AAuraEffectActor_ApplyEffectToTarget_Statics::NewProp_GameplayEffectClass,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_AAuraEffectActor_ApplyEffectToTarget_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_AAuraEffectActor_ApplyEffectToTarget_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AAuraEffectActor, nullptr, "ApplyEffectToTarget", nullptr, nullptr, Z_Construct_UFunction_AAuraEffectActor_ApplyEffectToTarget_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_AAuraEffectActor_ApplyEffectToTarget_Statics::PropPointers), sizeof(Z_Construct_UFunction_AAuraEffectActor_ApplyEffectToTarget_Statics::AuraEffectActor_eventApplyEffectToTarget_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04080401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_AAuraEffectActor_ApplyEffectToTarget_Statics::Function_MetaDataParams), Z_Construct_UFunction_AAuraEffectActor_ApplyEffectToTarget_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_AAuraEffectActor_ApplyEffectToTarget_Statics::AuraEffectActor_eventApplyEffectToTarget_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_AAuraEffectActor_ApplyEffectToTarget()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_AAuraEffectActor_ApplyEffectToTarget_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(AAuraEffectActor::execApplyEffectToTarget)
{
	P_GET_OBJECT(AActor,Z_Param_Target);
	P_GET_OBJECT(UClass,Z_Param_GameplayEffectClass);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->ApplyEffectToTarget(Z_Param_Target,Z_Param_GameplayEffectClass);
	P_NATIVE_END;
}
// End Class AAuraEffectActor Function ApplyEffectToTarget

// Begin Class AAuraEffectActor
void AAuraEffectActor::StaticRegisterNativesAAuraEffectActor()
{
	UClass* Class = AAuraEffectActor::StaticClass();
	static const FNameNativePtrPair Funcs[] = {
		{ "ApplyEffectToTarget", &AAuraEffectActor::execApplyEffectToTarget },
	};
	FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(AAuraEffectActor);
UClass* Z_Construct_UClass_AAuraEffectActor_NoRegister()
{
	return AAuraEffectActor::StaticClass();
}
struct Z_Construct_UClass_AAuraEffectActor_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "IncludePath", "Actor/AuraEffectActor.h" },
		{ "ModuleRelativePath", "Public/Actor/AuraEffectActor.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_InstantGameplayEffectClass_MetaData[] = {
		{ "Category", "Applied Effects" },
		{ "ModuleRelativePath", "Public/Actor/AuraEffectActor.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FClassPropertyParams NewProp_InstantGameplayEffectClass;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static UObject* (*const DependentSingletons[])();
	static constexpr FClassFunctionLinkInfo FuncInfo[] = {
		{ &Z_Construct_UFunction_AAuraEffectActor_ApplyEffectToTarget, "ApplyEffectToTarget" }, // 3100099510
	};
	static_assert(UE_ARRAY_COUNT(FuncInfo) < 2048);
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<AAuraEffectActor>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
const UECodeGen_Private::FClassPropertyParams Z_Construct_UClass_AAuraEffectActor_Statics::NewProp_InstantGameplayEffectClass = { "InstantGameplayEffectClass", nullptr, (EPropertyFlags)0x0024080000000001, UECodeGen_Private::EPropertyGenFlags::Class, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AAuraEffectActor, InstantGameplayEffectClass), Z_Construct_UClass_UClass, Z_Construct_UClass_UGameplayEffect_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_InstantGameplayEffectClass_MetaData), NewProp_InstantGameplayEffectClass_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_AAuraEffectActor_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AAuraEffectActor_Statics::NewProp_InstantGameplayEffectClass,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_AAuraEffectActor_Statics::PropPointers) < 2048);
UObject* (*const Z_Construct_UClass_AAuraEffectActor_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_AActor,
	(UObject* (*)())Z_Construct_UPackage__Script_MagicAndMonster,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_AAuraEffectActor_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_AAuraEffectActor_Statics::ClassParams = {
	&AAuraEffectActor::StaticClass,
	"Engine",
	&StaticCppClassTypeInfo,
	DependentSingletons,
	FuncInfo,
	Z_Construct_UClass_AAuraEffectActor_Statics::PropPointers,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	UE_ARRAY_COUNT(FuncInfo),
	UE_ARRAY_COUNT(Z_Construct_UClass_AAuraEffectActor_Statics::PropPointers),
	0,
	0x009000A4u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_AAuraEffectActor_Statics::Class_MetaDataParams), Z_Construct_UClass_AAuraEffectActor_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_AAuraEffectActor()
{
	if (!Z_Registration_Info_UClass_AAuraEffectActor.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_AAuraEffectActor.OuterSingleton, Z_Construct_UClass_AAuraEffectActor_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_AAuraEffectActor.OuterSingleton;
}
template<> MAGICANDMONSTER_API UClass* StaticClass<AAuraEffectActor>()
{
	return AAuraEffectActor::StaticClass();
}
DEFINE_VTABLE_PTR_HELPER_CTOR(AAuraEffectActor);
AAuraEffectActor::~AAuraEffectActor() {}
// End Class AAuraEffectActor

// Begin Registration
struct Z_CompiledInDeferFile_FID_Users_sayan_Projects_Magic_and_Monster_MagicAndMonster_Source_MagicAndMonster_Public_Actor_AuraEffectActor_h_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_AAuraEffectActor, AAuraEffectActor::StaticClass, TEXT("AAuraEffectActor"), &Z_Registration_Info_UClass_AAuraEffectActor, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(AAuraEffectActor), 2604401217U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Users_sayan_Projects_Magic_and_Monster_MagicAndMonster_Source_MagicAndMonster_Public_Actor_AuraEffectActor_h_3306807883(TEXT("/Script/MagicAndMonster"),
	Z_CompiledInDeferFile_FID_Users_sayan_Projects_Magic_and_Monster_MagicAndMonster_Source_MagicAndMonster_Public_Actor_AuraEffectActor_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Users_sayan_Projects_Magic_and_Monster_MagicAndMonster_Source_MagicAndMonster_Public_Actor_AuraEffectActor_h_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
