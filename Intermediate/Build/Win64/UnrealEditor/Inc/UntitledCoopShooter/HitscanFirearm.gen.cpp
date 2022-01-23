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
	UNTITLEDCOOPSHOOTER_API UEnum* Z_Construct_UEnum_UntitledCoopShooter_EFireMode();
	UPackage* Z_Construct_UPackage__Script_UntitledCoopShooter();
	UNTITLEDCOOPSHOOTER_API UEnum* Z_Construct_UEnum_UntitledCoopShooter_EWeaponClass();
	UNTITLEDCOOPSHOOTER_API UScriptStruct* Z_Construct_UScriptStruct_FHitScanTrace();
	PHYSICSCORE_API UEnum* Z_Construct_UEnum_PhysicsCore_EPhysicalSurface();
	ENGINE_API UScriptStruct* Z_Construct_UScriptStruct_FVector_NetQuantize();
	UNTITLEDCOOPSHOOTER_API UClass* Z_Construct_UClass_AHitscanFirearm_NoRegister();
	UNTITLEDCOOPSHOOTER_API UClass* Z_Construct_UClass_AHitscanFirearm();
	ENGINE_API UClass* Z_Construct_UClass_AActor();
	ENGINE_API UClass* Z_Construct_UClass_UStaticMeshComponent_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_USkeletalMeshComponent_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_USoundBase_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_UAnimMontage_NoRegister();
	COREUOBJECT_API UClass* Z_Construct_UClass_UClass();
	ENGINE_API UClass* Z_Construct_UClass_UDamageType_NoRegister();
// End Cross Module References
	static UEnum* EFireMode_StaticEnum()
	{
		static UEnum* Singleton = nullptr;
		if (!Singleton)
		{
			Singleton = GetStaticEnum(Z_Construct_UEnum_UntitledCoopShooter_EFireMode, Z_Construct_UPackage__Script_UntitledCoopShooter(), TEXT("EFireMode"));
		}
		return Singleton;
	}
	template<> UNTITLEDCOOPSHOOTER_API UEnum* StaticEnum<EFireMode>()
	{
		return EFireMode_StaticEnum();
	}
	static FCompiledInDeferEnum Z_CompiledInDeferEnum_UEnum_EFireMode(EFireMode_StaticEnum, TEXT("/Script/UntitledCoopShooter"), TEXT("EFireMode"), false, nullptr, nullptr);
	uint32 Get_Z_Construct_UEnum_UntitledCoopShooter_EFireMode_Hash() { return 3852982991U; }
	UEnum* Z_Construct_UEnum_UntitledCoopShooter_EFireMode()
	{
#if WITH_HOT_RELOAD
		UPackage* Outer = Z_Construct_UPackage__Script_UntitledCoopShooter();
		static UEnum* ReturnEnum = FindExistingEnumIfHotReloadOrDynamic(Outer, TEXT("EFireMode"), 0, Get_Z_Construct_UEnum_UntitledCoopShooter_EFireMode_Hash(), false);
#else
		static UEnum* ReturnEnum = nullptr;
#endif // WITH_HOT_RELOAD
		if (!ReturnEnum)
		{
			static const UECodeGen_Private::FEnumeratorParam Enumerators[] = {
				{ "EFireMode::FullAuto", (int64)EFireMode::FullAuto },
				{ "EFireMode::SemiAuto", (int64)EFireMode::SemiAuto },
				{ "EFireMode::Burst", (int64)EFireMode::Burst },
			};
#if WITH_METADATA
			const UECodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[] = {
				{ "BlueprintType", "true" },
				{ "Burst.Name", "EFireMode::Burst" },
				{ "FullAuto.Name", "EFireMode::FullAuto" },
				{ "ModuleRelativePath", "Public/HitscanFirearm.h" },
				{ "SemiAuto.Name", "EFireMode::SemiAuto" },
			};
#endif
			static const UECodeGen_Private::FEnumParams EnumParams = {
				(UObject*(*)())Z_Construct_UPackage__Script_UntitledCoopShooter,
				nullptr,
				"EFireMode",
				"EFireMode",
				Enumerators,
				UE_ARRAY_COUNT(Enumerators),
				RF_Public|RF_Transient|RF_MarkAsNative,
				EEnumFlags::None,
				UECodeGen_Private::EDynamicType::NotDynamic,
				(uint8)UEnum::ECppForm::EnumClass,
				METADATA_PARAMS(Enum_MetaDataParams, UE_ARRAY_COUNT(Enum_MetaDataParams))
			};
			UECodeGen_Private::ConstructUEnum(ReturnEnum, EnumParams);
		}
		return ReturnEnum;
	}
	static UEnum* EWeaponClass_StaticEnum()
	{
		static UEnum* Singleton = nullptr;
		if (!Singleton)
		{
			Singleton = GetStaticEnum(Z_Construct_UEnum_UntitledCoopShooter_EWeaponClass, Z_Construct_UPackage__Script_UntitledCoopShooter(), TEXT("EWeaponClass"));
		}
		return Singleton;
	}
	template<> UNTITLEDCOOPSHOOTER_API UEnum* StaticEnum<EWeaponClass>()
	{
		return EWeaponClass_StaticEnum();
	}
	static FCompiledInDeferEnum Z_CompiledInDeferEnum_UEnum_EWeaponClass(EWeaponClass_StaticEnum, TEXT("/Script/UntitledCoopShooter"), TEXT("EWeaponClass"), false, nullptr, nullptr);
	uint32 Get_Z_Construct_UEnum_UntitledCoopShooter_EWeaponClass_Hash() { return 1395949849U; }
	UEnum* Z_Construct_UEnum_UntitledCoopShooter_EWeaponClass()
	{
#if WITH_HOT_RELOAD
		UPackage* Outer = Z_Construct_UPackage__Script_UntitledCoopShooter();
		static UEnum* ReturnEnum = FindExistingEnumIfHotReloadOrDynamic(Outer, TEXT("EWeaponClass"), 0, Get_Z_Construct_UEnum_UntitledCoopShooter_EWeaponClass_Hash(), false);
#else
		static UEnum* ReturnEnum = nullptr;
#endif // WITH_HOT_RELOAD
		if (!ReturnEnum)
		{
			static const UECodeGen_Private::FEnumeratorParam Enumerators[] = {
				{ "EWeaponClass::Primary", (int64)EWeaponClass::Primary },
				{ "EWeaponClass::Sidearm", (int64)EWeaponClass::Sidearm },
				{ "EWeaponClass::Special", (int64)EWeaponClass::Special },
			};
#if WITH_METADATA
			const UECodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[] = {
				{ "BlueprintType", "true" },
				{ "ModuleRelativePath", "Public/HitscanFirearm.h" },
				{ "Primary.Name", "EWeaponClass::Primary" },
				{ "Sidearm.Name", "EWeaponClass::Sidearm" },
				{ "Special.Name", "EWeaponClass::Special" },
			};
#endif
			static const UECodeGen_Private::FEnumParams EnumParams = {
				(UObject*(*)())Z_Construct_UPackage__Script_UntitledCoopShooter,
				nullptr,
				"EWeaponClass",
				"EWeaponClass",
				Enumerators,
				UE_ARRAY_COUNT(Enumerators),
				RF_Public|RF_Transient|RF_MarkAsNative,
				EEnumFlags::None,
				UECodeGen_Private::EDynamicType::NotDynamic,
				(uint8)UEnum::ECppForm::EnumClass,
				METADATA_PARAMS(Enum_MetaDataParams, UE_ARRAY_COUNT(Enum_MetaDataParams))
			};
			UECodeGen_Private::ConstructUEnum(ReturnEnum, EnumParams);
		}
		return ReturnEnum;
	}
