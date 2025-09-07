// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "HouseUnderIronPickUpComponent.h"

#ifdef HOUSEUNDERIRON_HouseUnderIronPickUpComponent_generated_h
#error "HouseUnderIronPickUpComponent.generated.h already included, missing '#pragma once' in HouseUnderIronPickUpComponent.h"
#endif
#define HOUSEUNDERIRON_HouseUnderIronPickUpComponent_generated_h

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS

class AActor;
class AHouseUnderIronCharacter;
class UPrimitiveComponent;
struct FHitResult;

// ********** Begin Delegate FOnPickUp *************************************************************
#define FID_HouseUnderIron_Source_HouseUnderIron_HouseUnderIronPickUpComponent_h_12_DELEGATE \
HOUSEUNDERIRON_API void FOnPickUp_DelegateWrapper(const FMulticastScriptDelegate& OnPickUp, AHouseUnderIronCharacter* PickUpCharacter);


// ********** End Delegate FOnPickUp ***************************************************************

// ********** Begin Class UHouseUnderIronPickUpComponent *******************************************
#define FID_HouseUnderIron_Source_HouseUnderIron_HouseUnderIronPickUpComponent_h_17_RPC_WRAPPERS_NO_PURE_DECLS \
	DECLARE_FUNCTION(execOnSphereBeginOverlap);


HOUSEUNDERIRON_API UClass* Z_Construct_UClass_UHouseUnderIronPickUpComponent_NoRegister();

#define FID_HouseUnderIron_Source_HouseUnderIron_HouseUnderIronPickUpComponent_h_17_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUHouseUnderIronPickUpComponent(); \
	friend struct Z_Construct_UClass_UHouseUnderIronPickUpComponent_Statics; \
	static UClass* GetPrivateStaticClass(); \
	friend HOUSEUNDERIRON_API UClass* Z_Construct_UClass_UHouseUnderIronPickUpComponent_NoRegister(); \
public: \
	DECLARE_CLASS2(UHouseUnderIronPickUpComponent, USphereComponent, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/HouseUnderIron"), Z_Construct_UClass_UHouseUnderIronPickUpComponent_NoRegister) \
	DECLARE_SERIALIZER(UHouseUnderIronPickUpComponent)


#define FID_HouseUnderIron_Source_HouseUnderIron_HouseUnderIronPickUpComponent_h_17_ENHANCED_CONSTRUCTORS \
	/** Deleted move- and copy-constructors, should never be used */ \
	UHouseUnderIronPickUpComponent(UHouseUnderIronPickUpComponent&&) = delete; \
	UHouseUnderIronPickUpComponent(const UHouseUnderIronPickUpComponent&) = delete; \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UHouseUnderIronPickUpComponent); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UHouseUnderIronPickUpComponent); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(UHouseUnderIronPickUpComponent) \
	NO_API virtual ~UHouseUnderIronPickUpComponent();


#define FID_HouseUnderIron_Source_HouseUnderIron_HouseUnderIronPickUpComponent_h_14_PROLOG
#define FID_HouseUnderIron_Source_HouseUnderIron_HouseUnderIronPickUpComponent_h_17_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_HouseUnderIron_Source_HouseUnderIron_HouseUnderIronPickUpComponent_h_17_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_HouseUnderIron_Source_HouseUnderIron_HouseUnderIronPickUpComponent_h_17_INCLASS_NO_PURE_DECLS \
	FID_HouseUnderIron_Source_HouseUnderIron_HouseUnderIronPickUpComponent_h_17_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


class UHouseUnderIronPickUpComponent;

// ********** End Class UHouseUnderIronPickUpComponent *********************************************

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_HouseUnderIron_Source_HouseUnderIron_HouseUnderIronPickUpComponent_h

PRAGMA_ENABLE_DEPRECATION_WARNINGS
