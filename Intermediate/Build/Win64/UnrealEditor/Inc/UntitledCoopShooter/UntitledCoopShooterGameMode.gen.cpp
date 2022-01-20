// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "UntitledCoopShooter/UntitledCoopShooterGameMode.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeUntitledCoopShooterGameMode() {}
// Cross Module References
	UNTITLEDCOOPSHOOTER_API UClass* Z_Construct_UClass_AUntitledCoopShooterGameMode_NoRegister();
	UNTITLEDCOOPSHOOTER_API UClass* Z_Construct_UClass_AUntitledCoopShooterGameMode();
	ENGINE_API UClass* Z_Construct_UClass_AGameModeBase();
	UPackage* Z_Construct_UPackage__Script_UntitledCoopShooter();
// End Cross Module References
	void AUntitledCoopShooterGameMode::StaticRegisterNativesAUntitledCoopShooterGameMode()
	{
	}
	UClass* Z_Construct_UClass_AUntitledCoopShooterGameMode_NoRegister()
	{
		return AUntitledCoopShooterGameMode::StaticClass();
	}
	struct Z_Construct_UClass_AUntitledCoopShooterGameMode_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_AUntitledCoopShooterGameMode_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_AGameModeBase,
		(UObject* (*)())Z_Construct_UPackage__Script_UntitledCoopShooter,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AUntitledCoopShooterGameMode_Statics::Class_MetaDataParams[] = {
		{ "HideCategories", "Info Rendering MovementReplication Replication Actor Input Movement Collision Rendering LOD WorldPartition DataLayers Utilities|Transformation" },
		{ "IncludePath", "UntitledCoopShooterGameMode.h" },
		{ "ModuleRelativePath", "UntitledCoopShooterGameMode.h" },
		{ "ShowCategories", "Input|MouseInput Input|TouchInput" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_AUntitledCoopShooterGameMode_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<AUntitledCoopShooterGameMode>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_AUntitledCoopShooterGameMode_Statics::ClassParams = {
		&AUntitledCoopShooterGameMode::StaticClass,
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
		METADATA_PARAMS(Z_Construct_UClass_AUntitledCoopShooterGameMode_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_AUntitledCoopShooterGameMode_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_AUntitledCoopShooterGameMode()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UECodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_AUntitledCoopShooterGameMode_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(AUntitledCoopShooterGameMode, 2091080748);
	template<> UNTITLEDCOOPSHOOTER_API UClass* StaticClass<AUntitledCoopShooterGameMode>()
	{
		return AUntitledCoopShooterGameMode::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_AUntitledCoopShooterGameMode(Z_Construct_UClass_AUntitledCoopShooterGameMode, &AUntitledCoopShooterGameMode::StaticClass, TEXT("/Script/UntitledCoopShooter"), TEXT("AUntitledCoopShooterGameMode"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(AUntitledCoopShooterGameMode);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