class UScriptStruct* FHitScanTrace::StaticStruct()
{
	static class UScriptStruct* Singleton = NULL;
	if (!Singleton)
	{
		extern UNTITLEDCOOPSHOOTER_API uint32 Get_Z_Construct_UScriptStruct_FHitScanTrace_Hash();
		Singleton = GetStaticStruct(Z_Construct_UScriptStruct_FHitScanTrace, Z_Construct_UPackage__Script_UntitledCoopShooter(), TEXT("HitScanTrace"), sizeof(FHitScanTrace), Get_Z_Construct_UScriptStruct_FHitScanTrace_Hash());
	}
	return Singleton;
}
template<> UNTITLEDCOOPSHOOTER_API UScriptStruct* StaticStruct<FHitScanTrace>()
{
	return FHitScanTrace::StaticStruct();
}
static FCompiledInDeferStruct Z_CompiledInDeferStruct_UScriptStruct_FHitScanTrace(FHitScanTrace::StaticStruct, TEXT("/Script/UntitledCoopShooter"), TEXT("HitScanTrace"), false, nullptr, nullptr);
static struct FScriptStruct_UntitledCoopShooter_StaticRegisterNativesFHitScanTrace
{
	FScriptStruct_UntitledCoopShooter_StaticRegisterNativesFHitScanTrace()
	{
		UScriptStruct::DeferCppStructOps(FName(TEXT("HitScanTrace")),new UScriptStruct::TCppStructOps<FHitScanTrace>);
	}
} ScriptStruct_UntitledCoopShooter_StaticRegisterNativesFHitScanTrace;
	struct Z_Construct_UScriptStruct_FHitScanTrace_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_ForceReplication_MetaData[];
#endif
		static const UECodeGen_Private::FInt8PropertyParams NewProp_ForceReplication;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_SurfaceType_MetaData[];
#endif
		static const UECodeGen_Private::FBytePropertyParams NewProp_SurfaceType;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_TraceTo_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_TraceTo;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UECodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FHitScanTrace_Statics::Struct_MetaDataParams[] = {
		{ "Comment", "//A custom struct that contains information of a single Hit Scan Weapon Line trace\n" },
		{ "ModuleRelativePath", "Public/HitscanFirearm.h" },
		{ "ToolTip", "A custom struct that contains information of a single Hit Scan Weapon Line trace" },
	};
#endif
	void* Z_Construct_UScriptStruct_FHitScanTrace_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FHitScanTrace>();
	}
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FHitScanTrace_Statics::NewProp_ForceReplication_MetaData[] = {
		{ "ModuleRelativePath", "Public/HitscanFirearm.h" },
	};
