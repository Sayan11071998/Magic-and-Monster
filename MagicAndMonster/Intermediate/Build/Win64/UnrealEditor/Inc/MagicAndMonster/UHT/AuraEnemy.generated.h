// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "Character/AuraEnemy.h"
#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef MAGICANDMONSTER_AuraEnemy_generated_h
#error "AuraEnemy.generated.h already included, missing '#pragma once' in AuraEnemy.h"
#endif
#define MAGICANDMONSTER_AuraEnemy_generated_h

#define FID_Users_sayan_Projects_Magic_and_Monster_MagicAndMonster_Source_MagicAndMonster_Public_Character_AuraEnemy_h_11_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesAAuraEnemy(); \
	friend struct Z_Construct_UClass_AAuraEnemy_Statics; \
public: \
	DECLARE_CLASS(AAuraEnemy, AAuraCharacterBase, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/MagicAndMonster"), NO_API) \
	DECLARE_SERIALIZER(AAuraEnemy) \
	virtual UObject* _getUObject() const override { return const_cast<AAuraEnemy*>(this); }


#define FID_Users_sayan_Projects_Magic_and_Monster_MagicAndMonster_Source_MagicAndMonster_Public_Character_AuraEnemy_h_11_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	AAuraEnemy(AAuraEnemy&&); \
	AAuraEnemy(const AAuraEnemy&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, AAuraEnemy); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(AAuraEnemy); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(AAuraEnemy) \
	NO_API virtual ~AAuraEnemy();


#define FID_Users_sayan_Projects_Magic_and_Monster_MagicAndMonster_Source_MagicAndMonster_Public_Character_AuraEnemy_h_8_PROLOG
#define FID_Users_sayan_Projects_Magic_and_Monster_MagicAndMonster_Source_MagicAndMonster_Public_Character_AuraEnemy_h_11_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Users_sayan_Projects_Magic_and_Monster_MagicAndMonster_Source_MagicAndMonster_Public_Character_AuraEnemy_h_11_INCLASS_NO_PURE_DECLS \
	FID_Users_sayan_Projects_Magic_and_Monster_MagicAndMonster_Source_MagicAndMonster_Public_Character_AuraEnemy_h_11_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> MAGICANDMONSTER_API UClass* StaticClass<class AAuraEnemy>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Users_sayan_Projects_Magic_and_Monster_MagicAndMonster_Source_MagicAndMonster_Public_Character_AuraEnemy_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
