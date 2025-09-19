// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeMagicAndMonster_init() {}
	MAGICANDMONSTER_API UFunction* Z_Construct_UDelegateFunction_MagicAndMonster_OnHealthChangedSignature__DelegateSignature();
	MAGICANDMONSTER_API UFunction* Z_Construct_UDelegateFunction_MagicAndMonster_OnManaChangedSignature__DelegateSignature();
	MAGICANDMONSTER_API UFunction* Z_Construct_UDelegateFunction_MagicAndMonster_OnMaxHealthChangedSignature__DelegateSignature();
	MAGICANDMONSTER_API UFunction* Z_Construct_UDelegateFunction_MagicAndMonster_OnMaxManaChangedSignature__DelegateSignature();
	static FPackageRegistrationInfo Z_Registration_Info_UPackage__Script_MagicAndMonster;
	FORCENOINLINE UPackage* Z_Construct_UPackage__Script_MagicAndMonster()
	{
		if (!Z_Registration_Info_UPackage__Script_MagicAndMonster.OuterSingleton)
		{
			static UObject* (*const SingletonFuncArray[])() = {
				(UObject* (*)())Z_Construct_UDelegateFunction_MagicAndMonster_OnHealthChangedSignature__DelegateSignature,
				(UObject* (*)())Z_Construct_UDelegateFunction_MagicAndMonster_OnManaChangedSignature__DelegateSignature,
				(UObject* (*)())Z_Construct_UDelegateFunction_MagicAndMonster_OnMaxHealthChangedSignature__DelegateSignature,
				(UObject* (*)())Z_Construct_UDelegateFunction_MagicAndMonster_OnMaxManaChangedSignature__DelegateSignature,
			};
			static const UECodeGen_Private::FPackageParams PackageParams = {
				"/Script/MagicAndMonster",
				SingletonFuncArray,
				UE_ARRAY_COUNT(SingletonFuncArray),
				PKG_CompiledIn | 0x00000000,
				0xFE6A30F6,
				0x5E347878,
				METADATA_PARAMS(0, nullptr)
			};
			UECodeGen_Private::ConstructUPackage(Z_Registration_Info_UPackage__Script_MagicAndMonster.OuterSingleton, PackageParams);
		}
		return Z_Registration_Info_UPackage__Script_MagicAndMonster.OuterSingleton;
	}
	static FRegisterCompiledInInfo Z_CompiledInDeferPackage_UPackage__Script_MagicAndMonster(Z_Construct_UPackage__Script_MagicAndMonster, TEXT("/Script/MagicAndMonster"), Z_Registration_Info_UPackage__Script_MagicAndMonster, CONSTRUCT_RELOAD_VERSION_INFO(FPackageReloadVersionInfo, 0xFE6A30F6, 0x5E347878));
PRAGMA_ENABLE_DEPRECATION_WARNINGS