#endif
	const UECodeGen_Private::FInt8PropertyParams Z_Construct_UScriptStruct_FHitScanTrace_Statics::NewProp_ForceReplication = { "ForceReplication", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Int8, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FHitScanTrace, ForceReplication), METADATA_PARAMS(Z_Construct_UScriptStruct_FHitScanTrace_Statics::NewProp_ForceReplication_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FHitScanTrace_Statics::NewProp_ForceReplication_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FHitScanTrace_Statics::NewProp_SurfaceType_MetaData[] = {
		{ "ModuleRelativePath", "Public/HitscanFirearm.h" },
	};
#endif
	const UECodeGen_Private::FBytePropertyParams Z_Construct_UScriptStruct_FHitScanTrace_Statics::NewProp_SurfaceType = { "SurfaceType", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FHitScanTrace, SurfaceType), Z_Construct_UEnum_PhysicsCore_EPhysicalSurface, METADATA_PARAMS(Z_Construct_UScriptStruct_FHitScanTrace_Statics::NewProp_SurfaceType_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FHitScanTrace_Statics::NewProp_SurfaceType_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FHitScanTrace_Statics::NewProp_TraceTo_MetaData[] = {
		{ "ModuleRelativePath", "Public/HitscanFirearm.h" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FHitScanTrace_Statics::NewProp_TraceTo = { "TraceTo", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FHitScanTrace, TraceTo), Z_Construct_UScriptStruct_FVector_NetQuantize, METADATA_PARAMS(Z_Construct_UScriptStruct_FHitScanTrace_Statics::NewProp_TraceTo_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FHitScanTrace_Statics::NewProp_TraceTo_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FHitScanTrace_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FHitScanTrace_Statics::NewProp_ForceReplication,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FHitScanTrace_Statics::NewProp_SurfaceType,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FHitScanTrace_Statics::NewProp_TraceTo,
	};
	const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FHitScanTrace_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_UntitledCoopShooter,
		nullptr,
		&NewStructOps,
		"HitScanTrace",
		sizeof(FHitScanTrace),
		alignof(FHitScanTrace),
		Z_Construct_UScriptStruct_FHitScanTrace_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FHitScanTrace_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000001),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FHitScanTrace_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FHitScanTrace_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FHitScanTrace()
	{
#if WITH_HOT_RELOAD
		extern uint32 Get_Z_Construct_UScriptStruct_FHitScanTrace_Hash();
		UPackage* Outer = Z_Construct_UPackage__Script_UntitledCoopShooter();
		static UScriptStruct* ReturnStruct = FindExistingStructIfHotReloadOrDynamic(Outer, TEXT("HitScanTrace"), sizeof(FHitScanTrace), Get_Z_Construct_UScriptStruct_FHitScanTrace_Hash(), false);
#else
		static UScriptStruct* ReturnStruct = nullptr;
#endif
		if (!ReturnStruct)
		{
			UECodeGen_Private::ConstructUScriptStruct(ReturnStruct, Z_Construct_UScriptStruct_FHitScanTrace_Statics::ReturnStructParams);
		}
		return ReturnStruct;
	}
	uint32 Get_Z_Construct_UScriptStruct_FHitScanTrace_Hash() { return 4017103094U; }
	DEFINE_FUNCTION(AHitscanFirearm::execSwitchFireMode)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->SwitchFireMode();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(AHitscanFirearm::execGetWeaponClass)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(EWeaponClass*)Z_Param__Result=P_THIS->GetWeaponClass();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(AHitscanFirearm::execGetWeaponVerticalRecoil)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(float*)Z_Param__Result=P_THIS->GetWeaponVerticalRecoil();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(AHitscanFirearm::execGetWeaponLateralRecoil)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(float*)Z_Param__Result=P_THIS->GetWeaponLateralRecoil();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(AHitscanFirearm::execGetWeaponErgonomics)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(float*)Z_Param__Result=P_THIS->GetWeaponErgonomics();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(AHitscanFirearm::execGetWeaponWeight)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(float*)Z_Param__Result=P_THIS->GetWeaponWeight();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(AHitscanFirearm::execGetMeshComponent)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(USkeletalMeshComponent**)Z_Param__Result=P_THIS->GetMeshComponent();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(AHitscanFirearm::execOnRep_HitScanTrace)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->OnRep_HitScanTrace();
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
			{ "GetWeaponClass", &AHitscanFirearm::execGetWeaponClass },
			{ "GetWeaponErgonomics", &AHitscanFirearm::execGetWeaponErgonomics },
			{ "GetWeaponLateralRecoil", &AHitscanFirearm::execGetWeaponLateralRecoil },
			{ "GetWeaponVerticalRecoil", &AHitscanFirearm::execGetWeaponVerticalRecoil },
			{ "GetWeaponWeight", &AHitscanFirearm::execGetWeaponWeight },
			{ "OnRep_HitScanTrace", &AHitscanFirearm::execOnRep_HitScanTrace },
			{ "SwitchFireMode", &AHitscanFirearm::execSwitchFireMode },
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
		{ "Comment", "//Getters\n" },
		{ "ModuleRelativePath", "Public/HitscanFirearm.h" },
		{ "ToolTip", "Getters" },
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
	struct Z_Construct_UFunction_AHitscanFirearm_GetWeaponClass_Statics
	{
		struct HitscanFirearm_eventGetWeaponClass_Parms
		{
			EWeaponClass ReturnValue;
		};
		static const UECodeGen_Private::FBytePropertyParams NewProp_ReturnValue_Underlying;
		static const UECodeGen_Private::FEnumPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FBytePropertyParams Z_Construct_UFunction_AHitscanFirearm_GetWeaponClass_Statics::NewProp_ReturnValue_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FEnumPropertyParams Z_Construct_UFunction_AHitscanFirearm_GetWeaponClass_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(HitscanFirearm_eventGetWeaponClass_Parms, ReturnValue), Z_Construct_UEnum_UntitledCoopShooter_EWeaponClass, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AHitscanFirearm_GetWeaponClass_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AHitscanFirearm_GetWeaponClass_Statics::NewProp_ReturnValue_Underlying,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AHitscanFirearm_GetWeaponClass_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AHitscanFirearm_GetWeaponClass_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/HitscanFirearm.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_AHitscanFirearm_GetWeaponClass_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AHitscanFirearm, nullptr, "GetWeaponClass", nullptr, nullptr, sizeof(HitscanFirearm_eventGetWeaponClass_Parms), Z_Construct_UFunction_AHitscanFirearm_GetWeaponClass_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_AHitscanFirearm_GetWeaponClass_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_AHitscanFirearm_GetWeaponClass_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_AHitscanFirearm_GetWeaponClass_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_AHitscanFirearm_GetWeaponClass()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_AHitscanFirearm_GetWeaponClass_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_AHitscanFirearm_GetWeaponErgonomics_Statics
	{
		struct HitscanFirearm_eventGetWeaponErgonomics_Parms
		{
			float ReturnValue;
		};
		static const UECodeGen_Private::FFloatPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_AHitscanFirearm_GetWeaponErgonomics_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(HitscanFirearm_eventGetWeaponErgonomics_Parms, ReturnValue), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AHitscanFirearm_GetWeaponErgonomics_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AHitscanFirearm_GetWeaponErgonomics_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AHitscanFirearm_GetWeaponErgonomics_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/HitscanFirearm.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_AHitscanFirearm_GetWeaponErgonomics_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AHitscanFirearm, nullptr, "GetWeaponErgonomics", nullptr, nullptr, sizeof(HitscanFirearm_eventGetWeaponErgonomics_Parms), Z_Construct_UFunction_AHitscanFirearm_GetWeaponErgonomics_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_AHitscanFirearm_GetWeaponErgonomics_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_AHitscanFirearm_GetWeaponErgonomics_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_AHitscanFirearm_GetWeaponErgonomics_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_AHitscanFirearm_GetWeaponErgonomics()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_AHitscanFirearm_GetWeaponErgonomics_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_AHitscanFirearm_GetWeaponLateralRecoil_Statics
	{
		struct HitscanFirearm_eventGetWeaponLateralRecoil_Parms
		{
			float ReturnValue;
		};
		static const UECodeGen_Private::FFloatPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_AHitscanFirearm_GetWeaponLateralRecoil_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(HitscanFirearm_eventGetWeaponLateralRecoil_Parms, ReturnValue), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AHitscanFirearm_GetWeaponLateralRecoil_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AHitscanFirearm_GetWeaponLateralRecoil_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AHitscanFirearm_GetWeaponLateralRecoil_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/HitscanFirearm.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_AHitscanFirearm_GetWeaponLateralRecoil_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AHitscanFirearm, nullptr, "GetWeaponLateralRecoil", nullptr, nullptr, sizeof(HitscanFirearm_eventGetWeaponLateralRecoil_Parms), Z_Construct_UFunction_AHitscanFirearm_GetWeaponLateralRecoil_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_AHitscanFirearm_GetWeaponLateralRecoil_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_AHitscanFirearm_GetWeaponLateralRecoil_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_AHitscanFirearm_GetWeaponLateralRecoil_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_AHitscanFirearm_GetWeaponLateralRecoil()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_AHitscanFirearm_GetWeaponLateralRecoil_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_AHitscanFirearm_GetWeaponVerticalRecoil_Statics
	{
		struct HitscanFirearm_eventGetWeaponVerticalRecoil_Parms
		{
			float ReturnValue;
		};
		static const UECodeGen_Private::FFloatPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_AHitscanFirearm_GetWeaponVerticalRecoil_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(HitscanFirearm_eventGetWeaponVerticalRecoil_Parms, ReturnValue), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AHitscanFirearm_GetWeaponVerticalRecoil_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AHitscanFirearm_GetWeaponVerticalRecoil_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AHitscanFirearm_GetWeaponVerticalRecoil_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/HitscanFirearm.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_AHitscanFirearm_GetWeaponVerticalRecoil_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AHitscanFirearm, nullptr, "GetWeaponVerticalRecoil", nullptr, nullptr, sizeof(HitscanFirearm_eventGetWeaponVerticalRecoil_Parms), Z_Construct_UFunction_AHitscanFirearm_GetWeaponVerticalRecoil_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_AHitscanFirearm_GetWeaponVerticalRecoil_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_AHitscanFirearm_GetWeaponVerticalRecoil_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_AHitscanFirearm_GetWeaponVerticalRecoil_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_AHitscanFirearm_GetWeaponVerticalRecoil()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_AHitscanFirearm_GetWeaponVerticalRecoil_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_AHitscanFirearm_GetWeaponWeight_Statics
	{
		struct HitscanFirearm_eventGetWeaponWeight_Parms
		{
			float ReturnValue;
		};
		static const UECodeGen_Private::FFloatPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_AHitscanFirearm_GetWeaponWeight_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(HitscanFirearm_eventGetWeaponWeight_Parms, ReturnValue), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AHitscanFirearm_GetWeaponWeight_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AHitscanFirearm_GetWeaponWeight_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AHitscanFirearm_GetWeaponWeight_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/HitscanFirearm.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_AHitscanFirearm_GetWeaponWeight_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AHitscanFirearm, nullptr, "GetWeaponWeight", nullptr, nullptr, sizeof(HitscanFirearm_eventGetWeaponWeight_Parms), Z_Construct_UFunction_AHitscanFirearm_GetWeaponWeight_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_AHitscanFirearm_GetWeaponWeight_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_AHitscanFirearm_GetWeaponWeight_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_AHitscanFirearm_GetWeaponWeight_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_AHitscanFirearm_GetWeaponWeight()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_AHitscanFirearm_GetWeaponWeight_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_AHitscanFirearm_OnRep_HitScanTrace_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AHitscanFirearm_OnRep_HitScanTrace_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/HitscanFirearm.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_AHitscanFirearm_OnRep_HitScanTrace_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AHitscanFirearm, nullptr, "OnRep_HitScanTrace", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00080401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_AHitscanFirearm_OnRep_HitScanTrace_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_AHitscanFirearm_OnRep_HitScanTrace_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_AHitscanFirearm_OnRep_HitScanTrace()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_AHitscanFirearm_OnRep_HitScanTrace_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_AHitscanFirearm_SwitchFireMode_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AHitscanFirearm_SwitchFireMode_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/HitscanFirearm.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_AHitscanFirearm_SwitchFireMode_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AHitscanFirearm, nullptr, "SwitchFireMode", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_AHitscanFirearm_SwitchFireMode_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_AHitscanFirearm_SwitchFireMode_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_AHitscanFirearm_SwitchFireMode()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_AHitscanFirearm_SwitchFireMode_Statics::FuncParams);
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
		static const UECodeGen_Private::FBytePropertyParams NewProp_WeaponClass_Underlying;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_WeaponClass_MetaData[];
#endif
		static const UECodeGen_Private::FEnumPropertyParams NewProp_WeaponClass;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_WeaponDamage_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_WeaponDamage;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_WeaponWeight_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_WeaponWeight;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_WeaponEffectiveRange_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_WeaponEffectiveRange;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_DamageType_MetaData[];
#endif
		static const UECodeGen_Private::FClassPropertyParams NewProp_DamageType;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_WeaponErgonomics_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_WeaponErgonomics;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_WeaponLateralRecoil_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_WeaponLateralRecoil;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_WeaponVerticalRecoil_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_WeaponVerticalRecoil;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_bCanFullAuto_MetaData[];
#endif
		static void NewProp_bCanFullAuto_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bCanFullAuto;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_bCanSemiAuto_MetaData[];
#endif
		static void NewProp_bCanSemiAuto_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bCanSemiAuto;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_bCanBurstFire_MetaData[];
#endif
		static void NewProp_bCanBurstFire_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bCanBurstFire;
		static const UECodeGen_Private::FBytePropertyParams NewProp_CurrentFireMode_Underlying;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_CurrentFireMode_MetaData[];
#endif
		static const UECodeGen_Private::FEnumPropertyParams NewProp_CurrentFireMode;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_ShotsPerBurst_MetaData[];
#endif
		static const UECodeGen_Private::FIntPropertyParams NewProp_ShotsPerBurst;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_RateOfFire_MetaData[];
#endif
		static const UECodeGen_Private::FIntPropertyParams NewProp_RateOfFire;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_HitScanTrace_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_HitScanTrace;
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
		{ &Z_Construct_UFunction_AHitscanFirearm_GetMeshComponent, "GetMeshComponent" }, // 119203018
		{ &Z_Construct_UFunction_AHitscanFirearm_GetWeaponClass, "GetWeaponClass" }, // 2340142176
		{ &Z_Construct_UFunction_AHitscanFirearm_GetWeaponErgonomics, "GetWeaponErgonomics" }, // 3698119861
		{ &Z_Construct_UFunction_AHitscanFirearm_GetWeaponLateralRecoil, "GetWeaponLateralRecoil" }, // 881118859
		{ &Z_Construct_UFunction_AHitscanFirearm_GetWeaponVerticalRecoil, "GetWeaponVerticalRecoil" }, // 3697157449
		{ &Z_Construct_UFunction_AHitscanFirearm_GetWeaponWeight, "GetWeaponWeight" }, // 3374454753
		{ &Z_Construct_UFunction_AHitscanFirearm_OnRep_HitScanTrace, "OnRep_HitScanTrace" }, // 3591250040
		{ &Z_Construct_UFunction_AHitscanFirearm_SwitchFireMode, "SwitchFireMode" }, // 3906180696
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
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AHitscanFirearm_Statics::NewProp_MeshComponent = { "MeshComponent", nullptr, (EPropertyFlags)0x0040000000090009, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AHitscanFirearm, MeshComponent), Z_Construct_UClass_USkeletalMeshComponent_NoRegister, METADATA_PARAMS(Z_Construct_UClass_AHitscanFirearm_Statics::NewProp_MeshComponent_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AHitscanFirearm_Statics::NewProp_MeshComponent_MetaData)) };
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
	const UECodeGen_Private::FBytePropertyParams Z_Construct_UClass_AHitscanFirearm_Statics::NewProp_WeaponClass_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AHitscanFirearm_Statics::NewProp_WeaponClass_MetaData[] = {
		{ "Category", "Weapon Stats" },
		{ "Comment", "//Is this a primary, secondary or special weapon?\n" },
		{ "ModuleRelativePath", "Public/HitscanFirearm.h" },
		{ "ToolTip", "Is this a primary, secondary or special weapon?" },
	};
#endif
	const UECodeGen_Private::FEnumPropertyParams Z_Construct_UClass_AHitscanFirearm_Statics::NewProp_WeaponClass = { "WeaponClass", nullptr, (EPropertyFlags)0x0020080000010015, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AHitscanFirearm, WeaponClass), Z_Construct_UEnum_UntitledCoopShooter_EWeaponClass, METADATA_PARAMS(Z_Construct_UClass_AHitscanFirearm_Statics::NewProp_WeaponClass_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AHitscanFirearm_Statics::NewProp_WeaponClass_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AHitscanFirearm_Statics::NewProp_WeaponDamage_MetaData[] = {
		{ "Category", "Weapon Stats" },
		{ "ClampMax", "80.000000" },
		{ "ClampMin", "0.000000" },
		{ "Comment", "//Base damage of each weapon trace\n" },
		{ "ModuleRelativePath", "Public/HitscanFirearm.h" },
		{ "ToolTip", "Base damage of each weapon trace" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_AHitscanFirearm_Statics::NewProp_WeaponDamage = { "WeaponDamage", nullptr, (EPropertyFlags)0x0020080000010015, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AHitscanFirearm, WeaponDamage), METADATA_PARAMS(Z_Construct_UClass_AHitscanFirearm_Statics::NewProp_WeaponDamage_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AHitscanFirearm_Statics::NewProp_WeaponDamage_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AHitscanFirearm_Statics::NewProp_WeaponWeight_MetaData[] = {
		{ "Category", "Weapon Stats" },
		{ "Comment", "//Weight of the weapon in pounds\n" },
		{ "ModuleRelativePath", "Public/HitscanFirearm.h" },
		{ "ToolTip", "Weight of the weapon in pounds" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_AHitscanFirearm_Statics::NewProp_WeaponWeight = { "WeaponWeight", nullptr, (EPropertyFlags)0x0020080000010015, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AHitscanFirearm, WeaponWeight), METADATA_PARAMS(Z_Construct_UClass_AHitscanFirearm_Statics::NewProp_WeaponWeight_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AHitscanFirearm_Statics::NewProp_WeaponWeight_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AHitscanFirearm_Statics::NewProp_WeaponEffectiveRange_MetaData[] = {
		{ "Category", "Weapon Stats" },
		{ "Comment", "//How far should the line trace go\n" },
		{ "ModuleRelativePath", "Public/HitscanFirearm.h" },
		{ "ToolTip", "How far should the line trace go" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_AHitscanFirearm_Statics::NewProp_WeaponEffectiveRange = { "WeaponEffectiveRange", nullptr, (EPropertyFlags)0x0020080000010015, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AHitscanFirearm, WeaponEffectiveRange), METADATA_PARAMS(Z_Construct_UClass_AHitscanFirearm_Statics::NewProp_WeaponEffectiveRange_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AHitscanFirearm_Statics::NewProp_WeaponEffectiveRange_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AHitscanFirearm_Statics::NewProp_DamageType_MetaData[] = {
		{ "Category", "Weapon Stats" },
		{ "ModuleRelativePath", "Public/HitscanFirearm.h" },
	};
#endif
	const UECodeGen_Private::FClassPropertyParams Z_Construct_UClass_AHitscanFirearm_Statics::NewProp_DamageType = { "DamageType", nullptr, (EPropertyFlags)0x0024080000010015, UECodeGen_Private::EPropertyGenFlags::Class, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AHitscanFirearm, DamageType), Z_Construct_UClass_UDamageType_NoRegister, Z_Construct_UClass_UClass, METADATA_PARAMS(Z_Construct_UClass_AHitscanFirearm_Statics::NewProp_DamageType_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AHitscanFirearm_Statics::NewProp_DamageType_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AHitscanFirearm_Statics::NewProp_WeaponErgonomics_MetaData[] = {
		{ "Category", "Weapon Handling" },
		{ "ClampMax", "1.000000" },
		{ "ClampMin", "0.250000" },
		{ "Comment", "//Inverse percentage value to simulate quality of weapon ergonomics - affects turning speed in combination with weight\n" },
		{ "ModuleRelativePath", "Public/HitscanFirearm.h" },
		{ "ToolTip", "Inverse percentage value to simulate quality of weapon ergonomics - affects turning speed in combination with weight" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_AHitscanFirearm_Statics::NewProp_WeaponErgonomics = { "WeaponErgonomics", nullptr, (EPropertyFlags)0x0020080000010015, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AHitscanFirearm, WeaponErgonomics), METADATA_PARAMS(Z_Construct_UClass_AHitscanFirearm_Statics::NewProp_WeaponErgonomics_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AHitscanFirearm_Statics::NewProp_WeaponErgonomics_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AHitscanFirearm_Statics::NewProp_WeaponLateralRecoil_MetaData[] = {
		{ "Category", "Weapon Handling" },
		{ "ClampMax", "10.000000" },
		{ "ClampMin", "0.000000" },
		{ "Comment", "//Amount of lateral recoil on weapon fire\n" },
		{ "ModuleRelativePath", "Public/HitscanFirearm.h" },
		{ "ToolTip", "Amount of lateral recoil on weapon fire" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_AHitscanFirearm_Statics::NewProp_WeaponLateralRecoil = { "WeaponLateralRecoil", nullptr, (EPropertyFlags)0x0020080000010015, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AHitscanFirearm, WeaponLateralRecoil), METADATA_PARAMS(Z_Construct_UClass_AHitscanFirearm_Statics::NewProp_WeaponLateralRecoil_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AHitscanFirearm_Statics::NewProp_WeaponLateralRecoil_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AHitscanFirearm_Statics::NewProp_WeaponVerticalRecoil_MetaData[] = {
		{ "Category", "Weapon Handling" },
		{ "ClampMax", "80.000000" },
		{ "ClampMin", "0.000000" },
		{ "Comment", "//Amount of vertical recoil on weapon fire\n" },
		{ "ModuleRelativePath", "Public/HitscanFirearm.h" },
		{ "ToolTip", "Amount of vertical recoil on weapon fire" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_AHitscanFirearm_Statics::NewProp_WeaponVerticalRecoil = { "WeaponVerticalRecoil", nullptr, (EPropertyFlags)0x0020080000010015, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AHitscanFirearm, WeaponVerticalRecoil), METADATA_PARAMS(Z_Construct_UClass_AHitscanFirearm_Statics::NewProp_WeaponVerticalRecoil_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AHitscanFirearm_Statics::NewProp_WeaponVerticalRecoil_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AHitscanFirearm_Statics::NewProp_bCanFullAuto_MetaData[] = {
		{ "Category", "Fire Modes" },
		{ "Comment", "//Can the weapon fire full auto?\n" },
		{ "ModuleRelativePath", "Public/HitscanFirearm.h" },
		{ "ToolTip", "Can the weapon fire full auto?" },
	};
#endif
	void Z_Construct_UClass_AHitscanFirearm_Statics::NewProp_bCanFullAuto_SetBit(void* Obj)
	{
		((AHitscanFirearm*)Obj)->bCanFullAuto = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_AHitscanFirearm_Statics::NewProp_bCanFullAuto = { "bCanFullAuto", nullptr, (EPropertyFlags)0x0020080000010015, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(AHitscanFirearm), &Z_Construct_UClass_AHitscanFirearm_Statics::NewProp_bCanFullAuto_SetBit, METADATA_PARAMS(Z_Construct_UClass_AHitscanFirearm_Statics::NewProp_bCanFullAuto_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AHitscanFirearm_Statics::NewProp_bCanFullAuto_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AHitscanFirearm_Statics::NewProp_bCanSemiAuto_MetaData[] = {
		{ "Category", "Fire Modes" },
		{ "Comment", "//Can the weapon fire semi auto?\n" },
		{ "ModuleRelativePath", "Public/HitscanFirearm.h" },
		{ "ToolTip", "Can the weapon fire semi auto?" },
	};
#endif
	void Z_Construct_UClass_AHitscanFirearm_Statics::NewProp_bCanSemiAuto_SetBit(void* Obj)
	{
		((AHitscanFirearm*)Obj)->bCanSemiAuto = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_AHitscanFirearm_Statics::NewProp_bCanSemiAuto = { "bCanSemiAuto", nullptr, (EPropertyFlags)0x0020080000010015, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(AHitscanFirearm), &Z_Construct_UClass_AHitscanFirearm_Statics::NewProp_bCanSemiAuto_SetBit, METADATA_PARAMS(Z_Construct_UClass_AHitscanFirearm_Statics::NewProp_bCanSemiAuto_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AHitscanFirearm_Statics::NewProp_bCanSemiAuto_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AHitscanFirearm_Statics::NewProp_bCanBurstFire_MetaData[] = {
		{ "Category", "Fire Modes" },
		{ "Comment", "//Can the weapon fire burst?\n" },
		{ "ModuleRelativePath", "Public/HitscanFirearm.h" },
		{ "ToolTip", "Can the weapon fire burst?" },
	};
#endif
	void Z_Construct_UClass_AHitscanFirearm_Statics::NewProp_bCanBurstFire_SetBit(void* Obj)
	{
		((AHitscanFirearm*)Obj)->bCanBurstFire = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_AHitscanFirearm_Statics::NewProp_bCanBurstFire = { "bCanBurstFire", nullptr, (EPropertyFlags)0x0020080000010015, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(AHitscanFirearm), &Z_Construct_UClass_AHitscanFirearm_Statics::NewProp_bCanBurstFire_SetBit, METADATA_PARAMS(Z_Construct_UClass_AHitscanFirearm_Statics::NewProp_bCanBurstFire_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AHitscanFirearm_Statics::NewProp_bCanBurstFire_MetaData)) };
	const UECodeGen_Private::FBytePropertyParams Z_Construct_UClass_AHitscanFirearm_Statics::NewProp_CurrentFireMode_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AHitscanFirearm_Statics::NewProp_CurrentFireMode_MetaData[] = {
		{ "Category", "Fire Modes" },
		{ "ModuleRelativePath", "Public/HitscanFirearm.h" },
	};
#endif
	const UECodeGen_Private::FEnumPropertyParams Z_Construct_UClass_AHitscanFirearm_Statics::NewProp_CurrentFireMode = { "CurrentFireMode", nullptr, (EPropertyFlags)0x0020080000000014, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AHitscanFirearm, CurrentFireMode), Z_Construct_UEnum_UntitledCoopShooter_EFireMode, METADATA_PARAMS(Z_Construct_UClass_AHitscanFirearm_Statics::NewProp_CurrentFireMode_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AHitscanFirearm_Statics::NewProp_CurrentFireMode_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AHitscanFirearm_Statics::NewProp_ShotsPerBurst_MetaData[] = {
		{ "Category", "Fire Modes" },
		{ "Comment", "//How many shots fired per burst\n" },
		{ "EditCondition", "bCanBurstFire" },
		{ "ModuleRelativePath", "Public/HitscanFirearm.h" },
		{ "ToolTip", "How many shots fired per burst" },
	};
#endif
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UClass_AHitscanFirearm_Statics::NewProp_ShotsPerBurst = { "ShotsPerBurst", nullptr, (EPropertyFlags)0x0020080000010015, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AHitscanFirearm, ShotsPerBurst), METADATA_PARAMS(Z_Construct_UClass_AHitscanFirearm_Statics::NewProp_ShotsPerBurst_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AHitscanFirearm_Statics::NewProp_ShotsPerBurst_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AHitscanFirearm_Statics::NewProp_RateOfFire_MetaData[] = {
		{ "Category", "Fire Modes" },
		{ "Comment", "//How many rounds per minute does the gun fire?\n" },
		{ "ModuleRelativePath", "Public/HitscanFirearm.h" },
		{ "ToolTip", "How many rounds per minute does the gun fire?" },
	};
#endif
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UClass_AHitscanFirearm_Statics::NewProp_RateOfFire = { "RateOfFire", nullptr, (EPropertyFlags)0x0020080000010015, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AHitscanFirearm, RateOfFire), METADATA_PARAMS(Z_Construct_UClass_AHitscanFirearm_Statics::NewProp_RateOfFire_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AHitscanFirearm_Statics::NewProp_RateOfFire_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AHitscanFirearm_Statics::NewProp_HitScanTrace_MetaData[] = {
		{ "ModuleRelativePath", "Public/HitscanFirearm.h" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_AHitscanFirearm_Statics::NewProp_HitScanTrace = { "HitScanTrace", "OnRep_HitScanTrace", (EPropertyFlags)0x0020080100000020, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AHitscanFirearm, HitScanTrace), Z_Construct_UScriptStruct_FHitScanTrace, METADATA_PARAMS(Z_Construct_UClass_AHitscanFirearm_Statics::NewProp_HitScanTrace_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AHitscanFirearm_Statics::NewProp_HitScanTrace_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_AHitscanFirearm_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AHitscanFirearm_Statics::NewProp_MeshComponent,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AHitscanFirearm_Statics::NewProp_Optics_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AHitscanFirearm_Statics::NewProp_Optics,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AHitscanFirearm_Statics::NewProp_CurrentOptic,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AHitscanFirearm_Statics::NewProp_FireSound,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AHitscanFirearm_Statics::NewProp_ReloadAnimation,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AHitscanFirearm_Statics::NewProp_WeaponClass_Underlying,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AHitscanFirearm_Statics::NewProp_WeaponClass,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AHitscanFirearm_Statics::NewProp_WeaponDamage,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AHitscanFirearm_Statics::NewProp_WeaponWeight,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AHitscanFirearm_Statics::NewProp_WeaponEffectiveRange,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AHitscanFirearm_Statics::NewProp_DamageType,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AHitscanFirearm_Statics::NewProp_WeaponErgonomics,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AHitscanFirearm_Statics::NewProp_WeaponLateralRecoil,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AHitscanFirearm_Statics::NewProp_WeaponVerticalRecoil,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AHitscanFirearm_Statics::NewProp_bCanFullAuto,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AHitscanFirearm_Statics::NewProp_bCanSemiAuto,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AHitscanFirearm_Statics::NewProp_bCanBurstFire,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AHitscanFirearm_Statics::NewProp_CurrentFireMode_Underlying,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AHitscanFirearm_Statics::NewProp_CurrentFireMode,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AHitscanFirearm_Statics::NewProp_ShotsPerBurst,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AHitscanFirearm_Statics::NewProp_RateOfFire,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AHitscanFirearm_Statics::NewProp_HitScanTrace,
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
	IMPLEMENT_CLASS(AHitscanFirearm, 3848024666);
	template<> UNTITLEDCOOPSHOOTER_API UClass* StaticClass<AHitscanFirearm>()
	{
		return AHitscanFirearm::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_AHitscanFirearm(Z_Construct_UClass_AHitscanFirearm, &AHitscanFirearm::StaticClass, TEXT("/Script/UntitledCoopShooter"), TEXT("AHitscanFirearm"), false, nullptr, nullptr, nullptr);

	void AHitscanFirearm::ValidateGeneratedRepEnums(const TArray<struct FRepRecord>& ClassReps) const
	{
		static const FName Name_HitScanTrace(TEXT("HitScanTrace"));

		const bool bIsValid = true
			&& Name_HitScanTrace == ClassReps[(int32)ENetFields_Private::HitScanTrace].Property->GetFName();

		checkf(bIsValid, TEXT("UHT Generated Rep Indices do not match runtime populated Rep Indices for properties in AHitscanFirearm"));
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(AHitscanFirearm);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
