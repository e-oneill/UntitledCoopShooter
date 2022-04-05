// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeUntitledCoopShooter_init() {}
	UNTITLEDCOOPSHOOTER_API UFunction* Z_Construct_UDelegateFunction_UntitledCoopShooter_OnHealthChangedSignature__DelegateSignature();
	UNTITLEDCOOPSHOOTER_API UFunction* Z_Construct_UDelegateFunction_UntitledCoopShooter_OnShieldChangedSignature__DelegateSignature();
	UNTITLEDCOOPSHOOTER_API UFunction* Z_Construct_UDelegateFunction_UntitledCoopShooter_OnArmorChangedSignature__DelegateSignature();
	UPackage* Z_Construct_UPackage__Script_UntitledCoopShooter()
	{
		static UPackage* ReturnPackage = nullptr;
		if (!ReturnPackage)
		{
			static UObject* (*const SingletonFuncArray[])() = {
				(UObject* (*)())Z_Construct_UDelegateFunction_UntitledCoopShooter_OnHealthChangedSignature__DelegateSignature,
				(UObject* (*)())Z_Construct_UDelegateFunction_UntitledCoopShooter_OnShieldChangedSignature__DelegateSignature,
				(UObject* (*)())Z_Construct_UDelegateFunction_UntitledCoopShooter_OnArmorChangedSignature__DelegateSignature,
			};
			static const UECodeGen_Private::FPackageParams PackageParams = {
				"/Script/UntitledCoopShooter",
				SingletonFuncArray,
				UE_ARRAY_COUNT(SingletonFuncArray),
				PKG_CompiledIn | 0x00000000,
				0x46308BDE,
				0xEB655DEA,
				METADATA_PARAMS(nullptr, 0)
			};
			UECodeGen_Private::ConstructUPackage(ReturnPackage, PackageParams);
		}
		return ReturnPackage;
	}
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
