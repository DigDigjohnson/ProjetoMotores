// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "HouseUnderIronWeaponComponent.h"

#ifdef HOUSEUNDERIRON_HouseUnderIronWeaponComponent_generated_h
#error "HouseUnderIronWeaponComponent.generated.h already included, missing '#pragma once' in HouseUnderIronWeaponComponent.h"
#endif
#define HOUSEUNDERIRON_HouseUnderIronWeaponComponent_generated_h

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS

class AHouseUnderIronCharacter;

// ********** Begin Class UHouseUnderIronWeaponComponent *******************************************
#define FID_HouseUnderIron_Source_HouseUnderIron_HouseUnderIronWeaponComponent_h_14_RPC_WRAPPERS_NO_PURE_DECLS \
	DECLARE_FUNCTION(execEndPlay); \
	DECLARE_FUNCTION(execFire); \
	DECLARE_FUNCTION(execAttachWeapon);


HOUSEUNDERIRON_API UClass* Z_Construct_UClass_UHouseUnderIronWeaponComponent_NoRegister();

#define FID_HouseUnderIron_Source_HouseUnderIron_HouseUnderIronWeaponComponent_h_14_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUHouseUnderIronWeaponComponent(); \
	friend struct Z_Construct_UClass_UHouseUnderIronWeaponComponent_Statics; \
	static UClass* GetPrivateStaticClass(); \
	friend HOUSEUNDERIRON_API UClass* Z_Construct_UClass_UHouseUnderIronWeaponComponent_NoRegister(); \
public: \
	DECLARE_CLASS2(UHouseUnderIronWeaponComponent, USkeletalMeshComponent, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/HouseUnderIron"), Z_Construct_UClass_UHouseUnderIronWeaponComponent_NoRegister) \
	DECLARE_SERIALIZER(UHouseUnderIronWeaponComponent)


#define FID_HouseUnderIron_Source_HouseUnderIron_HouseUnderIronWeaponComponent_h_14_ENHANCED_CONSTRUCTORS \
	/** Deleted move- and copy-constructors, should never be used */ \
	UHouseUnderIronWeaponComponent(UHouseUnderIronWeaponComponent&&) = delete; \
	UHouseUnderIronWeaponComponent(const UHouseUnderIronWeaponComponent&) = delete; \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UHouseUnderIronWeaponComponent); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UHouseUnderIronWeaponComponent); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(UHouseUnderIronWeaponComponent) \
	NO_API virtual ~UHouseUnderIronWeaponComponent();


#define FID_HouseUnderIron_Source_HouseUnderIron_HouseUnderIronWeaponComponent_h_11_PROLOG
#define FID_HouseUnderIron_Source_HouseUnderIron_HouseUnderIronWeaponComponent_h_14_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_HouseUnderIron_Source_HouseUnderIron_HouseUnderIronWeaponComponent_h_14_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_HouseUnderIron_Source_HouseUnderIron_HouseUnderIronWeaponComponent_h_14_INCLASS_NO_PURE_DECLS \
	FID_HouseUnderIron_Source_HouseUnderIron_HouseUnderIronWeaponComponent_h_14_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


class UHouseUnderIronWeaponComponent;

// ********** End Class UHouseUnderIronWeaponComponent *********************************************

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_HouseUnderIron_Source_HouseUnderIron_HouseUnderIronWeaponComponent_h

PRAGMA_ENABLE_DEPRECATION_WARNINGS
