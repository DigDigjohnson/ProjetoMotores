// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeHouseUnderIron_init() {}
	HOUSEUNDERIRON_API UFunction* Z_Construct_UDelegateFunction_HouseUnderIron_OnPickUp__DelegateSignature();
	static FPackageRegistrationInfo Z_Registration_Info_UPackage__Script_HouseUnderIron;
	FORCENOINLINE UPackage* Z_Construct_UPackage__Script_HouseUnderIron()
	{
		if (!Z_Registration_Info_UPackage__Script_HouseUnderIron.OuterSingleton)
		{
			static UObject* (*const SingletonFuncArray[])() = {
				(UObject* (*)())Z_Construct_UDelegateFunction_HouseUnderIron_OnPickUp__DelegateSignature,
			};
			static const UECodeGen_Private::FPackageParams PackageParams = {
				"/Script/HouseUnderIron",
				SingletonFuncArray,
				UE_ARRAY_COUNT(SingletonFuncArray),
				PKG_CompiledIn | 0x00000000,
				0x94ED2019,
				0x510F5488,
				METADATA_PARAMS(0, nullptr)
			};
			UECodeGen_Private::ConstructUPackage(Z_Registration_Info_UPackage__Script_HouseUnderIron.OuterSingleton, PackageParams);
		}
		return Z_Registration_Info_UPackage__Script_HouseUnderIron.OuterSingleton;
	}
	static FRegisterCompiledInInfo Z_CompiledInDeferPackage_UPackage__Script_HouseUnderIron(Z_Construct_UPackage__Script_HouseUnderIron, TEXT("/Script/HouseUnderIron"), Z_Registration_Info_UPackage__Script_HouseUnderIron, CONSTRUCT_RELOAD_VERSION_INFO(FPackageReloadVersionInfo, 0x94ED2019, 0x510F5488));
PRAGMA_ENABLE_DEPRECATION_WARNINGS
