// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "UntitledCoopShooter/UntitledCoopShooterHUD.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeUntitledCoopShooterHUD() {}
// Cross Module References
	UNTITLEDCOOPSHOOTER_API UClass* Z_Construct_UClass_AUntitledCoopShooterHUD_NoRegister();
	UNTITLEDCOOPSHOOTER_API UClass* Z_Construct_UClass_AUntitledCoopShooterHUD();
	ENGINE_API UClass* Z_Construct_UClass_AHUD();
	UPackage* Z_Construct_UPackage__Script_UntitledCoopShooter();
// End Cross Module References
	void AUntitledCoopShooterHUD::StaticRegisterNativesAUntitledCoopShooterHUD()
	{
	}
	UClass* Z_Construct_UClass_AUntitledCoopShooterHUD_NoRegister()
	{
		return AUntitledCoopShooterHUD::StaticClass();
	}
	struct Z_Construct_UClass_AUntitledCoopShooterHUD_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_AUntitledCoopShooterHUD_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_AHUD,
		(UObject* (*)())Z_Construct_UPackage__Script_UntitledCoopShooter,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AUntitledCoopShooterHUD_Statics::Class_MetaDataParams[] = {
		{ "HideCategories", "Rendering Actor Input Replication" },
		{ "IncludePath", "UntitledCoopShooterHUD.h" },
		{ "ModuleRelativePath", "UntitledCoopShooterHUD.h" },
		{ "ShowCategories", "Input|MouseInput Input|TouchInput" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_AUntitledCoopShooterHUD_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<AUntitledCoopShooterHUD>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_AUntitledCoopShooterHUD_Statics::ClassParams = {
		&AUntitledCoopShooterHUD::StaticClass,
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
		0x008002ACu,
		METADATA_PARAMS(Z_Construct_UClass_AUntitledCoopShooterHUD_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_AUntitledCoopShooterHUD_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_AUntitledCoopShooterHUD()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UECodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_AUntitledCoopShooterHUD_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(AUntitledCoopShooterHUD, 2566418933);
	template<> UNTITLEDCOOPSHOOTER_API UClass* StaticClass<AUntitledCoopShooterHUD>()
	{
		return AUntitledCoopShooterHUD::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_AUntitledCoopShooterHUD(Z_Construct_UClass_AUntitledCoopShooterHUD, &AUntitledCoopShooterHUD::StaticClass, TEXT("/Script/UntitledCoopShooter"), TEXT("AUntitledCoopShooterHUD"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(AUntitledCoopShooterHUD);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
