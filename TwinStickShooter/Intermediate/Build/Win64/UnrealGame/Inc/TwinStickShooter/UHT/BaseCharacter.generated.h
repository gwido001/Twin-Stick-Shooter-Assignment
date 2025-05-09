// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "BaseCharacter.h"
#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef TWINSTICKSHOOTER_BaseCharacter_generated_h
#error "BaseCharacter.generated.h already included, missing '#pragma once' in BaseCharacter.h"
#endif
#define TWINSTICKSHOOTER_BaseCharacter_generated_h

#define FID_TwinStickShooter_Source_TwinStickShooter_BaseCharacter_h_12_RPC_WRAPPERS_NO_PURE_DECLS \
	DECLARE_FUNCTION(execCalculateHealth);


#define FID_TwinStickShooter_Source_TwinStickShooter_BaseCharacter_h_12_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesABaseCharacter(); \
	friend struct Z_Construct_UClass_ABaseCharacter_Statics; \
public: \
	DECLARE_CLASS(ABaseCharacter, ACharacter, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/TwinStickShooter"), NO_API) \
	DECLARE_SERIALIZER(ABaseCharacter)


#define FID_TwinStickShooter_Source_TwinStickShooter_BaseCharacter_h_12_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	ABaseCharacter(ABaseCharacter&&); \
	ABaseCharacter(const ABaseCharacter&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, ABaseCharacter); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(ABaseCharacter); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(ABaseCharacter) \
	NO_API virtual ~ABaseCharacter();


#define FID_TwinStickShooter_Source_TwinStickShooter_BaseCharacter_h_9_PROLOG
#define FID_TwinStickShooter_Source_TwinStickShooter_BaseCharacter_h_12_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_TwinStickShooter_Source_TwinStickShooter_BaseCharacter_h_12_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_TwinStickShooter_Source_TwinStickShooter_BaseCharacter_h_12_INCLASS_NO_PURE_DECLS \
	FID_TwinStickShooter_Source_TwinStickShooter_BaseCharacter_h_12_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> TWINSTICKSHOOTER_API UClass* StaticClass<class ABaseCharacter>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_TwinStickShooter_Source_TwinStickShooter_BaseCharacter_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
