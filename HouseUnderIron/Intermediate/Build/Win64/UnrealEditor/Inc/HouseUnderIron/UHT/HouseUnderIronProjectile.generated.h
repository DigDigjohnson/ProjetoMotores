// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "HouseUnderIronProjectile.h"

#ifdef HOUSEUNDERIRON_HouseUnderIronProjectile_generated_h
#error "HouseUnderIronProjectile.generated.h already included, missing '#pragma once' in HouseUnderIronProjectile.h"
#endif
#define HOUSEUNDERIRON_HouseUnderIronProjectile_generated_h

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS

class AActor;
class UPrimitiveComponent;
struct FHitResult;

// ********** Begin Class AHouseUnderIronProjectile ************************************************
#define FID_HouseUnderIron_Source_HouseUnderIron_HouseUnderIronProjectile_h_15_RPC_WRAPPERS_NO_PURE_DECLS \
	DECLARE_FUNCTION(execOnHit);


HOUSEUNDERIRON_API UClass* Z_Construct_UClass_AHouseUnderIronProjectile_NoRegister();

#define FID_HouseUnderIron_Source_HouseUnderIron_HouseUnderIronProjectile_h_15_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesAHouseUnderIronProjectile(); \
	friend struct Z_Construct_UClass_AHouseUnderIronProjectile_Statics; \
	static UClass* GetPrivateStaticClass(); \
	friend HOUSEUNDERIRON_API UClass* Z_Construct_UClass_AHouseUnderIronProjectile_NoRegister(); \
public: \
	DECLARE_CLASS2(AHouseUnderIronProjectile, AActor, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/HouseUnderIron"), Z_Construct_UClass_AHouseUnderIronProjectile_NoRegister) \
	DECLARE_SERIALIZER(AHouseUnderIronProjectile) \
	static const TCHAR* StaticConfigName() {return TEXT("Game");} \



#define FID_HouseUnderIron_Source_HouseUnderIron_HouseUnderIronProjectile_h_15_ENHANCED_CONSTRUCTORS \
	/** Deleted move- and copy-constructors, should never be used */ \
	AHouseUnderIronProjectile(AHouseUnderIronProjectile&&) = delete; \
	AHouseUnderIronProjectile(const AHouseUnderIronProjectile&) = delete; \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, AHouseUnderIronProjectile); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(AHouseUnderIronProjectile); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(AHouseUnderIronProjectile) \
	NO_API virtual ~AHouseUnderIronProjectile();


#define FID_HouseUnderIron_Source_HouseUnderIron_HouseUnderIronProjectile_h_12_PROLOG
#define FID_HouseUnderIron_Source_HouseUnderIron_HouseUnderIronProjectile_h_15_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_HouseUnderIron_Source_HouseUnderIron_HouseUnderIronProjectile_h_15_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_HouseUnderIron_Source_HouseUnderIron_HouseUnderIronProjectile_h_15_INCLASS_NO_PURE_DECLS \
	FID_HouseUnderIron_Source_HouseUnderIron_HouseUnderIronProjectile_h_15_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


class AHouseUnderIronProjectile;

// ********** End Class AHouseUnderIronProjectile **************************************************

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_HouseUnderIron_Source_HouseUnderIron_HouseUnderIronProjectile_h

PRAGMA_ENABLE_DEPRECATION_WARNINGS
