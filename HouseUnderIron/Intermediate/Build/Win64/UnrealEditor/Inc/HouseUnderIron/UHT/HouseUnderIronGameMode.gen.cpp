// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "HouseUnderIron/HouseUnderIronGameMode.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS

void EmptyLinkFunctionForGeneratedCodeHouseUnderIronGameMode() {}

// ********** Begin Cross Module References ********************************************************
ENGINE_API UClass* Z_Construct_UClass_AGameModeBase();
HOUSEUNDERIRON_API UClass* Z_Construct_UClass_AHouseUnderIronGameMode();
HOUSEUNDERIRON_API UClass* Z_Construct_UClass_AHouseUnderIronGameMode_NoRegister();
UPackage* Z_Construct_UPackage__Script_HouseUnderIron();
// ********** End Cross Module References **********************************************************

// ********** Begin Class AHouseUnderIronGameMode **************************************************
void AHouseUnderIronGameMode::StaticRegisterNativesAHouseUnderIronGameMode()
{
}
FClassRegistrationInfo Z_Registration_Info_UClass_AHouseUnderIronGameMode;
UClass* AHouseUnderIronGameMode::GetPrivateStaticClass()
{
	using TClass = AHouseUnderIronGameMode;
	if (!Z_Registration_Info_UClass_AHouseUnderIronGameMode.InnerSingleton)
	{
		GetPrivateStaticClassBody(
			StaticPackage(),
			TEXT("HouseUnderIronGameMode"),
			Z_Registration_Info_UClass_AHouseUnderIronGameMode.InnerSingleton,
			StaticRegisterNativesAHouseUnderIronGameMode,
			sizeof(TClass),
			alignof(TClass),
			TClass::StaticClassFlags,
			TClass::StaticClassCastFlags(),
			TClass::StaticConfigName(),
			(UClass::ClassConstructorType)InternalConstructor<TClass>,
			(UClass::ClassVTableHelperCtorCallerType)InternalVTableHelperCtorCaller<TClass>,
			UOBJECT_CPPCLASS_STATICFUNCTIONS_FORCLASS(TClass),
			&TClass::Super::StaticClass,
			&TClass::WithinClass::StaticClass
		);
	}
	return Z_Registration_Info_UClass_AHouseUnderIronGameMode.InnerSingleton;
}
UClass* Z_Construct_UClass_AHouseUnderIronGameMode_NoRegister()
{
	return AHouseUnderIronGameMode::GetPrivateStaticClass();
}
struct Z_Construct_UClass_AHouseUnderIronGameMode_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "HideCategories", "Info Rendering MovementReplication Replication Actor Input Movement Collision Rendering HLOD WorldPartition DataLayers Transformation" },
		{ "IncludePath", "HouseUnderIronGameMode.h" },
		{ "ModuleRelativePath", "HouseUnderIronGameMode.h" },
		{ "ShowCategories", "Input|MouseInput Input|TouchInput" },
	};
#endif // WITH_METADATA
	static UObject* (*const DependentSingletons[])();
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<AHouseUnderIronGameMode>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
UObject* (*const Z_Construct_UClass_AHouseUnderIronGameMode_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_AGameModeBase,
	(UObject* (*)())Z_Construct_UPackage__Script_HouseUnderIron,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_AHouseUnderIronGameMode_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_AHouseUnderIronGameMode_Statics::ClassParams = {
	&AHouseUnderIronGameMode::StaticClass,
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
	0x008803ACu,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_AHouseUnderIronGameMode_Statics::Class_MetaDataParams), Z_Construct_UClass_AHouseUnderIronGameMode_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_AHouseUnderIronGameMode()
{
	if (!Z_Registration_Info_UClass_AHouseUnderIronGameMode.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_AHouseUnderIronGameMode.OuterSingleton, Z_Construct_UClass_AHouseUnderIronGameMode_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_AHouseUnderIronGameMode.OuterSingleton;
}
DEFINE_VTABLE_PTR_HELPER_CTOR(AHouseUnderIronGameMode);
AHouseUnderIronGameMode::~AHouseUnderIronGameMode() {}
// ********** End Class AHouseUnderIronGameMode ****************************************************

// ********** Begin Registration *******************************************************************
struct Z_CompiledInDeferFile_FID_HouseUnderIron_Source_HouseUnderIron_HouseUnderIronGameMode_h__Script_HouseUnderIron_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_AHouseUnderIronGameMode, AHouseUnderIronGameMode::StaticClass, TEXT("AHouseUnderIronGameMode"), &Z_Registration_Info_UClass_AHouseUnderIronGameMode, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(AHouseUnderIronGameMode), 3618186553U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_HouseUnderIron_Source_HouseUnderIron_HouseUnderIronGameMode_h__Script_HouseUnderIron_3758372900(TEXT("/Script/HouseUnderIron"),
	Z_CompiledInDeferFile_FID_HouseUnderIron_Source_HouseUnderIron_HouseUnderIronGameMode_h__Script_HouseUnderIron_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_HouseUnderIron_Source_HouseUnderIron_HouseUnderIronGameMode_h__Script_HouseUnderIron_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// ********** End Registration *********************************************************************

PRAGMA_ENABLE_DEPRECATION_WARNINGS
