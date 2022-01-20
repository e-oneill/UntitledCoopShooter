// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "UntitledCoopShooter/Public/IKAnimInstance.h"
#include "Engine/Classes/Components/SkeletalMeshComponent.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeIKAnimInstance() {}
// Cross Module References
	UNTITLEDCOOPSHOOTER_API UClass* Z_Construct_UClass_UIKAnimInstance_NoRegister();
	UNTITLEDCOOPSHOOTER_API UClass* Z_Construct_UClass_UIKAnimInstance();
	ENGINE_API UClass* Z_Construct_UClass_UAnimInstance();
	UPackage* Z_Construct_UPackage__Script_UntitledCoopShooter();
	UNTITLEDCOOPSHOOTER_API UClass* Z_Construct_UClass_ACoopCharacter_NoRegister();
	COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FTransform();
	COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FVector();
	ENGINE_API UClass* Z_Construct_UClass_UCurveVector_NoRegister();
	COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FRotator();
// End Cross Module References
	DEFINE_FUNCTION(UIKAnimInstance::execFire)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->Fire();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UIKAnimInstance::execStopReload)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->StopReload();
		P_NATIVE_END;
	}
	void UIKAnimInstance::StaticRegisterNativesUIKAnimInstance()
	{
		UClass* Class = UIKAnimInstance::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "Fire", &UIKAnimInstance::execFire },
			{ "StopReload", &UIKAnimInstance::execStopReload },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_UIKAnimInstance_Fire_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UIKAnimInstance_Fire_Statics::Function_MetaDataParams[] = {
		{ "Category", "Procedural Aiming" },
		{ "ModuleRelativePath", "Public/IKAnimInstance.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UIKAnimInstance_Fire_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UIKAnimInstance, nullptr, "Fire", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UIKAnimInstance_Fire_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UIKAnimInstance_Fire_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UIKAnimInstance_Fire()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UIKAnimInstance_Fire_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UIKAnimInstance_StopReload_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UIKAnimInstance_StopReload_Statics::Function_MetaDataParams[] = {
		{ "Category", "Procedural Aiming" },
		{ "ModuleRelativePath", "Public/IKAnimInstance.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UIKAnimInstance_StopReload_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UIKAnimInstance, nullptr, "StopReload", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UIKAnimInstance_StopReload_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UIKAnimInstance_StopReload_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UIKAnimInstance_StopReload()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UIKAnimInstance_StopReload_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	UClass* Z_Construct_UClass_UIKAnimInstance_NoRegister()
	{
		return UIKAnimInstance::StaticClass();
	}
	struct Z_Construct_UClass_UIKAnimInstance_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Character_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_Character;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_RelativeHandTransform_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_RelativeHandTransform;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_SightTransform_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_SightTransform;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_LeftHandTransform_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_LeftHandTransform;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_SwayLocation_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_SwayLocation;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_AimAlpha_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_AimAlpha;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_ReloadAlpha_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_ReloadAlpha;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_WalkingSwayCurve_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_WalkingSwayCurve;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_TurnRot_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_TurnRot;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_TurnLocation_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_TurnLocation;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_TurningSwayTransform_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_TurningSwayTransform;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_RecoilTransform_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_RecoilTransform;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_OldRot_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_OldRot;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UIKAnimInstance_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UAnimInstance,
		(UObject* (*)())Z_Construct_UPackage__Script_UntitledCoopShooter,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_UIKAnimInstance_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_UIKAnimInstance_Fire, "Fire" }, // 3826755928
		{ &Z_Construct_UFunction_UIKAnimInstance_StopReload, "StopReload" }, // 3399312803
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UIKAnimInstance_Statics::Class_MetaDataParams[] = {
		{ "Comment", "/**\n *\n */" },
		{ "HideCategories", "AnimInstance" },
		{ "IncludePath", "IKAnimInstance.h" },
		{ "ModuleRelativePath", "Public/IKAnimInstance.h" },
	};
#endif
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UIKAnimInstance_Statics::NewProp_Character_MetaData[] = {
		{ "Category", "Procedural Aiming" },
		{ "ModuleRelativePath", "Public/IKAnimInstance.h" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UIKAnimInstance_Statics::NewProp_Character = { "Character", nullptr, (EPropertyFlags)0x0020080000000014, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UIKAnimInstance, Character), Z_Construct_UClass_ACoopCharacter_NoRegister, METADATA_PARAMS(Z_Construct_UClass_UIKAnimInstance_Statics::NewProp_Character_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UIKAnimInstance_Statics::NewProp_Character_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UIKAnimInstance_Statics::NewProp_RelativeHandTransform_MetaData[] = {
		{ "Category", "Procedural Aiming" },
		{ "ModuleRelativePath", "Public/IKAnimInstance.h" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UIKAnimInstance_Statics::NewProp_RelativeHandTransform = { "RelativeHandTransform", nullptr, (EPropertyFlags)0x0020080000000014, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UIKAnimInstance, RelativeHandTransform), Z_Construct_UScriptStruct_FTransform, METADATA_PARAMS(Z_Construct_UClass_UIKAnimInstance_Statics::NewProp_RelativeHandTransform_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UIKAnimInstance_Statics::NewProp_RelativeHandTransform_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UIKAnimInstance_Statics::NewProp_SightTransform_MetaData[] = {
		{ "Category", "Procedural Aiming" },
		{ "ModuleRelativePath", "Public/IKAnimInstance.h" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UIKAnimInstance_Statics::NewProp_SightTransform = { "SightTransform", nullptr, (EPropertyFlags)0x0020080000000014, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UIKAnimInstance, SightTransform), Z_Construct_UScriptStruct_FTransform, METADATA_PARAMS(Z_Construct_UClass_UIKAnimInstance_Statics::NewProp_SightTransform_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UIKAnimInstance_Statics::NewProp_SightTransform_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UIKAnimInstance_Statics::NewProp_LeftHandTransform_MetaData[] = {
		{ "Category", "Procedural Aiming" },
		{ "ModuleRelativePath", "Public/IKAnimInstance.h" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UIKAnimInstance_Statics::NewProp_LeftHandTransform = { "LeftHandTransform", nullptr, (EPropertyFlags)0x0020080000000014, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UIKAnimInstance, LeftHandTransform), Z_Construct_UScriptStruct_FTransform, METADATA_PARAMS(Z_Construct_UClass_UIKAnimInstance_Statics::NewProp_LeftHandTransform_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UIKAnimInstance_Statics::NewProp_LeftHandTransform_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UIKAnimInstance_Statics::NewProp_SwayLocation_MetaData[] = {
		{ "Category", "Procedural Aiming" },
		{ "ModuleRelativePath", "Public/IKAnimInstance.h" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UIKAnimInstance_Statics::NewProp_SwayLocation = { "SwayLocation", nullptr, (EPropertyFlags)0x0020080000000014, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UIKAnimInstance, SwayLocation), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(Z_Construct_UClass_UIKAnimInstance_Statics::NewProp_SwayLocation_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UIKAnimInstance_Statics::NewProp_SwayLocation_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UIKAnimInstance_Statics::NewProp_AimAlpha_MetaData[] = {
		{ "Category", "Procedural Aiming" },
		{ "ModuleRelativePath", "Public/IKAnimInstance.h" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UIKAnimInstance_Statics::NewProp_AimAlpha = { "AimAlpha", nullptr, (EPropertyFlags)0x0020080000000014, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UIKAnimInstance, AimAlpha), METADATA_PARAMS(Z_Construct_UClass_UIKAnimInstance_Statics::NewProp_AimAlpha_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UIKAnimInstance_Statics::NewProp_AimAlpha_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UIKAnimInstance_Statics::NewProp_ReloadAlpha_MetaData[] = {
		{ "Category", "Procedural Aiming" },
		{ "ModuleRelativePath", "Public/IKAnimInstance.h" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UIKAnimInstance_Statics::NewProp_ReloadAlpha = { "ReloadAlpha", nullptr, (EPropertyFlags)0x0020080000000014, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UIKAnimInstance, ReloadAlpha), METADATA_PARAMS(Z_Construct_UClass_UIKAnimInstance_Statics::NewProp_ReloadAlpha_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UIKAnimInstance_Statics::NewProp_ReloadAlpha_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UIKAnimInstance_Statics::NewProp_WalkingSwayCurve_MetaData[] = {
		{ "Category", "Procedural Aiming" },
		{ "ModuleRelativePath", "Public/IKAnimInstance.h" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UIKAnimInstance_Statics::NewProp_WalkingSwayCurve = { "WalkingSwayCurve", nullptr, (EPropertyFlags)0x0020080000000015, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UIKAnimInstance, WalkingSwayCurve), Z_Construct_UClass_UCurveVector_NoRegister, METADATA_PARAMS(Z_Construct_UClass_UIKAnimInstance_Statics::NewProp_WalkingSwayCurve_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UIKAnimInstance_Statics::NewProp_WalkingSwayCurve_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UIKAnimInstance_Statics::NewProp_TurnRot_MetaData[] = {
		{ "Category", "Procedural Aiming" },
		{ "ModuleRelativePath", "Public/IKAnimInstance.h" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UIKAnimInstance_Statics::NewProp_TurnRot = { "TurnRot", nullptr, (EPropertyFlags)0x0020080000000014, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UIKAnimInstance, TurnRot), Z_Construct_UScriptStruct_FRotator, METADATA_PARAMS(Z_Construct_UClass_UIKAnimInstance_Statics::NewProp_TurnRot_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UIKAnimInstance_Statics::NewProp_TurnRot_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UIKAnimInstance_Statics::NewProp_TurnLocation_MetaData[] = {
		{ "Category", "Procedural Aiming" },
		{ "ModuleRelativePath", "Public/IKAnimInstance.h" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UIKAnimInstance_Statics::NewProp_TurnLocation = { "TurnLocation", nullptr, (EPropertyFlags)0x0020080000000014, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UIKAnimInstance, TurnLocation), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(Z_Construct_UClass_UIKAnimInstance_Statics::NewProp_TurnLocation_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UIKAnimInstance_Statics::NewProp_TurnLocation_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UIKAnimInstance_Statics::NewProp_TurningSwayTransform_MetaData[] = {
		{ "Category", "Procedural Aiming" },
		{ "ModuleRelativePath", "Public/IKAnimInstance.h" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UIKAnimInstance_Statics::NewProp_TurningSwayTransform = { "TurningSwayTransform", nullptr, (EPropertyFlags)0x0020080000000014, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UIKAnimInstance, TurningSwayTransform), Z_Construct_UScriptStruct_FTransform, METADATA_PARAMS(Z_Construct_UClass_UIKAnimInstance_Statics::NewProp_TurningSwayTransform_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UIKAnimInstance_Statics::NewProp_TurningSwayTransform_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UIKAnimInstance_Statics::NewProp_RecoilTransform_MetaData[] = {
		{ "Category", "Procedural Aiming" },
		{ "ModuleRelativePath", "Public/IKAnimInstance.h" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UIKAnimInstance_Statics::NewProp_RecoilTransform = { "RecoilTransform", nullptr, (EPropertyFlags)0x0020080000000014, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UIKAnimInstance, RecoilTransform), Z_Construct_UScriptStruct_FTransform, METADATA_PARAMS(Z_Construct_UClass_UIKAnimInstance_Statics::NewProp_RecoilTransform_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UIKAnimInstance_Statics::NewProp_RecoilTransform_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UIKAnimInstance_Statics::NewProp_OldRot_MetaData[] = {
		{ "Category", "Procedural Aiming" },
		{ "ModuleRelativePath", "Public/IKAnimInstance.h" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UIKAnimInstance_Statics::NewProp_OldRot = { "OldRot", nullptr, (EPropertyFlags)0x0020080000000014, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UIKAnimInstance, OldRot), Z_Construct_UScriptStruct_FRotator, METADATA_PARAMS(Z_Construct_UClass_UIKAnimInstance_Statics::NewProp_OldRot_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UIKAnimInstance_Statics::NewProp_OldRot_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UIKAnimInstance_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UIKAnimInstance_Statics::NewProp_Character,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UIKAnimInstance_Statics::NewProp_RelativeHandTransform,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UIKAnimInstance_Statics::NewProp_SightTransform,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UIKAnimInstance_Statics::NewProp_LeftHandTransform,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UIKAnimInstance_Statics::NewProp_SwayLocation,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UIKAnimInstance_Statics::NewProp_AimAlpha,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UIKAnimInstance_Statics::NewProp_ReloadAlpha,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UIKAnimInstance_Statics::NewProp_WalkingSwayCurve,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UIKAnimInstance_Statics::NewProp_TurnRot,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UIKAnimInstance_Statics::NewProp_TurnLocation,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UIKAnimInstance_Statics::NewProp_TurningSwayTransform,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UIKAnimInstance_Statics::NewProp_RecoilTransform,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UIKAnimInstance_Statics::NewProp_OldRot,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UIKAnimInstance_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UIKAnimInstance>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UIKAnimInstance_Statics::ClassParams = {
		&UIKAnimInstance::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		FuncInfo,
		Z_Construct_UClass_UIKAnimInstance_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		UE_ARRAY_COUNT(FuncInfo),
		UE_ARRAY_COUNT(Z_Construct_UClass_UIKAnimInstance_Statics::PropPointers),
		0,
		0x009000A8u,
		METADATA_PARAMS(Z_Construct_UClass_UIKAnimInstance_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UIKAnimInstance_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UIKAnimInstance()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UECodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_UIKAnimInstance_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(UIKAnimInstance, 3837452003);
	template<> UNTITLEDCOOPSHOOTER_API UClass* StaticClass<UIKAnimInstance>()
	{
		return UIKAnimInstance::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_UIKAnimInstance(Z_Construct_UClass_UIKAnimInstance, &UIKAnimInstance::StaticClass, TEXT("/Script/UntitledCoopShooter"), TEXT("UIKAnimInstance"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UIKAnimInstance);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
