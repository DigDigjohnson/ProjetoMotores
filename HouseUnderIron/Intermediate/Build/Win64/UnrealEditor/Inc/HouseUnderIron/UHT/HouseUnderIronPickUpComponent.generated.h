// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "HouseUnderIronPickUpComponent.h"
#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
class AActor;
class AHouseUnderIronCharacter;
class UPrimitiveComponent;
struct FHitResult;
#ifdef HOUSEUNDERIRON_HouseUnderIronPickUpComponent_generated_h
#error "HouseUnderIronPickUpComponent.generated.h already included, missing '#pragma once' in HouseUnderIronPickUpComponent.h"
#endif
#define HOUSEUNDERIRON_HouseUnderIronPickUpComponent_generated_h

#define FID_Users_User_Documents_GitHub_ProjetoMotores_HouseUnderIron_Source_HouseUnderIron_HouseUnderIronPickUpComponent_h_12_DELEGATE \
HOUSEUNDERIRON_API void FOnPickUp_DelegateWrapper(const FMulticastScriptDelegate& OnPickUp, AHouseUnderIronCharacter* PickUpCharacter);


#define FID_Users_User_Documents_GitHub_ProjetoMotores_HouseUnderIron_Source_HouseUnderIron_HouseUnderIronPickUpComponent_h_17_RPC_WRAPPERS_NO_PURE_DECLS \
	DECLARE_FUNCTION(execOnSphereBeginOverlap);


#define FID_Users_User_Documents_GitHub_ProjetoMotores_HouseUnderIron_Source_HouseUnderIron_HouseUnderIronPickUpComponent_h_17_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUHouseUnderIronPickUpComponent(); \
	friend struct Z_Construct_UClass_UHouseUnderIronPickUpComponent_Statics; \
public: \
	DECLARE_CLASS(UHouseUnderIronPickUpComponent, USphereComponent, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/HouseUnderIron"), NO_API) \
	DECLARE_SERIALIZER(UHouseUnderIronPickUpComponent)


#define FID_Users_User_Documents_GitHub_ProjetoMotores_HouseUnderIron_Source_HouseUnderIron_HouseUnderIronPickUpComponent_h_17_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	UHouseUnderIronPickUpComponent(UHouseUnderIronPickUpComponent&&); \
	UHouseUnderIronPickUpComponent(const UHouseUnderIronPickUpComponent&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UHouseUnderIronPickUpComponent); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UHouseUnderIronPickUpComponent); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(UHouseUnderIronPickUpComponent) \
	NO_API virtual ~UHouseUnderIronPickUpComponent();


#define FID_Users_User_Documents_GitHub_ProjetoMotores_HouseUnderIron_Source_HouseUnderIron_HouseUnderIronPickUpComponent_h_14_PROLOG
#define FID_Users_User_Documents_GitHub_ProjetoMotores_HouseUnderIron_Source_HouseUnderIron_HouseUnderIronPickUpComponent_h_17_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Users_User_Documents_GitHub_ProjetoMotores_HouseUnderIron_Source_HouseUnderIron_HouseUnderIronPickUpComponent_h_17_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_Users_User_Documents_GitHub_ProjetoMotores_HouseUnderIron_Source_HouseUnderIron_HouseUnderIronPickUpComponent_h_17_INCLASS_NO_PURE_DECLS \
	FID_Users_User_Documents_GitHub_ProjetoMotores_HouseUnderIron_Source_HouseUnderIron_HouseUnderIronPickUpComponent_h_17_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> HOUSEUNDERIRON_API UClass* StaticClass<class UHouseUnderIronPickUpComponent>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Users_User_Documents_GitHub_ProjetoMotores_HouseUnderIron_Source_HouseUnderIron_HouseUnderIronPickUpComponent_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
