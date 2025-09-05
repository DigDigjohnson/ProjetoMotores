// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "HouseUnderIron/HouseUnderIronGameMode.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeHouseUnderIronGameMode() {}

// Begin Cross Module References
ENGINE_API UClass* Z_Construct_UClass_AGameModeBase();
HOUSEUNDERIRON_API UClass* Z_Construct_UClass_AHouseUnderIronGameMode();
HOUSEUNDERIRON_API UClass* Z_Construct_UClass_AHouseUnderIronGameMode_NoRegister();
UPackage* Z_Construct_UPackage__Script_HouseUnderIron();
// End Cross Module References

// Begin Class AHouseUnderIronGameMode
void AHouseUnderIronGameMode::StaticRegisterNativesAHouseUnderIronGameMode()
{
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(AHouseUnderIronGameMode);
UClass* Z_Construct_UClass_AHouseUnderIronGameMode_NoRegister()
{
	return AHouseUnderIronGameMode::StaticClass();
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
	0x008802ACu,
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
template<> HOUSEUNDERIRON_API UClass* StaticClass<AHouseUnderIronGameMode>()
{
	return AHouseUnderIronGameMode::StaticClass();
}
DEFINE_VTABLE_PTR_HELPER_CTOR(AHouseUnderIronGameMode);
AHouseUnderIronGameMode::~AHouseUnderIronGameMode() {}
// End Class AHouseUnderIronGameMode

// Begin Registration
struct Z_CompiledInDeferFile_FID_Users_User_Documents_GitHub_ProjetoMotores_HouseUnderIron_Source_HouseUnderIron_HouseUnderIronGameMode_h_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_AHouseUnderIronGameMode, AHouseUnderIronGameMode::StaticClass, TEXT("AHouseUnderIronGameMode"), &Z_Registration_Info_UClass_AHouseUnderIronGameMode, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(AHouseUnderIronGameMode), 827527645U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Users_User_Documents_GitHub_ProjetoMotores_HouseUnderIron_Source_HouseUnderIron_HouseUnderIronGameMode_h_1210113590(TEXT("/Script/HouseUnderIron"),
	Z_CompiledInDeferFile_FID_Users_User_Documents_GitHub_ProjetoMotores_HouseUnderIron_Source_HouseUnderIron_HouseUnderIronGameMode_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Users_User_Documents_GitHub_ProjetoMotores_HouseUnderIron_Source_HouseUnderIron_HouseUnderIronGameMode_h_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
