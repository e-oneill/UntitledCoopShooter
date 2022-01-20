// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "UntitledCoopShooter/Public/HitscanFirearm.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeHitscanFirearm() {}
// Cross Module References
	UNTITLEDCOOPSHOOTER_API UClass* Z_Construct_UClass_AHitscanFirearm_NoRegister();
	UNTITLEDCOOPSHOOTER_API UClass* Z_Construct_UClass_AHitscanFirearm();
	ENGINE_API UClass* Z_Construct_UClass_AActor();
	UPackage* Z_Construct_UPackage__Script_UntitledCoopShooter();
	ENGINE_API UClass* Z_Construct_UClass_UStaticMeshComponent_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_USkeletalMeshComponent_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_USoundBase_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_UAnimMontage_NoRegister();
// End Cross Module References
	DEFINE_FUNCTION(AHitscanFirearm::execGetMeshComponent)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(USkeletalMeshComponent**)Z_Param__Result=P_THIS->GetMeshComponent();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(AHitscanFirearm::execGetCurrentOptic)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(UStaticMeshComponent**)Z_Param__Result=P_THIS->GetCurrentOptic();
		P_NATIVE_END;
	}
	void AHitscanFirearm::StaticRegisterNativesAHitscanFirearm()
	{
		UClass* Class = AHitscanFirearm::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "GetCurrentOptic", &AHitscanFirearm::execGetCurrentOptic },
			{ "GetMeshComponent", &AHitscanFirearm::execGetMeshComponent },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_AHitscanFirearm_GetCurrentOptic_Statics
	{
		struct HitscanFirearm_eventGetCurrentOptic_Parms
		{
			UStaticMeshComponent* ReturnValue;
		};
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_ReturnValue_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AHitscanFirearm_GetCurrentOptic_Statics::NewProp_ReturnValue_MetaData[] = {
		{ "EditInline", "true" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_AHitscanFirearm_GetCurrentOptic_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000080588, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(HitscanFirearm_eventGetCurrentOptic_Parms, ReturnValue), Z_Construct_UClass_UStaticMeshComponent_NoRegister, METADATA_PARAMS(Z_Construct_UFunction_AHitscanFirearm_GetCurrentOptic_Statics::NewProp_ReturnValue_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_AHitscanFirearm_GetCurrentOptic_Statics::NewProp_ReturnValue_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AHitscanFirearm_GetCurrentOptic_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AHitscanFirearm_GetCurrentOptic_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AHitscanFirearm_GetCurrentOptic_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/HitscanFirearm.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_AHitscanFirearm_GetCurrentOptic_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AHitscanFirearm, nullptr, "GetCurrentOptic", nullptr, nullptr, sizeof(HitscanFirearm_eventGetCurrentOptic_Parms), Z_Construct_UFunction_AHitscanFirearm_GetCurrentOptic_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_AHitscanFirearm_GetCurrentOptic_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_AHitscanFirearm_GetCurrentOptic_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_AHitscanFirearm_GetCurrentOptic_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_AHitscanFirearm_GetCurrentOptic()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_AHitscanFirearm_GetCurrentOptic_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_AHitscanFirearm_GetMeshComponent_Statics
	{
		struct HitscanFirearm_eventGetMeshComponent_Parms
		{
			USkeletalMeshComponent* ReturnValue;
		};
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_ReturnValue_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AHitscanFirearm_GetMeshComponent_Statics::NewProp_ReturnValue_MetaData[] = {
		{ "EditInline", "true" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_AHitscanFirearm_GetMeshComponent_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000080588, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(HitscanFirearm_eventGetMeshComponent_Parms, ReturnValue), Z_Construct_UClass_USkeletalMeshComponent_NoRegister, METADATA_PARAMS(Z_Construct_UFunction_AHitscanFirearm_GetMeshComponent_Statics::NewProp_ReturnValue_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_AHitscanFirearm_GetMeshComponent_Statics::NewProp_ReturnValue_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AHitscanFirearm_GetMeshComponent_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AHitscanFirearm_GetMeshComponent_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AHitscanFirearm_GetMeshComponent_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/HitscanFirearm.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_AHitscanFirearm_GetMeshComponent_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AHitscanFirearm, nullptr, "GetMeshComponent", nullptr, nullptr, sizeof(HitscanFirearm_eventGetMeshComponent_Parms), Z_Construct_UFunction_AHitscanFirearm_GetMeshComponent_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_AHitscanFirearm_GetMeshComponent_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_AHitscanFirearm_GetMeshComponent_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_AHitscanFirearm_GetMeshComponent_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_AHitscanFirearm_GetMeshComponent()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_AHitscanFirearm_GetMeshComponent_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	UClass* Z_Construct_UClass_AHitscanFirearm_NoRegister()
	{
		return AHitscanFirearm::StaticClass();
	}
	struct Z_Construct_UClass_AHitscanFirearm_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_MeshComponent_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_MeshComponent;
		static const UECodeGen_Private::FObjectPropertyParams NewProp_Optics_Inner;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Optics_MetaData[];
#endif
		static const UECodeGen_Private::FArrayPropertyParams NewProp_Optics;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_CurrentOptic_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_CurrentOptic;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_FireSound_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_FireSound;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_ReloadAnimation_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_ReloadAnimation;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_AHitscanFirearm_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_AActor,
		(UObject* (*)())Z_Construct_UPackage__Script_UntitledCoopShooter,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_AHitscanFirearm_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_AHitscanFirearm_GetCurrentOptic, "GetCurrentOptic" }, // 2497635262
		{ &Z_Construct_UFunction_AHitscanFirearm_GetMeshComponent, "GetMeshComponent" }, // 876536384
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AHitscanFirearm_Statics::Class_MetaDataParams[] = {
		{ "IncludePath", "HitscanFirearm.h" },
		{ "ModuleRelativePath", "Public/HitscanFirearm.h" },
	};
#endif
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AHitscanFirearm_Statics::NewProp_MeshComponent_MetaData[] = {
		{ "Category", "Mesh" },
		{ "Comment", "/** Gun mesh: 1st person view (seen only by self) */" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/HitscanFirearm.h" },
		{ "ToolTip", "Gun mesh: 1st person view (seen only by self)" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AHitscanFirearm_Statics::NewProp_MeshComponent = { "MeshComponent", nullptr, (EPropertyFlags)0x00400000000b0009, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AHitscanFirearm, MeshComponent), Z_Construct_UClass_USkeletalMeshComponent_NoRegister, METADATA_PARAMS(Z_Construct_UClass_AHitscanFirearm_Statics::NewProp_MeshComponent_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AHitscanFirearm_Statics::NewProp_MeshComponent_MetaData)) };
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AHitscanFirearm_Statics::NewProp_Optics_Inner = { "Optics", nullptr, (EPropertyFlags)0x0000000000080008, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, Z_Construct_UClass_UStaticMeshComponent_NoRegister, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AHitscanFirearm_Statics::NewProp_Optics_MetaData[] = {
		{ "Category", "Optics" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/HitscanFirearm.h" },
	};
#endif
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UClass_AHitscanFirearm_Statics::NewProp_Optics = { "Optics", nullptr, (EPropertyFlags)0x001000800000000d, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AHitscanFirearm, Optics), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UClass_AHitscanFirearm_Statics::NewProp_Optics_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AHitscanFirearm_Statics::NewProp_Optics_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AHitscanFirearm_Statics::NewProp_CurrentOptic_MetaData[] = {
		{ "Category", "Optics" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/HitscanFirearm.h" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AHitscanFirearm_Statics::NewProp_CurrentOptic = { "CurrentOptic", nullptr, (EPropertyFlags)0x001000000008000d, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AHitscanFirearm, CurrentOptic), Z_Construct_UClass_UStaticMeshComponent_NoRegister, METADATA_PARAMS(Z_Construct_UClass_AHitscanFirearm_Statics::NewProp_CurrentOptic_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AHitscanFirearm_Statics::NewProp_CurrentOptic_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AHitscanFirearm_Statics::NewProp_FireSound_MetaData[] = {
		{ "Category", "Gameplay" },
		{ "Comment", "/** Sound to play each time we fire */" },
		{ "ModuleRelativePath", "Public/HitscanFirearm.h" },
		{ "ToolTip", "Sound to play each time we fire" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AHitscanFirearm_Statics::NewProp_FireSound = { "FireSound", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AHitscanFirearm, FireSound), Z_Construct_UClass_USoundBase_NoRegister, METADATA_PARAMS(Z_Construct_UClass_AHitscanFirearm_Statics::NewProp_FireSound_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AHitscanFirearm_Statics::NewProp_FireSound_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AHitscanFirearm_Statics::NewProp_ReloadAnimation_MetaData[] = {
		{ "Category", "Gameplay" },
		{ "ModuleRelativePath", "Public/HitscanFirearm.h" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AHitscanFirearm_Statics::NewProp_ReloadAnimation = { "ReloadAnimation", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AHitscanFirearm, ReloadAnimation), Z_Construct_UClass_UAnimMontage_NoRegister, METADATA_PARAMS(Z_Construct_UClass_AHitscanFirearm_Statics::NewProp_ReloadAnimation_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AHitscanFirearm_Statics::NewProp_ReloadAnimation_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_AHitscanFirearm_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AHitscanFirearm_Statics::NewProp_MeshComponent,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AHitscanFirearm_Statics::NewProp_Optics_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AHitscanFirearm_Statics::NewProp_Optics,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AHitscanFirearm_Statics::NewProp_CurrentOptic,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AHitscanFirearm_Statics::NewProp_FireSound,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AHitscanFirearm_Statics::NewProp_ReloadAnimation,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_AHitscanFirearm_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<AHitscanFirearm>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_AHitscanFirearm_Statics::ClassParams = {
		&AHitscanFirearm::StaticClass,
		"Engine",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		FuncInfo,
		Z_Construct_UClass_AHitscanFirearm_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		UE_ARRAY_COUNT(FuncInfo),
		UE_ARRAY_COUNT(Z_Construct_UClass_AHitscanFirearm_Statics::PropPointers),
		0,
		0x009000A4u,
		METADATA_PARAMS(Z_Construct_UClass_AHitscanFirearm_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_AHitscanFirearm_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_AHitscanFirearm()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UECodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_AHitscanFirearm_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(AHitscanFirearm, 2380728626);
	template<> UNTITLEDCOOPSHOOTER_API UClass* StaticClass<AHitscanFirearm>()
	{
		return AHitscanFirearm::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_AHitscanFirearm(Z_Construct_UClass_AHitscanFirearm, &AHitscanFirearm::StaticClass, TEXT("/Script/UntitledCoopShooter"), TEXT("AHitscanFirearm"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(AHitscanFirearm);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
