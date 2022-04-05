// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "UntitledCoopShooter/Public/CoopCharacter.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeCoopCharacter() {}
// Cross Module References
	UNTITLEDCOOPSHOOTER_API UClass* Z_Construct_UClass_ACoopCharacter_NoRegister();
	UNTITLEDCOOPSHOOTER_API UClass* Z_Construct_UClass_ACoopCharacter();
	ENGINE_API UClass* Z_Construct_UClass_ACharacter();
	UPackage* Z_Construct_UPackage__Script_UntitledCoopShooter();
	ENGINE_API UClass* Z_Construct_UClass_UStaticMeshComponent_NoRegister();
	UNTITLEDCOOPSHOOTER_API UClass* Z_Construct_UClass_AHitscanFirearm_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_UCameraComponent_NoRegister();
	COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FTransform();
	ENGINE_API UClass* Z_Construct_UClass_USkeletalMeshComponent_NoRegister();
	COREUOBJECT_API UClass* Z_Construct_UClass_UClass();
	UNTITLEDCOOPSHOOTER_API UClass* Z_Construct_UClass_UVitalsComponent_NoRegister();
// End Cross Module References
	DEFINE_FUNCTION(ACoopCharacter::execSetLeftHandTransform)
	{
		P_GET_STRUCT(FTransform,Z_Param_NewTransform);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->SetLeftHandTransform(Z_Param_NewTransform);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(ACoopCharacter::execGetLeftHandTransform)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(FTransform*)Z_Param__Result=P_THIS->GetLeftHandTransform();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(ACoopCharacter::execSetRelativeHandTransform)
	{
		P_GET_STRUCT(FTransform,Z_Param_NewTransform);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->SetRelativeHandTransform(Z_Param_NewTransform);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(ACoopCharacter::execGetRelativeHandTransform)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(FTransform*)Z_Param__Result=P_THIS->GetRelativeHandTransform();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(ACoopCharacter::execSetSightTransform)
	{
		P_GET_STRUCT(FTransform,Z_Param_NewTransform);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->SetSightTransform(Z_Param_NewTransform);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(ACoopCharacter::execGetSightTransform)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(FTransform*)Z_Param__Result=P_THIS->GetSightTransform();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(ACoopCharacter::execDeductAmmo)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->DeductAmmo();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(ACoopCharacter::execGetCurrentWeapon)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(AHitscanFirearm**)Z_Param__Result=P_THIS->GetCurrentWeapon();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(ACoopCharacter::execGetFirstPersonCameraComponent)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(UCameraComponent**)Z_Param__Result=P_THIS->GetFirstPersonCameraComponent();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(ACoopCharacter::execGetMesh1P)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(USkeletalMeshComponent**)Z_Param__Result=P_THIS->GetMesh1P();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(ACoopCharacter::execReload)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->Reload();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(ACoopCharacter::execCycleOptic)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->CycleOptic();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(ACoopCharacter::execServer_SetAiming)
	{
		P_GET_UBOOL(Z_Param_IsAiming);
		P_FINISH;
		P_NATIVE_BEGIN;
		if (!P_THIS->Server_SetAiming_Validate(Z_Param_IsAiming))
		{
			RPC_ValidateFailed(TEXT("Server_SetAiming_Validate"));
			return;
		}
		P_THIS->Server_SetAiming_Implementation(Z_Param_IsAiming);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(ACoopCharacter::execOnRep_bIsAiming)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->OnRep_bIsAiming();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(ACoopCharacter::execSetAiming)
	{
		P_GET_UBOOL(Z_Param_IsAiming);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->SetAiming(Z_Param_IsAiming);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(ACoopCharacter::execServerOnStopFire)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		if (!P_THIS->ServerOnStopFire_Validate())
		{
			RPC_ValidateFailed(TEXT("ServerOnStopFire_Validate"));
			return;
		}
		P_THIS->ServerOnStopFire_Implementation();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(ACoopCharacter::execServerOnFire)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		if (!P_THIS->ServerOnFire_Validate())
		{
			RPC_ValidateFailed(TEXT("ServerOnFire_Validate"));
			return;
		}
		P_THIS->ServerOnFire_Implementation();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(ACoopCharacter::execServer_OpticIndex)
	{
		P_GET_PROPERTY(FByteProperty,Z_Param_NewIndex);
		P_FINISH;
		P_NATIVE_BEGIN;
		if (!P_THIS->Server_OpticIndex_Validate(Z_Param_NewIndex))
		{
			RPC_ValidateFailed(TEXT("Server_OpticIndex_Validate"));
			return;
		}
		P_THIS->Server_OpticIndex_Implementation(Z_Param_NewIndex);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(ACoopCharacter::execOnRep_OpticIndex)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->OnRep_OpticIndex();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(ACoopCharacter::execSwitchToSecondary)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->SwitchToSecondary();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(ACoopCharacter::execSwitchToPrimary)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->SwitchToPrimary();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(ACoopCharacter::execSwitchFireMode)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->SwitchFireMode();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(ACoopCharacter::execServer_SwitchWeapon)
	{
		P_GET_OBJECT(UClass,Z_Param_NewWeapon);
		P_FINISH;
		P_NATIVE_BEGIN;
		if (!P_THIS->Server_SwitchWeapon_Validate(Z_Param_NewWeapon))
		{
			RPC_ValidateFailed(TEXT("Server_SwitchWeapon_Validate"));
			return;
		}
		P_THIS->Server_SwitchWeapon_Implementation(Z_Param_NewWeapon);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(ACoopCharacter::execSwitchWeapon)
	{
		P_GET_OBJECT(UClass,Z_Param_NewWeapon);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->SwitchWeapon(Z_Param_NewWeapon);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(ACoopCharacter::execOnRep_EquippedWeapon)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		if (!P_THIS->OnRep_EquippedWeapon_Validate())
		{
			RPC_ValidateFailed(TEXT("OnRep_EquippedWeapon_Validate"));
			return;
		}
		P_THIS->OnRep_EquippedWeapon_Implementation();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(ACoopCharacter::execGetCurrentOptic)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(UStaticMeshComponent**)Z_Param__Result=P_THIS->GetCurrentOptic();
		P_NATIVE_END;
	}
	static FName NAME_ACoopCharacter_OnRep_EquippedWeapon = FName(TEXT("OnRep_EquippedWeapon"));
	void ACoopCharacter::OnRep_EquippedWeapon()
	{
		ProcessEvent(FindFunctionChecked(NAME_ACoopCharacter_OnRep_EquippedWeapon),NULL);
	}
	static FName NAME_ACoopCharacter_Server_OpticIndex = FName(TEXT("Server_OpticIndex"));
	void ACoopCharacter::Server_OpticIndex(uint8 NewIndex)
	{
		CoopCharacter_eventServer_OpticIndex_Parms Parms;
		Parms.NewIndex=NewIndex;
		ProcessEvent(FindFunctionChecked(NAME_ACoopCharacter_Server_OpticIndex),&Parms);
	}
	static FName NAME_ACoopCharacter_Server_SetAiming = FName(TEXT("Server_SetAiming"));
	void ACoopCharacter::Server_SetAiming(bool IsAiming)
	{
		CoopCharacter_eventServer_SetAiming_Parms Parms;
		Parms.IsAiming=IsAiming ? true : false;
		ProcessEvent(FindFunctionChecked(NAME_ACoopCharacter_Server_SetAiming),&Parms);
	}
	static FName NAME_ACoopCharacter_Server_SwitchWeapon = FName(TEXT("Server_SwitchWeapon"));
	void ACoopCharacter::Server_SwitchWeapon(TSubclassOf<AHitscanFirearm>  NewWeapon)
	{
		CoopCharacter_eventServer_SwitchWeapon_Parms Parms;
		Parms.NewWeapon=NewWeapon;
		ProcessEvent(FindFunctionChecked(NAME_ACoopCharacter_Server_SwitchWeapon),&Parms);
	}
	static FName NAME_ACoopCharacter_ServerOnFire = FName(TEXT("ServerOnFire"));
	void ACoopCharacter::ServerOnFire()
	{
		ProcessEvent(FindFunctionChecked(NAME_ACoopCharacter_ServerOnFire),NULL);
	}
	static FName NAME_ACoopCharacter_ServerOnStopFire = FName(TEXT("ServerOnStopFire"));
	void ACoopCharacter::ServerOnStopFire()
	{
		ProcessEvent(FindFunctionChecked(NAME_ACoopCharacter_ServerOnStopFire),NULL);
	}
	void ACoopCharacter::StaticRegisterNativesACoopCharacter()
	{
		UClass* Class = ACoopCharacter::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "CycleOptic", &ACoopCharacter::execCycleOptic },
			{ "DeductAmmo", &ACoopCharacter::execDeductAmmo },
			{ "GetCurrentOptic", &ACoopCharacter::execGetCurrentOptic },
			{ "GetCurrentWeapon", &ACoopCharacter::execGetCurrentWeapon },
			{ "GetFirstPersonCameraComponent", &ACoopCharacter::execGetFirstPersonCameraComponent },
			{ "GetLeftHandTransform", &ACoopCharacter::execGetLeftHandTransform },
			{ "GetMesh1P", &ACoopCharacter::execGetMesh1P },
			{ "GetRelativeHandTransform", &ACoopCharacter::execGetRelativeHandTransform },
			{ "GetSightTransform", &ACoopCharacter::execGetSightTransform },
			{ "OnRep_bIsAiming", &ACoopCharacter::execOnRep_bIsAiming },
			{ "OnRep_EquippedWeapon", &ACoopCharacter::execOnRep_EquippedWeapon },
			{ "OnRep_OpticIndex", &ACoopCharacter::execOnRep_OpticIndex },
			{ "Reload", &ACoopCharacter::execReload },
			{ "Server_OpticIndex", &ACoopCharacter::execServer_OpticIndex },
			{ "Server_SetAiming", &ACoopCharacter::execServer_SetAiming },
			{ "Server_SwitchWeapon", &ACoopCharacter::execServer_SwitchWeapon },
			{ "ServerOnFire", &ACoopCharacter::execServerOnFire },
			{ "ServerOnStopFire", &ACoopCharacter::execServerOnStopFire },
			{ "SetAiming", &ACoopCharacter::execSetAiming },
			{ "SetLeftHandTransform", &ACoopCharacter::execSetLeftHandTransform },
			{ "SetRelativeHandTransform", &ACoopCharacter::execSetRelativeHandTransform },
			{ "SetSightTransform", &ACoopCharacter::execSetSightTransform },
			{ "SwitchFireMode", &ACoopCharacter::execSwitchFireMode },
			{ "SwitchToPrimary", &ACoopCharacter::execSwitchToPrimary },
			{ "SwitchToSecondary", &ACoopCharacter::execSwitchToSecondary },
			{ "SwitchWeapon", &ACoopCharacter::execSwitchWeapon },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_ACoopCharacter_CycleOptic_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ACoopCharacter_CycleOptic_Statics::Function_MetaDataParams[] = {
		{ "Category", "Procedural Aiming" },
		{ "ModuleRelativePath", "Public/CoopCharacter.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_ACoopCharacter_CycleOptic_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ACoopCharacter, nullptr, "CycleOptic", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04080401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_ACoopCharacter_CycleOptic_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_ACoopCharacter_CycleOptic_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_ACoopCharacter_CycleOptic()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_ACoopCharacter_CycleOptic_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_ACoopCharacter_DeductAmmo_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ACoopCharacter_DeductAmmo_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/CoopCharacter.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_ACoopCharacter_DeductAmmo_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ACoopCharacter, nullptr, "DeductAmmo", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_ACoopCharacter_DeductAmmo_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_ACoopCharacter_DeductAmmo_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_ACoopCharacter_DeductAmmo()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_ACoopCharacter_DeductAmmo_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_ACoopCharacter_GetCurrentOptic_Statics
	{
		struct CoopCharacter_eventGetCurrentOptic_Parms
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
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ACoopCharacter_GetCurrentOptic_Statics::NewProp_ReturnValue_MetaData[] = {
		{ "EditInline", "true" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_ACoopCharacter_GetCurrentOptic_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000080588, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(CoopCharacter_eventGetCurrentOptic_Parms, ReturnValue), Z_Construct_UClass_UStaticMeshComponent_NoRegister, METADATA_PARAMS(Z_Construct_UFunction_ACoopCharacter_GetCurrentOptic_Statics::NewProp_ReturnValue_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_ACoopCharacter_GetCurrentOptic_Statics::NewProp_ReturnValue_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_ACoopCharacter_GetCurrentOptic_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ACoopCharacter_GetCurrentOptic_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ACoopCharacter_GetCurrentOptic_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/CoopCharacter.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_ACoopCharacter_GetCurrentOptic_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ACoopCharacter, nullptr, "GetCurrentOptic", nullptr, nullptr, sizeof(CoopCharacter_eventGetCurrentOptic_Parms), Z_Construct_UFunction_ACoopCharacter_GetCurrentOptic_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_ACoopCharacter_GetCurrentOptic_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_ACoopCharacter_GetCurrentOptic_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_ACoopCharacter_GetCurrentOptic_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_ACoopCharacter_GetCurrentOptic()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_ACoopCharacter_GetCurrentOptic_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_ACoopCharacter_GetCurrentWeapon_Statics
	{
		struct CoopCharacter_eventGetCurrentWeapon_Parms
		{
			AHitscanFirearm* ReturnValue;
		};
		static const UECodeGen_Private::FObjectPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_ACoopCharacter_GetCurrentWeapon_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(CoopCharacter_eventGetCurrentWeapon_Parms, ReturnValue), Z_Construct_UClass_AHitscanFirearm_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_ACoopCharacter_GetCurrentWeapon_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ACoopCharacter_GetCurrentWeapon_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ACoopCharacter_GetCurrentWeapon_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/CoopCharacter.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_ACoopCharacter_GetCurrentWeapon_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ACoopCharacter, nullptr, "GetCurrentWeapon", nullptr, nullptr, sizeof(CoopCharacter_eventGetCurrentWeapon_Parms), Z_Construct_UFunction_ACoopCharacter_GetCurrentWeapon_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_ACoopCharacter_GetCurrentWeapon_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_ACoopCharacter_GetCurrentWeapon_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_ACoopCharacter_GetCurrentWeapon_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_ACoopCharacter_GetCurrentWeapon()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_ACoopCharacter_GetCurrentWeapon_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_ACoopCharacter_GetFirstPersonCameraComponent_Statics
	{
		struct CoopCharacter_eventGetFirstPersonCameraComponent_Parms
		{
			UCameraComponent* ReturnValue;
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
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ACoopCharacter_GetFirstPersonCameraComponent_Statics::NewProp_ReturnValue_MetaData[] = {
		{ "EditInline", "true" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_ACoopCharacter_GetFirstPersonCameraComponent_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000080588, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(CoopCharacter_eventGetFirstPersonCameraComponent_Parms, ReturnValue), Z_Construct_UClass_UCameraComponent_NoRegister, METADATA_PARAMS(Z_Construct_UFunction_ACoopCharacter_GetFirstPersonCameraComponent_Statics::NewProp_ReturnValue_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_ACoopCharacter_GetFirstPersonCameraComponent_Statics::NewProp_ReturnValue_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_ACoopCharacter_GetFirstPersonCameraComponent_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ACoopCharacter_GetFirstPersonCameraComponent_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ACoopCharacter_GetFirstPersonCameraComponent_Statics::Function_MetaDataParams[] = {
		{ "Comment", "/** Returns FirstPersonCameraComponent subobject **/" },
		{ "ModuleRelativePath", "Public/CoopCharacter.h" },
		{ "ToolTip", "Returns FirstPersonCameraComponent subobject *" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_ACoopCharacter_GetFirstPersonCameraComponent_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ACoopCharacter, nullptr, "GetFirstPersonCameraComponent", nullptr, nullptr, sizeof(CoopCharacter_eventGetFirstPersonCameraComponent_Parms), Z_Construct_UFunction_ACoopCharacter_GetFirstPersonCameraComponent_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_ACoopCharacter_GetFirstPersonCameraComponent_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_ACoopCharacter_GetFirstPersonCameraComponent_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_ACoopCharacter_GetFirstPersonCameraComponent_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_ACoopCharacter_GetFirstPersonCameraComponent()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_ACoopCharacter_GetFirstPersonCameraComponent_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_ACoopCharacter_GetLeftHandTransform_Statics
	{
		struct CoopCharacter_eventGetLeftHandTransform_Parms
		{
			FTransform ReturnValue;
		};
		static const UECodeGen_Private::FStructPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_ACoopCharacter_GetLeftHandTransform_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(CoopCharacter_eventGetLeftHandTransform_Parms, ReturnValue), Z_Construct_UScriptStruct_FTransform, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_ACoopCharacter_GetLeftHandTransform_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ACoopCharacter_GetLeftHandTransform_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ACoopCharacter_GetLeftHandTransform_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/CoopCharacter.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_ACoopCharacter_GetLeftHandTransform_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ACoopCharacter, nullptr, "GetLeftHandTransform", nullptr, nullptr, sizeof(CoopCharacter_eventGetLeftHandTransform_Parms), Z_Construct_UFunction_ACoopCharacter_GetLeftHandTransform_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_ACoopCharacter_GetLeftHandTransform_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54820401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_ACoopCharacter_GetLeftHandTransform_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_ACoopCharacter_GetLeftHandTransform_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_ACoopCharacter_GetLeftHandTransform()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_ACoopCharacter_GetLeftHandTransform_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_ACoopCharacter_GetMesh1P_Statics
	{
		struct CoopCharacter_eventGetMesh1P_Parms
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
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ACoopCharacter_GetMesh1P_Statics::NewProp_ReturnValue_MetaData[] = {
		{ "EditInline", "true" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_ACoopCharacter_GetMesh1P_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000080588, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(CoopCharacter_eventGetMesh1P_Parms, ReturnValue), Z_Construct_UClass_USkeletalMeshComponent_NoRegister, METADATA_PARAMS(Z_Construct_UFunction_ACoopCharacter_GetMesh1P_Statics::NewProp_ReturnValue_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_ACoopCharacter_GetMesh1P_Statics::NewProp_ReturnValue_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_ACoopCharacter_GetMesh1P_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ACoopCharacter_GetMesh1P_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ACoopCharacter_GetMesh1P_Statics::Function_MetaDataParams[] = {
		{ "Comment", "/** Returns Mesh1P subobject **/" },
		{ "ModuleRelativePath", "Public/CoopCharacter.h" },
		{ "ToolTip", "Returns Mesh1P subobject *" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_ACoopCharacter_GetMesh1P_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ACoopCharacter, nullptr, "GetMesh1P", nullptr, nullptr, sizeof(CoopCharacter_eventGetMesh1P_Parms), Z_Construct_UFunction_ACoopCharacter_GetMesh1P_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_ACoopCharacter_GetMesh1P_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_ACoopCharacter_GetMesh1P_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_ACoopCharacter_GetMesh1P_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_ACoopCharacter_GetMesh1P()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_ACoopCharacter_GetMesh1P_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_ACoopCharacter_GetRelativeHandTransform_Statics
	{
		struct CoopCharacter_eventGetRelativeHandTransform_Parms
		{
			FTransform ReturnValue;
		};
		static const UECodeGen_Private::FStructPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_ACoopCharacter_GetRelativeHandTransform_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(CoopCharacter_eventGetRelativeHandTransform_Parms, ReturnValue), Z_Construct_UScriptStruct_FTransform, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_ACoopCharacter_GetRelativeHandTransform_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ACoopCharacter_GetRelativeHandTransform_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ACoopCharacter_GetRelativeHandTransform_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/CoopCharacter.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_ACoopCharacter_GetRelativeHandTransform_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ACoopCharacter, nullptr, "GetRelativeHandTransform", nullptr, nullptr, sizeof(CoopCharacter_eventGetRelativeHandTransform_Parms), Z_Construct_UFunction_ACoopCharacter_GetRelativeHandTransform_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_ACoopCharacter_GetRelativeHandTransform_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54820401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_ACoopCharacter_GetRelativeHandTransform_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_ACoopCharacter_GetRelativeHandTransform_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_ACoopCharacter_GetRelativeHandTransform()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_ACoopCharacter_GetRelativeHandTransform_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_ACoopCharacter_GetSightTransform_Statics
	{
		struct CoopCharacter_eventGetSightTransform_Parms
		{
			FTransform ReturnValue;
		};
		static const UECodeGen_Private::FStructPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_ACoopCharacter_GetSightTransform_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(CoopCharacter_eventGetSightTransform_Parms, ReturnValue), Z_Construct_UScriptStruct_FTransform, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_ACoopCharacter_GetSightTransform_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ACoopCharacter_GetSightTransform_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ACoopCharacter_GetSightTransform_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/CoopCharacter.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_ACoopCharacter_GetSightTransform_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ACoopCharacter, nullptr, "GetSightTransform", nullptr, nullptr, sizeof(CoopCharacter_eventGetSightTransform_Parms), Z_Construct_UFunction_ACoopCharacter_GetSightTransform_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_ACoopCharacter_GetSightTransform_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54820401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_ACoopCharacter_GetSightTransform_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_ACoopCharacter_GetSightTransform_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_ACoopCharacter_GetSightTransform()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_ACoopCharacter_GetSightTransform_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_ACoopCharacter_OnRep_bIsAiming_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ACoopCharacter_OnRep_bIsAiming_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/CoopCharacter.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_ACoopCharacter_OnRep_bIsAiming_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ACoopCharacter, nullptr, "OnRep_bIsAiming", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00080401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_ACoopCharacter_OnRep_bIsAiming_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_ACoopCharacter_OnRep_bIsAiming_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_ACoopCharacter_OnRep_bIsAiming()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_ACoopCharacter_OnRep_bIsAiming_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_ACoopCharacter_OnRep_EquippedWeapon_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ACoopCharacter_OnRep_EquippedWeapon_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/CoopCharacter.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_ACoopCharacter_OnRep_EquippedWeapon_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ACoopCharacter, nullptr, "OnRep_EquippedWeapon", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x81080CC0, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_ACoopCharacter_OnRep_EquippedWeapon_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_ACoopCharacter_OnRep_EquippedWeapon_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_ACoopCharacter_OnRep_EquippedWeapon()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_ACoopCharacter_OnRep_EquippedWeapon_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_ACoopCharacter_OnRep_OpticIndex_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ACoopCharacter_OnRep_OpticIndex_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/CoopCharacter.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_ACoopCharacter_OnRep_OpticIndex_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ACoopCharacter, nullptr, "OnRep_OpticIndex", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00080401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_ACoopCharacter_OnRep_OpticIndex_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_ACoopCharacter_OnRep_OpticIndex_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_ACoopCharacter_OnRep_OpticIndex()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_ACoopCharacter_OnRep_OpticIndex_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_ACoopCharacter_Reload_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ACoopCharacter_Reload_Statics::Function_MetaDataParams[] = {
		{ "Category", "Procedural Aiming" },
		{ "ModuleRelativePath", "Public/CoopCharacter.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_ACoopCharacter_Reload_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ACoopCharacter, nullptr, "Reload", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04080401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_ACoopCharacter_Reload_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_ACoopCharacter_Reload_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_ACoopCharacter_Reload()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_ACoopCharacter_Reload_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_ACoopCharacter_Server_OpticIndex_Statics
	{
		static const UECodeGen_Private::FBytePropertyParams NewProp_NewIndex;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FBytePropertyParams Z_Construct_UFunction_ACoopCharacter_Server_OpticIndex_Statics::NewProp_NewIndex = { "NewIndex", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(CoopCharacter_eventServer_OpticIndex_Parms, NewIndex), nullptr, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_ACoopCharacter_Server_OpticIndex_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ACoopCharacter_Server_OpticIndex_Statics::NewProp_NewIndex,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ACoopCharacter_Server_OpticIndex_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/CoopCharacter.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_ACoopCharacter_Server_OpticIndex_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ACoopCharacter, nullptr, "Server_OpticIndex", nullptr, nullptr, sizeof(CoopCharacter_eventServer_OpticIndex_Parms), Z_Construct_UFunction_ACoopCharacter_Server_OpticIndex_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_ACoopCharacter_Server_OpticIndex_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x80280CC0, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_ACoopCharacter_Server_OpticIndex_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_ACoopCharacter_Server_OpticIndex_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_ACoopCharacter_Server_OpticIndex()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_ACoopCharacter_Server_OpticIndex_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_ACoopCharacter_Server_SetAiming_Statics
	{
		static void NewProp_IsAiming_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_IsAiming;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	void Z_Construct_UFunction_ACoopCharacter_Server_SetAiming_Statics::NewProp_IsAiming_SetBit(void* Obj)
	{
		((CoopCharacter_eventServer_SetAiming_Parms*)Obj)->IsAiming = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_ACoopCharacter_Server_SetAiming_Statics::NewProp_IsAiming = { "IsAiming", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(CoopCharacter_eventServer_SetAiming_Parms), &Z_Construct_UFunction_ACoopCharacter_Server_SetAiming_Statics::NewProp_IsAiming_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_ACoopCharacter_Server_SetAiming_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ACoopCharacter_Server_SetAiming_Statics::NewProp_IsAiming,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ACoopCharacter_Server_SetAiming_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/CoopCharacter.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_ACoopCharacter_Server_SetAiming_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ACoopCharacter, nullptr, "Server_SetAiming", nullptr, nullptr, sizeof(CoopCharacter_eventServer_SetAiming_Parms), Z_Construct_UFunction_ACoopCharacter_Server_SetAiming_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_ACoopCharacter_Server_SetAiming_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x80280CC0, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_ACoopCharacter_Server_SetAiming_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_ACoopCharacter_Server_SetAiming_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_ACoopCharacter_Server_SetAiming()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_ACoopCharacter_Server_SetAiming_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_ACoopCharacter_Server_SwitchWeapon_Statics
	{
		static const UECodeGen_Private::FClassPropertyParams NewProp_NewWeapon;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FClassPropertyParams Z_Construct_UFunction_ACoopCharacter_Server_SwitchWeapon_Statics::NewProp_NewWeapon = { "NewWeapon", nullptr, (EPropertyFlags)0x0014000000000080, UECodeGen_Private::EPropertyGenFlags::Class, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(CoopCharacter_eventServer_SwitchWeapon_Parms, NewWeapon), Z_Construct_UClass_AHitscanFirearm_NoRegister, Z_Construct_UClass_UClass, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_ACoopCharacter_Server_SwitchWeapon_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ACoopCharacter_Server_SwitchWeapon_Statics::NewProp_NewWeapon,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ACoopCharacter_Server_SwitchWeapon_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/CoopCharacter.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_ACoopCharacter_Server_SwitchWeapon_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ACoopCharacter, nullptr, "Server_SwitchWeapon", nullptr, nullptr, sizeof(CoopCharacter_eventServer_SwitchWeapon_Parms), Z_Construct_UFunction_ACoopCharacter_Server_SwitchWeapon_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_ACoopCharacter_Server_SwitchWeapon_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x80280CC0, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_ACoopCharacter_Server_SwitchWeapon_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_ACoopCharacter_Server_SwitchWeapon_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_ACoopCharacter_Server_SwitchWeapon()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_ACoopCharacter_Server_SwitchWeapon_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_ACoopCharacter_ServerOnFire_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ACoopCharacter_ServerOnFire_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/CoopCharacter.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_ACoopCharacter_ServerOnFire_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ACoopCharacter, nullptr, "ServerOnFire", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x80280CC0, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_ACoopCharacter_ServerOnFire_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_ACoopCharacter_ServerOnFire_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_ACoopCharacter_ServerOnFire()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_ACoopCharacter_ServerOnFire_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_ACoopCharacter_ServerOnStopFire_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ACoopCharacter_ServerOnStopFire_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/CoopCharacter.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_ACoopCharacter_ServerOnStopFire_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ACoopCharacter, nullptr, "ServerOnStopFire", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x80280CC0, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_ACoopCharacter_ServerOnStopFire_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_ACoopCharacter_ServerOnStopFire_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_ACoopCharacter_ServerOnStopFire()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_ACoopCharacter_ServerOnStopFire_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_ACoopCharacter_SetAiming_Statics
	{
		struct CoopCharacter_eventSetAiming_Parms
		{
			bool IsAiming;
		};
		static void NewProp_IsAiming_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_IsAiming;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	void Z_Construct_UFunction_ACoopCharacter_SetAiming_Statics::NewProp_IsAiming_SetBit(void* Obj)
	{
		((CoopCharacter_eventSetAiming_Parms*)Obj)->IsAiming = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_ACoopCharacter_SetAiming_Statics::NewProp_IsAiming = { "IsAiming", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(CoopCharacter_eventSetAiming_Parms), &Z_Construct_UFunction_ACoopCharacter_SetAiming_Statics::NewProp_IsAiming_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_ACoopCharacter_SetAiming_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ACoopCharacter_SetAiming_Statics::NewProp_IsAiming,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ACoopCharacter_SetAiming_Statics::Function_MetaDataParams[] = {
		{ "Category", "Procedural Aiming" },
		{ "ModuleRelativePath", "Public/CoopCharacter.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_ACoopCharacter_SetAiming_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ACoopCharacter, nullptr, "SetAiming", nullptr, nullptr, sizeof(CoopCharacter_eventSetAiming_Parms), Z_Construct_UFunction_ACoopCharacter_SetAiming_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_ACoopCharacter_SetAiming_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04080401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_ACoopCharacter_SetAiming_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_ACoopCharacter_SetAiming_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_ACoopCharacter_SetAiming()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_ACoopCharacter_SetAiming_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_ACoopCharacter_SetLeftHandTransform_Statics
	{
		struct CoopCharacter_eventSetLeftHandTransform_Parms
		{
			FTransform NewTransform;
		};
		static const UECodeGen_Private::FStructPropertyParams NewProp_NewTransform;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_ACoopCharacter_SetLeftHandTransform_Statics::NewProp_NewTransform = { "NewTransform", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(CoopCharacter_eventSetLeftHandTransform_Parms, NewTransform), Z_Construct_UScriptStruct_FTransform, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_ACoopCharacter_SetLeftHandTransform_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ACoopCharacter_SetLeftHandTransform_Statics::NewProp_NewTransform,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ACoopCharacter_SetLeftHandTransform_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/CoopCharacter.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_ACoopCharacter_SetLeftHandTransform_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ACoopCharacter, nullptr, "SetLeftHandTransform", nullptr, nullptr, sizeof(CoopCharacter_eventSetLeftHandTransform_Parms), Z_Construct_UFunction_ACoopCharacter_SetLeftHandTransform_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_ACoopCharacter_SetLeftHandTransform_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04820401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_ACoopCharacter_SetLeftHandTransform_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_ACoopCharacter_SetLeftHandTransform_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_ACoopCharacter_SetLeftHandTransform()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_ACoopCharacter_SetLeftHandTransform_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_ACoopCharacter_SetRelativeHandTransform_Statics
	{
		struct CoopCharacter_eventSetRelativeHandTransform_Parms
		{
			FTransform NewTransform;
		};
		static const UECodeGen_Private::FStructPropertyParams NewProp_NewTransform;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_ACoopCharacter_SetRelativeHandTransform_Statics::NewProp_NewTransform = { "NewTransform", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(CoopCharacter_eventSetRelativeHandTransform_Parms, NewTransform), Z_Construct_UScriptStruct_FTransform, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_ACoopCharacter_SetRelativeHandTransform_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ACoopCharacter_SetRelativeHandTransform_Statics::NewProp_NewTransform,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ACoopCharacter_SetRelativeHandTransform_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/CoopCharacter.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_ACoopCharacter_SetRelativeHandTransform_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ACoopCharacter, nullptr, "SetRelativeHandTransform", nullptr, nullptr, sizeof(CoopCharacter_eventSetRelativeHandTransform_Parms), Z_Construct_UFunction_ACoopCharacter_SetRelativeHandTransform_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_ACoopCharacter_SetRelativeHandTransform_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04820401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_ACoopCharacter_SetRelativeHandTransform_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_ACoopCharacter_SetRelativeHandTransform_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_ACoopCharacter_SetRelativeHandTransform()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_ACoopCharacter_SetRelativeHandTransform_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_ACoopCharacter_SetSightTransform_Statics
	{
		struct CoopCharacter_eventSetSightTransform_Parms
		{
			FTransform NewTransform;
		};
		static const UECodeGen_Private::FStructPropertyParams NewProp_NewTransform;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_ACoopCharacter_SetSightTransform_Statics::NewProp_NewTransform = { "NewTransform", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(CoopCharacter_eventSetSightTransform_Parms, NewTransform), Z_Construct_UScriptStruct_FTransform, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_ACoopCharacter_SetSightTransform_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ACoopCharacter_SetSightTransform_Statics::NewProp_NewTransform,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ACoopCharacter_SetSightTransform_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/CoopCharacter.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_ACoopCharacter_SetSightTransform_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ACoopCharacter, nullptr, "SetSightTransform", nullptr, nullptr, sizeof(CoopCharacter_eventSetSightTransform_Parms), Z_Construct_UFunction_ACoopCharacter_SetSightTransform_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_ACoopCharacter_SetSightTransform_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04820401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_ACoopCharacter_SetSightTransform_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_ACoopCharacter_SetSightTransform_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_ACoopCharacter_SetSightTransform()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_ACoopCharacter_SetSightTransform_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_ACoopCharacter_SwitchFireMode_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ACoopCharacter_SwitchFireMode_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/CoopCharacter.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_ACoopCharacter_SwitchFireMode_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ACoopCharacter, nullptr, "SwitchFireMode", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00080401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_ACoopCharacter_SwitchFireMode_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_ACoopCharacter_SwitchFireMode_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_ACoopCharacter_SwitchFireMode()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_ACoopCharacter_SwitchFireMode_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_ACoopCharacter_SwitchToPrimary_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ACoopCharacter_SwitchToPrimary_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/CoopCharacter.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_ACoopCharacter_SwitchToPrimary_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ACoopCharacter, nullptr, "SwitchToPrimary", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00080401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_ACoopCharacter_SwitchToPrimary_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_ACoopCharacter_SwitchToPrimary_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_ACoopCharacter_SwitchToPrimary()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_ACoopCharacter_SwitchToPrimary_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_ACoopCharacter_SwitchToSecondary_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ACoopCharacter_SwitchToSecondary_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/CoopCharacter.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_ACoopCharacter_SwitchToSecondary_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ACoopCharacter, nullptr, "SwitchToSecondary", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00080401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_ACoopCharacter_SwitchToSecondary_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_ACoopCharacter_SwitchToSecondary_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_ACoopCharacter_SwitchToSecondary()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_ACoopCharacter_SwitchToSecondary_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_ACoopCharacter_SwitchWeapon_Statics
	{
		struct CoopCharacter_eventSwitchWeapon_Parms
		{
			TSubclassOf<AHitscanFirearm>  NewWeapon;
		};
		static const UECodeGen_Private::FClassPropertyParams NewProp_NewWeapon;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FClassPropertyParams Z_Construct_UFunction_ACoopCharacter_SwitchWeapon_Statics::NewProp_NewWeapon = { "NewWeapon", nullptr, (EPropertyFlags)0x0014000000000080, UECodeGen_Private::EPropertyGenFlags::Class, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(CoopCharacter_eventSwitchWeapon_Parms, NewWeapon), Z_Construct_UClass_AHitscanFirearm_NoRegister, Z_Construct_UClass_UClass, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_ACoopCharacter_SwitchWeapon_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ACoopCharacter_SwitchWeapon_Statics::NewProp_NewWeapon,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ACoopCharacter_SwitchWeapon_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/CoopCharacter.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_ACoopCharacter_SwitchWeapon_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ACoopCharacter, nullptr, "SwitchWeapon", nullptr, nullptr, sizeof(CoopCharacter_eventSwitchWeapon_Parms), Z_Construct_UFunction_ACoopCharacter_SwitchWeapon_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_ACoopCharacter_SwitchWeapon_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00080401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_ACoopCharacter_SwitchWeapon_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_ACoopCharacter_SwitchWeapon_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_ACoopCharacter_SwitchWeapon()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_ACoopCharacter_SwitchWeapon_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	UClass* Z_Construct_UClass_ACoopCharacter_NoRegister()
	{
		return ACoopCharacter::StaticClass();
	}
	struct Z_Construct_UClass_ACoopCharacter_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Mesh1P_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_Mesh1P;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_FirstPersonCameraComponent_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_FirstPersonCameraComponent;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_VitalsComponent_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_VitalsComponent;
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
		static const UECodeGen_Private::FMetaDataPairParam NewProp_BaseTurnRate_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_BaseTurnRate;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_BaseLookUpRate_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_BaseLookUpRate;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_SightTransform_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_SightTransform;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_RelativeHandTransform_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_RelativeHandTransform;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_LeftHandTransform_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_LeftHandTransform;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_CurrentWeapon_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_CurrentWeapon;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_TP_Gun_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_TP_Gun;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_EquippedWeapon_MetaData[];
#endif
		static const UECodeGen_Private::FClassPropertyParams NewProp_EquippedWeapon;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_PrimaryWeapon_MetaData[];
#endif
		static const UECodeGen_Private::FClassPropertyParams NewProp_PrimaryWeapon;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_SecondaryWeapon_MetaData[];
#endif
		static const UECodeGen_Private::FClassPropertyParams NewProp_SecondaryWeapon;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_CurrentAmmo_MetaData[];
#endif
		static const UECodeGen_Private::FIntPropertyParams NewProp_CurrentAmmo;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_PrimaryAmmo_MetaData[];
#endif
		static const UECodeGen_Private::FIntPropertyParams NewProp_PrimaryAmmo;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_SidearmAmmo_MetaData[];
#endif
		static const UECodeGen_Private::FIntPropertyParams NewProp_SidearmAmmo;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_SpecialAmmo_MetaData[];
#endif
		static const UECodeGen_Private::FIntPropertyParams NewProp_SpecialAmmo;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_OpticIndex_MetaData[];
#endif
		static const UECodeGen_Private::FBytePropertyParams NewProp_OpticIndex;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_bIsAiming_MetaData[];
#endif
		static void NewProp_bIsAiming_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bIsAiming;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_ACoopCharacter_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_ACharacter,
		(UObject* (*)())Z_Construct_UPackage__Script_UntitledCoopShooter,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_ACoopCharacter_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_ACoopCharacter_CycleOptic, "CycleOptic" }, // 1188584968
		{ &Z_Construct_UFunction_ACoopCharacter_DeductAmmo, "DeductAmmo" }, // 2539063366
		{ &Z_Construct_UFunction_ACoopCharacter_GetCurrentOptic, "GetCurrentOptic" }, // 3380800520
		{ &Z_Construct_UFunction_ACoopCharacter_GetCurrentWeapon, "GetCurrentWeapon" }, // 2007192486
		{ &Z_Construct_UFunction_ACoopCharacter_GetFirstPersonCameraComponent, "GetFirstPersonCameraComponent" }, // 4121983756
		{ &Z_Construct_UFunction_ACoopCharacter_GetLeftHandTransform, "GetLeftHandTransform" }, // 1382401826
		{ &Z_Construct_UFunction_ACoopCharacter_GetMesh1P, "GetMesh1P" }, // 280082032
		{ &Z_Construct_UFunction_ACoopCharacter_GetRelativeHandTransform, "GetRelativeHandTransform" }, // 3801801377
		{ &Z_Construct_UFunction_ACoopCharacter_GetSightTransform, "GetSightTransform" }, // 411275376
		{ &Z_Construct_UFunction_ACoopCharacter_OnRep_bIsAiming, "OnRep_bIsAiming" }, // 2851877151
		{ &Z_Construct_UFunction_ACoopCharacter_OnRep_EquippedWeapon, "OnRep_EquippedWeapon" }, // 1380079410
		{ &Z_Construct_UFunction_ACoopCharacter_OnRep_OpticIndex, "OnRep_OpticIndex" }, // 3565584312
		{ &Z_Construct_UFunction_ACoopCharacter_Reload, "Reload" }, // 3889061891
		{ &Z_Construct_UFunction_ACoopCharacter_Server_OpticIndex, "Server_OpticIndex" }, // 227580643
		{ &Z_Construct_UFunction_ACoopCharacter_Server_SetAiming, "Server_SetAiming" }, // 810399068
		{ &Z_Construct_UFunction_ACoopCharacter_Server_SwitchWeapon, "Server_SwitchWeapon" }, // 173990030
		{ &Z_Construct_UFunction_ACoopCharacter_ServerOnFire, "ServerOnFire" }, // 752820164
		{ &Z_Construct_UFunction_ACoopCharacter_ServerOnStopFire, "ServerOnStopFire" }, // 3776417048
		{ &Z_Construct_UFunction_ACoopCharacter_SetAiming, "SetAiming" }, // 1205249474
		{ &Z_Construct_UFunction_ACoopCharacter_SetLeftHandTransform, "SetLeftHandTransform" }, // 1731678778
		{ &Z_Construct_UFunction_ACoopCharacter_SetRelativeHandTransform, "SetRelativeHandTransform" }, // 2351403275
		{ &Z_Construct_UFunction_ACoopCharacter_SetSightTransform, "SetSightTransform" }, // 484543698
		{ &Z_Construct_UFunction_ACoopCharacter_SwitchFireMode, "SwitchFireMode" }, // 1738092243
		{ &Z_Construct_UFunction_ACoopCharacter_SwitchToPrimary, "SwitchToPrimary" }, // 2626434796
		{ &Z_Construct_UFunction_ACoopCharacter_SwitchToSecondary, "SwitchToSecondary" }, // 2893013171
		{ &Z_Construct_UFunction_ACoopCharacter_SwitchWeapon, "SwitchWeapon" }, // 1811167409
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ACoopCharacter_Statics::Class_MetaDataParams[] = {
		{ "HideCategories", "Navigation" },
		{ "IncludePath", "CoopCharacter.h" },
		{ "ModuleRelativePath", "Public/CoopCharacter.h" },
	};
#endif
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ACoopCharacter_Statics::NewProp_Mesh1P_MetaData[] = {
		{ "Category", "Mesh" },
		{ "Comment", "/** Pawn mesh: 1st person view (arms; seen only by self) */" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/CoopCharacter.h" },
		{ "ToolTip", "Pawn mesh: 1st person view (arms; seen only by self)" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_ACoopCharacter_Statics::NewProp_Mesh1P = { "Mesh1P", nullptr, (EPropertyFlags)0x00400000000b0009, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ACoopCharacter, Mesh1P), Z_Construct_UClass_USkeletalMeshComponent_NoRegister, METADATA_PARAMS(Z_Construct_UClass_ACoopCharacter_Statics::NewProp_Mesh1P_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ACoopCharacter_Statics::NewProp_Mesh1P_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ACoopCharacter_Statics::NewProp_FirstPersonCameraComponent_MetaData[] = {
		{ "AllowPrivateAccess", "true" },
		{ "Category", "Camera" },
		{ "Comment", "/** First person camera */" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/CoopCharacter.h" },
		{ "ToolTip", "First person camera" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_ACoopCharacter_Statics::NewProp_FirstPersonCameraComponent = { "FirstPersonCameraComponent", nullptr, (EPropertyFlags)0x00400000000a001d, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ACoopCharacter, FirstPersonCameraComponent), Z_Construct_UClass_UCameraComponent_NoRegister, METADATA_PARAMS(Z_Construct_UClass_ACoopCharacter_Statics::NewProp_FirstPersonCameraComponent_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ACoopCharacter_Statics::NewProp_FirstPersonCameraComponent_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ACoopCharacter_Statics::NewProp_VitalsComponent_MetaData[] = {
		{ "Category", "Components" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/CoopCharacter.h" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_ACoopCharacter_Statics::NewProp_VitalsComponent = { "VitalsComponent", nullptr, (EPropertyFlags)0x0040000000090009, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ACoopCharacter, VitalsComponent), Z_Construct_UClass_UVitalsComponent_NoRegister, METADATA_PARAMS(Z_Construct_UClass_ACoopCharacter_Statics::NewProp_VitalsComponent_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ACoopCharacter_Statics::NewProp_VitalsComponent_MetaData)) };
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_ACoopCharacter_Statics::NewProp_Optics_Inner = { "Optics", nullptr, (EPropertyFlags)0x0000000000080008, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, Z_Construct_UClass_UStaticMeshComponent_NoRegister, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ACoopCharacter_Statics::NewProp_Optics_MetaData[] = {
		{ "Category", "Optics" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/CoopCharacter.h" },
	};
#endif
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UClass_ACoopCharacter_Statics::NewProp_Optics = { "Optics", nullptr, (EPropertyFlags)0x001000800000000d, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ACoopCharacter, Optics), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UClass_ACoopCharacter_Statics::NewProp_Optics_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ACoopCharacter_Statics::NewProp_Optics_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ACoopCharacter_Statics::NewProp_CurrentOptic_MetaData[] = {
		{ "Category", "Optics" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/CoopCharacter.h" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_ACoopCharacter_Statics::NewProp_CurrentOptic = { "CurrentOptic", nullptr, (EPropertyFlags)0x001000000008000d, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ACoopCharacter, CurrentOptic), Z_Construct_UClass_UStaticMeshComponent_NoRegister, METADATA_PARAMS(Z_Construct_UClass_ACoopCharacter_Statics::NewProp_CurrentOptic_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ACoopCharacter_Statics::NewProp_CurrentOptic_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ACoopCharacter_Statics::NewProp_BaseTurnRate_MetaData[] = {
		{ "Category", "Camera" },
		{ "Comment", "/** Base turn rate, in deg/sec. Other scaling may affect final turn rate. */" },
		{ "ModuleRelativePath", "Public/CoopCharacter.h" },
		{ "ToolTip", "Base turn rate, in deg/sec. Other scaling may affect final turn rate." },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_ACoopCharacter_Statics::NewProp_BaseTurnRate = { "BaseTurnRate", nullptr, (EPropertyFlags)0x0010000000020015, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ACoopCharacter, BaseTurnRate), METADATA_PARAMS(Z_Construct_UClass_ACoopCharacter_Statics::NewProp_BaseTurnRate_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ACoopCharacter_Statics::NewProp_BaseTurnRate_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ACoopCharacter_Statics::NewProp_BaseLookUpRate_MetaData[] = {
		{ "Category", "Camera" },
		{ "Comment", "/** Base look up/down rate, in deg/sec. Other scaling may affect final rate. */" },
		{ "ModuleRelativePath", "Public/CoopCharacter.h" },
		{ "ToolTip", "Base look up/down rate, in deg/sec. Other scaling may affect final rate." },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_ACoopCharacter_Statics::NewProp_BaseLookUpRate = { "BaseLookUpRate", nullptr, (EPropertyFlags)0x0010000000020015, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ACoopCharacter, BaseLookUpRate), METADATA_PARAMS(Z_Construct_UClass_ACoopCharacter_Statics::NewProp_BaseLookUpRate_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ACoopCharacter_Statics::NewProp_BaseLookUpRate_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ACoopCharacter_Statics::NewProp_SightTransform_MetaData[] = {
		{ "Comment", "//Transforms for animation instance\n" },
		{ "ModuleRelativePath", "Public/CoopCharacter.h" },
		{ "ToolTip", "Transforms for animation instance" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_ACoopCharacter_Statics::NewProp_SightTransform = { "SightTransform", nullptr, (EPropertyFlags)0x0020080000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ACoopCharacter, SightTransform), Z_Construct_UScriptStruct_FTransform, METADATA_PARAMS(Z_Construct_UClass_ACoopCharacter_Statics::NewProp_SightTransform_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ACoopCharacter_Statics::NewProp_SightTransform_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ACoopCharacter_Statics::NewProp_RelativeHandTransform_MetaData[] = {
		{ "Comment", "/*UFUNCTION()\n\x09\x09void OnRep_SightTransform(FTransform NewTransform);*/" },
		{ "ModuleRelativePath", "Public/CoopCharacter.h" },
		{ "ToolTip", "UFUNCTION()\n               void OnRep_SightTransform(FTransform NewTransform);" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_ACoopCharacter_Statics::NewProp_RelativeHandTransform = { "RelativeHandTransform", nullptr, (EPropertyFlags)0x0020080000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ACoopCharacter, RelativeHandTransform), Z_Construct_UScriptStruct_FTransform, METADATA_PARAMS(Z_Construct_UClass_ACoopCharacter_Statics::NewProp_RelativeHandTransform_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ACoopCharacter_Statics::NewProp_RelativeHandTransform_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ACoopCharacter_Statics::NewProp_LeftHandTransform_MetaData[] = {
		{ "ModuleRelativePath", "Public/CoopCharacter.h" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_ACoopCharacter_Statics::NewProp_LeftHandTransform = { "LeftHandTransform", nullptr, (EPropertyFlags)0x0020080000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ACoopCharacter, LeftHandTransform), Z_Construct_UScriptStruct_FTransform, METADATA_PARAMS(Z_Construct_UClass_ACoopCharacter_Statics::NewProp_LeftHandTransform_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ACoopCharacter_Statics::NewProp_LeftHandTransform_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ACoopCharacter_Statics::NewProp_CurrentWeapon_MetaData[] = {
		{ "Category", "Loadout" },
		{ "Comment", "/*UFUNCTION()\n\x09\x09void OnRep_LeftHandTransform(FTransform NewTransform);*///variable for tracking the currently equipped weapon - pointer to actual actor\n" },
		{ "ModuleRelativePath", "Public/CoopCharacter.h" },
		{ "ToolTip", "UFUNCTION()\n               void OnRep_LeftHandTransform(FTransform NewTransform);//variable for tracking the currently equipped weapon - pointer to actual actor" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_ACoopCharacter_Statics::NewProp_CurrentWeapon = { "CurrentWeapon", nullptr, (EPropertyFlags)0x0020080000000034, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ACoopCharacter, CurrentWeapon), Z_Construct_UClass_AHitscanFirearm_NoRegister, METADATA_PARAMS(Z_Construct_UClass_ACoopCharacter_Statics::NewProp_CurrentWeapon_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ACoopCharacter_Statics::NewProp_CurrentWeapon_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ACoopCharacter_Statics::NewProp_TP_Gun_MetaData[] = {
		{ "Category", "Mesh" },
		{ "Comment", "///** Third Person Gun mesh that is seen by other players */\n" },
		{ "ModuleRelativePath", "Public/CoopCharacter.h" },
		{ "ToolTip", "Third Person Gun mesh that is seen by other players" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_ACoopCharacter_Statics::NewProp_TP_Gun = { "TP_Gun", nullptr, (EPropertyFlags)0x0020080000030021, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ACoopCharacter, TP_Gun), Z_Construct_UClass_AHitscanFirearm_NoRegister, METADATA_PARAMS(Z_Construct_UClass_ACoopCharacter_Statics::NewProp_TP_Gun_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ACoopCharacter_Statics::NewProp_TP_Gun_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ACoopCharacter_Statics::NewProp_EquippedWeapon_MetaData[] = {
		{ "Comment", "//Variable used to track which of the subclasses is active\n" },
		{ "ModuleRelativePath", "Public/CoopCharacter.h" },
		{ "ToolTip", "Variable used to track which of the subclasses is active" },
	};
#endif
	const UECodeGen_Private::FClassPropertyParams Z_Construct_UClass_ACoopCharacter_Statics::NewProp_EquippedWeapon = { "EquippedWeapon", "OnRep_EquippedWeapon", (EPropertyFlags)0x0024080100000020, UECodeGen_Private::EPropertyGenFlags::Class, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ACoopCharacter, EquippedWeapon), Z_Construct_UClass_AHitscanFirearm_NoRegister, Z_Construct_UClass_UClass, METADATA_PARAMS(Z_Construct_UClass_ACoopCharacter_Statics::NewProp_EquippedWeapon_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ACoopCharacter_Statics::NewProp_EquippedWeapon_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ACoopCharacter_Statics::NewProp_PrimaryWeapon_MetaData[] = {
		{ "Category", "Loadout" },
		{ "Comment", "//the equipped primary weapon type\n" },
		{ "ModuleRelativePath", "Public/CoopCharacter.h" },
		{ "ToolTip", "the equipped primary weapon type" },
	};
#endif
	const UECodeGen_Private::FClassPropertyParams Z_Construct_UClass_ACoopCharacter_Statics::NewProp_PrimaryWeapon = { "PrimaryWeapon", nullptr, (EPropertyFlags)0x0024080000010001, UECodeGen_Private::EPropertyGenFlags::Class, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ACoopCharacter, PrimaryWeapon), Z_Construct_UClass_AHitscanFirearm_NoRegister, Z_Construct_UClass_UClass, METADATA_PARAMS(Z_Construct_UClass_ACoopCharacter_Statics::NewProp_PrimaryWeapon_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ACoopCharacter_Statics::NewProp_PrimaryWeapon_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ACoopCharacter_Statics::NewProp_SecondaryWeapon_MetaData[] = {
		{ "Category", "Loadout" },
		{ "ModuleRelativePath", "Public/CoopCharacter.h" },
	};
#endif
	const UECodeGen_Private::FClassPropertyParams Z_Construct_UClass_ACoopCharacter_Statics::NewProp_SecondaryWeapon = { "SecondaryWeapon", nullptr, (EPropertyFlags)0x0024080000010001, UECodeGen_Private::EPropertyGenFlags::Class, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ACoopCharacter, SecondaryWeapon), Z_Construct_UClass_AHitscanFirearm_NoRegister, Z_Construct_UClass_UClass, METADATA_PARAMS(Z_Construct_UClass_ACoopCharacter_Statics::NewProp_SecondaryWeapon_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ACoopCharacter_Statics::NewProp_SecondaryWeapon_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ACoopCharacter_Statics::NewProp_CurrentAmmo_MetaData[] = {
		{ "Category", "Loadout" },
		{ "Comment", "//the amount of ammo the player has for the currently equipped weapon\n" },
		{ "ModuleRelativePath", "Public/CoopCharacter.h" },
		{ "ToolTip", "the amount of ammo the player has for the currently equipped weapon" },
	};
#endif
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UClass_ACoopCharacter_Statics::NewProp_CurrentAmmo = { "CurrentAmmo", nullptr, (EPropertyFlags)0x0020080000000014, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ACoopCharacter, CurrentAmmo), METADATA_PARAMS(Z_Construct_UClass_ACoopCharacter_Statics::NewProp_CurrentAmmo_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ACoopCharacter_Statics::NewProp_CurrentAmmo_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ACoopCharacter_Statics::NewProp_PrimaryAmmo_MetaData[] = {
		{ "Category", "Loadout" },
		{ "Comment", "//the amount of ammo the player has for primary weapons\n" },
		{ "ModuleRelativePath", "Public/CoopCharacter.h" },
		{ "ToolTip", "the amount of ammo the player has for primary weapons" },
	};
#endif
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UClass_ACoopCharacter_Statics::NewProp_PrimaryAmmo = { "PrimaryAmmo", nullptr, (EPropertyFlags)0x0020080000010015, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ACoopCharacter, PrimaryAmmo), METADATA_PARAMS(Z_Construct_UClass_ACoopCharacter_Statics::NewProp_PrimaryAmmo_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ACoopCharacter_Statics::NewProp_PrimaryAmmo_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ACoopCharacter_Statics::NewProp_SidearmAmmo_MetaData[] = {
		{ "Category", "Loadout" },
		{ "Comment", "//the amount of ammo the player has for their sidearm\n" },
		{ "ModuleRelativePath", "Public/CoopCharacter.h" },
		{ "ToolTip", "the amount of ammo the player has for their sidearm" },
	};
#endif
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UClass_ACoopCharacter_Statics::NewProp_SidearmAmmo = { "SidearmAmmo", nullptr, (EPropertyFlags)0x0020080000010015, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ACoopCharacter, SidearmAmmo), METADATA_PARAMS(Z_Construct_UClass_ACoopCharacter_Statics::NewProp_SidearmAmmo_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ACoopCharacter_Statics::NewProp_SidearmAmmo_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ACoopCharacter_Statics::NewProp_SpecialAmmo_MetaData[] = {
		{ "Category", "Loadout" },
		{ "Comment", "//the amount of ammo the player has for special weapons\n" },
		{ "ModuleRelativePath", "Public/CoopCharacter.h" },
		{ "ToolTip", "the amount of ammo the player has for special weapons" },
	};
#endif
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UClass_ACoopCharacter_Statics::NewProp_SpecialAmmo = { "SpecialAmmo", nullptr, (EPropertyFlags)0x0020080000010015, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ACoopCharacter, SpecialAmmo), METADATA_PARAMS(Z_Construct_UClass_ACoopCharacter_Statics::NewProp_SpecialAmmo_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ACoopCharacter_Statics::NewProp_SpecialAmmo_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ACoopCharacter_Statics::NewProp_OpticIndex_MetaData[] = {
		{ "ModuleRelativePath", "Public/CoopCharacter.h" },
	};
#endif
	const UECodeGen_Private::FBytePropertyParams Z_Construct_UClass_ACoopCharacter_Statics::NewProp_OpticIndex = { "OpticIndex", "OnRep_OpticIndex", (EPropertyFlags)0x0020080100000020, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ACoopCharacter, OpticIndex), nullptr, METADATA_PARAMS(Z_Construct_UClass_ACoopCharacter_Statics::NewProp_OpticIndex_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ACoopCharacter_Statics::NewProp_OpticIndex_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ACoopCharacter_Statics::NewProp_bIsAiming_MetaData[] = {
		{ "Category", "Procedural Aiming" },
		{ "ModuleRelativePath", "Public/CoopCharacter.h" },
	};
#endif
	void Z_Construct_UClass_ACoopCharacter_Statics::NewProp_bIsAiming_SetBit(void* Obj)
	{
		((ACoopCharacter*)Obj)->bIsAiming = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_ACoopCharacter_Statics::NewProp_bIsAiming = { "bIsAiming", "OnRep_bIsAiming", (EPropertyFlags)0x0020080100000024, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(ACoopCharacter), &Z_Construct_UClass_ACoopCharacter_Statics::NewProp_bIsAiming_SetBit, METADATA_PARAMS(Z_Construct_UClass_ACoopCharacter_Statics::NewProp_bIsAiming_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ACoopCharacter_Statics::NewProp_bIsAiming_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_ACoopCharacter_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ACoopCharacter_Statics::NewProp_Mesh1P,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ACoopCharacter_Statics::NewProp_FirstPersonCameraComponent,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ACoopCharacter_Statics::NewProp_VitalsComponent,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ACoopCharacter_Statics::NewProp_Optics_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ACoopCharacter_Statics::NewProp_Optics,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ACoopCharacter_Statics::NewProp_CurrentOptic,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ACoopCharacter_Statics::NewProp_BaseTurnRate,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ACoopCharacter_Statics::NewProp_BaseLookUpRate,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ACoopCharacter_Statics::NewProp_SightTransform,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ACoopCharacter_Statics::NewProp_RelativeHandTransform,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ACoopCharacter_Statics::NewProp_LeftHandTransform,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ACoopCharacter_Statics::NewProp_CurrentWeapon,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ACoopCharacter_Statics::NewProp_TP_Gun,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ACoopCharacter_Statics::NewProp_EquippedWeapon,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ACoopCharacter_Statics::NewProp_PrimaryWeapon,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ACoopCharacter_Statics::NewProp_SecondaryWeapon,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ACoopCharacter_Statics::NewProp_CurrentAmmo,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ACoopCharacter_Statics::NewProp_PrimaryAmmo,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ACoopCharacter_Statics::NewProp_SidearmAmmo,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ACoopCharacter_Statics::NewProp_SpecialAmmo,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ACoopCharacter_Statics::NewProp_OpticIndex,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ACoopCharacter_Statics::NewProp_bIsAiming,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_ACoopCharacter_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<ACoopCharacter>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_ACoopCharacter_Statics::ClassParams = {
		&ACoopCharacter::StaticClass,
		"Game",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		FuncInfo,
		Z_Construct_UClass_ACoopCharacter_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		UE_ARRAY_COUNT(FuncInfo),
		UE_ARRAY_COUNT(Z_Construct_UClass_ACoopCharacter_Statics::PropPointers),
		0,
		0x009000A4u,
		METADATA_PARAMS(Z_Construct_UClass_ACoopCharacter_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_ACoopCharacter_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_ACoopCharacter()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UECodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_ACoopCharacter_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(ACoopCharacter, 2729621977);
	template<> UNTITLEDCOOPSHOOTER_API UClass* StaticClass<ACoopCharacter>()
	{
		return ACoopCharacter::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_ACoopCharacter(Z_Construct_UClass_ACoopCharacter, &ACoopCharacter::StaticClass, TEXT("/Script/UntitledCoopShooter"), TEXT("ACoopCharacter"), false, nullptr, nullptr, nullptr);

	void ACoopCharacter::ValidateGeneratedRepEnums(const TArray<struct FRepRecord>& ClassReps) const
	{
		static const FName Name_CurrentWeapon(TEXT("CurrentWeapon"));
		static const FName Name_TP_Gun(TEXT("TP_Gun"));
		static const FName Name_EquippedWeapon(TEXT("EquippedWeapon"));
		static const FName Name_OpticIndex(TEXT("OpticIndex"));
		static const FName Name_bIsAiming(TEXT("bIsAiming"));

		const bool bIsValid = true
			&& Name_CurrentWeapon == ClassReps[(int32)ENetFields_Private::CurrentWeapon].Property->GetFName()
			&& Name_TP_Gun == ClassReps[(int32)ENetFields_Private::TP_Gun].Property->GetFName()
			&& Name_EquippedWeapon == ClassReps[(int32)ENetFields_Private::EquippedWeapon].Property->GetFName()
			&& Name_OpticIndex == ClassReps[(int32)ENetFields_Private::OpticIndex].Property->GetFName()
			&& Name_bIsAiming == ClassReps[(int32)ENetFields_Private::bIsAiming].Property->GetFName();

		checkf(bIsValid, TEXT("UHT Generated Rep Indices do not match runtime populated Rep Indices for properties in ACoopCharacter"));
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(ACoopCharacter);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
