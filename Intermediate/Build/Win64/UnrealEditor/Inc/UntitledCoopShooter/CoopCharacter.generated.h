// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
struct FTransform;
class AHitscanFirearm;
class UCameraComponent;
class USkeletalMeshComponent;
class UStaticMeshComponent;
#ifdef UNTITLEDCOOPSHOOTER_CoopCharacter_generated_h
#error "CoopCharacter.generated.h already included, missing '#pragma once' in CoopCharacter.h"
#endif
#define UNTITLEDCOOPSHOOTER_CoopCharacter_generated_h

#define UntitledCoopShooter_Source_UntitledCoopShooter_Public_CoopCharacter_h_21_SPARSE_DATA
#define UntitledCoopShooter_Source_UntitledCoopShooter_Public_CoopCharacter_h_21_RPC_WRAPPERS \
	virtual bool Server_SetAiming_Validate(bool ); \
	virtual void Server_SetAiming_Implementation(bool IsAiming); \
	virtual bool ServerOnStopFire_Validate(); \
	virtual void ServerOnStopFire_Implementation(); \
	virtual bool ServerOnFire_Validate(); \
	virtual void ServerOnFire_Implementation(); \
	virtual bool Server_OpticIndex_Validate(uint8 ); \
	virtual void Server_OpticIndex_Implementation(uint8 NewIndex); \
	virtual bool Server_SwitchWeapon_Validate(TSubclassOf<AHitscanFirearm>  ); \
	virtual void Server_SwitchWeapon_Implementation(TSubclassOf<AHitscanFirearm>  NewWeapon); \
	virtual bool OnRep_EquippedWeapon_Validate(); \
	virtual void OnRep_EquippedWeapon_Implementation(); \
 \
	DECLARE_FUNCTION(execSetLeftHandTransform); \
	DECLARE_FUNCTION(execGetLeftHandTransform); \
	DECLARE_FUNCTION(execSetRelativeHandTransform); \
	DECLARE_FUNCTION(execGetRelativeHandTransform); \
	DECLARE_FUNCTION(execSetSightTransform); \
	DECLARE_FUNCTION(execGetSightTransform); \
	DECLARE_FUNCTION(execDeductAmmo); \
	DECLARE_FUNCTION(execGetCurrentWeapon); \
	DECLARE_FUNCTION(execGetFirstPersonCameraComponent); \
	DECLARE_FUNCTION(execGetMesh1P); \
	DECLARE_FUNCTION(execReload); \
	DECLARE_FUNCTION(execCycleOptic); \
	DECLARE_FUNCTION(execServer_SetAiming); \
	DECLARE_FUNCTION(execOnRep_bIsAiming); \
	DECLARE_FUNCTION(execSetAiming); \
	DECLARE_FUNCTION(execServerOnStopFire); \
	DECLARE_FUNCTION(execServerOnFire); \
	DECLARE_FUNCTION(execServer_OpticIndex); \
	DECLARE_FUNCTION(execOnRep_OpticIndex); \
	DECLARE_FUNCTION(execSwitchToSecondary); \
	DECLARE_FUNCTION(execSwitchToPrimary); \
	DECLARE_FUNCTION(execSwitchFireMode); \
	DECLARE_FUNCTION(execServer_SwitchWeapon); \
	DECLARE_FUNCTION(execSwitchWeapon); \
	DECLARE_FUNCTION(execOnRep_EquippedWeapon); \
	DECLARE_FUNCTION(execGetCurrentOptic);


#define UntitledCoopShooter_Source_UntitledCoopShooter_Public_CoopCharacter_h_21_RPC_WRAPPERS_NO_PURE_DECLS \
	virtual bool Server_SetAiming_Validate(bool ); \
	virtual void Server_SetAiming_Implementation(bool IsAiming); \
	virtual bool ServerOnStopFire_Validate(); \
	virtual void ServerOnStopFire_Implementation(); \
	virtual bool ServerOnFire_Validate(); \
	virtual void ServerOnFire_Implementation(); \
	virtual bool Server_OpticIndex_Validate(uint8 ); \
	virtual void Server_OpticIndex_Implementation(uint8 NewIndex); \
	virtual bool Server_SwitchWeapon_Validate(TSubclassOf<AHitscanFirearm>  ); \
	virtual void Server_SwitchWeapon_Implementation(TSubclassOf<AHitscanFirearm>  NewWeapon); \
	virtual bool OnRep_EquippedWeapon_Validate(); \
	virtual void OnRep_EquippedWeapon_Implementation(); \
 \
	DECLARE_FUNCTION(execSetLeftHandTransform); \
	DECLARE_FUNCTION(execGetLeftHandTransform); \
	DECLARE_FUNCTION(execSetRelativeHandTransform); \
	DECLARE_FUNCTION(execGetRelativeHandTransform); \
	DECLARE_FUNCTION(execSetSightTransform); \
	DECLARE_FUNCTION(execGetSightTransform); \
	DECLARE_FUNCTION(execDeductAmmo); \
	DECLARE_FUNCTION(execGetCurrentWeapon); \
	DECLARE_FUNCTION(execGetFirstPersonCameraComponent); \
	DECLARE_FUNCTION(execGetMesh1P); \
	DECLARE_FUNCTION(execReload); \
	DECLARE_FUNCTION(execCycleOptic); \
	DECLARE_FUNCTION(execServer_SetAiming); \
	DECLARE_FUNCTION(execOnRep_bIsAiming); \
	DECLARE_FUNCTION(execSetAiming); \
	DECLARE_FUNCTION(execServerOnStopFire); \
	DECLARE_FUNCTION(execServerOnFire); \
	DECLARE_FUNCTION(execServer_OpticIndex); \
	DECLARE_FUNCTION(execOnRep_OpticIndex); \
	DECLARE_FUNCTION(execSwitchToSecondary); \
	DECLARE_FUNCTION(execSwitchToPrimary); \
	DECLARE_FUNCTION(execSwitchFireMode); \
	DECLARE_FUNCTION(execServer_SwitchWeapon); \
	DECLARE_FUNCTION(execSwitchWeapon); \
	DECLARE_FUNCTION(execOnRep_EquippedWeapon); \
	DECLARE_FUNCTION(execGetCurrentOptic);


#define UntitledCoopShooter_Source_UntitledCoopShooter_Public_CoopCharacter_h_21_EVENT_PARMS \
	struct CoopCharacter_eventServer_OpticIndex_Parms \
	{ \
		uint8 NewIndex; \
	}; \
	struct CoopCharacter_eventServer_SetAiming_Parms \
	{ \
		bool IsAiming; \
	}; \
	struct CoopCharacter_eventServer_SwitchWeapon_Parms \
	{ \
		TSubclassOf<AHitscanFirearm>  NewWeapon; \
	};


#define UntitledCoopShooter_Source_UntitledCoopShooter_Public_CoopCharacter_h_21_CALLBACK_WRAPPERS
#define UntitledCoopShooter_Source_UntitledCoopShooter_Public_CoopCharacter_h_21_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesACoopCharacter(); \
	friend struct Z_Construct_UClass_ACoopCharacter_Statics; \
public: \
	DECLARE_CLASS(ACoopCharacter, ACharacter, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/UntitledCoopShooter"), NO_API) \
	DECLARE_SERIALIZER(ACoopCharacter) \
	enum class ENetFields_Private : uint16 \
	{ \
		NETFIELD_REP_START=(uint16)((int32)Super::ENetFields_Private::NETFIELD_REP_END + (int32)1), \
		CurrentWeapon=NETFIELD_REP_START, \
		TP_Gun, \
		EquippedWeapon, \
		OpticIndex, \
		bIsAiming, \
		NETFIELD_REP_END=bIsAiming	}; \
	NO_API virtual void ValidateGeneratedRepEnums(const TArray<struct FRepRecord>& ClassReps) const override;


#define UntitledCoopShooter_Source_UntitledCoopShooter_Public_CoopCharacter_h_21_INCLASS \
private: \
	static void StaticRegisterNativesACoopCharacter(); \
	friend struct Z_Construct_UClass_ACoopCharacter_Statics; \
public: \
	DECLARE_CLASS(ACoopCharacter, ACharacter, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/UntitledCoopShooter"), NO_API) \
	DECLARE_SERIALIZER(ACoopCharacter) \
	enum class ENetFields_Private : uint16 \
	{ \
		NETFIELD_REP_START=(uint16)((int32)Super::ENetFields_Private::NETFIELD_REP_END + (int32)1), \
		CurrentWeapon=NETFIELD_REP_START, \
		TP_Gun, \
		EquippedWeapon, \
		OpticIndex, \
		bIsAiming, \
		NETFIELD_REP_END=bIsAiming	}; \
	NO_API virtual void ValidateGeneratedRepEnums(const TArray<struct FRepRecord>& ClassReps) const override;


#define UntitledCoopShooter_Source_UntitledCoopShooter_Public_CoopCharacter_h_21_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API ACoopCharacter(const FObjectInitializer& ObjectInitializer); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(ACoopCharacter) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, ACoopCharacter); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(ACoopCharacter); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API ACoopCharacter(ACoopCharacter&&); \
	NO_API ACoopCharacter(const ACoopCharacter&); \
public:


#define UntitledCoopShooter_Source_UntitledCoopShooter_Public_CoopCharacter_h_21_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API ACoopCharacter(ACoopCharacter&&); \
	NO_API ACoopCharacter(const ACoopCharacter&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, ACoopCharacter); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(ACoopCharacter); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(ACoopCharacter)


#define UntitledCoopShooter_Source_UntitledCoopShooter_Public_CoopCharacter_h_21_PRIVATE_PROPERTY_OFFSET \
	FORCEINLINE static uint32 __PPO__Mesh1P() { return STRUCT_OFFSET(ACoopCharacter, Mesh1P); } \
	FORCEINLINE static uint32 __PPO__FirstPersonCameraComponent() { return STRUCT_OFFSET(ACoopCharacter, FirstPersonCameraComponent); } \
	FORCEINLINE static uint32 __PPO__VitalsComponent() { return STRUCT_OFFSET(ACoopCharacter, VitalsComponent); } \
	FORCEINLINE static uint32 __PPO__SightTransform() { return STRUCT_OFFSET(ACoopCharacter, SightTransform); } \
	FORCEINLINE static uint32 __PPO__RelativeHandTransform() { return STRUCT_OFFSET(ACoopCharacter, RelativeHandTransform); } \
	FORCEINLINE static uint32 __PPO__LeftHandTransform() { return STRUCT_OFFSET(ACoopCharacter, LeftHandTransform); } \
	FORCEINLINE static uint32 __PPO__CurrentWeapon() { return STRUCT_OFFSET(ACoopCharacter, CurrentWeapon); } \
	FORCEINLINE static uint32 __PPO__TP_Gun() { return STRUCT_OFFSET(ACoopCharacter, TP_Gun); } \
	FORCEINLINE static uint32 __PPO__EquippedWeapon() { return STRUCT_OFFSET(ACoopCharacter, EquippedWeapon); } \
	FORCEINLINE static uint32 __PPO__PrimaryWeapon() { return STRUCT_OFFSET(ACoopCharacter, PrimaryWeapon); } \
	FORCEINLINE static uint32 __PPO__SecondaryWeapon() { return STRUCT_OFFSET(ACoopCharacter, SecondaryWeapon); } \
	FORCEINLINE static uint32 __PPO__CurrentAmmo() { return STRUCT_OFFSET(ACoopCharacter, CurrentAmmo); } \
	FORCEINLINE static uint32 __PPO__PrimaryAmmo() { return STRUCT_OFFSET(ACoopCharacter, PrimaryAmmo); } \
	FORCEINLINE static uint32 __PPO__SidearmAmmo() { return STRUCT_OFFSET(ACoopCharacter, SidearmAmmo); } \
	FORCEINLINE static uint32 __PPO__SpecialAmmo() { return STRUCT_OFFSET(ACoopCharacter, SpecialAmmo); } \
	FORCEINLINE static uint32 __PPO__OpticIndex() { return STRUCT_OFFSET(ACoopCharacter, OpticIndex); } \
	FORCEINLINE static uint32 __PPO__bIsAiming() { return STRUCT_OFFSET(ACoopCharacter, bIsAiming); }


#define UntitledCoopShooter_Source_UntitledCoopShooter_Public_CoopCharacter_h_18_PROLOG \
	UntitledCoopShooter_Source_UntitledCoopShooter_Public_CoopCharacter_h_21_EVENT_PARMS


#define UntitledCoopShooter_Source_UntitledCoopShooter_Public_CoopCharacter_h_21_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	UntitledCoopShooter_Source_UntitledCoopShooter_Public_CoopCharacter_h_21_PRIVATE_PROPERTY_OFFSET \
	UntitledCoopShooter_Source_UntitledCoopShooter_Public_CoopCharacter_h_21_SPARSE_DATA \
	UntitledCoopShooter_Source_UntitledCoopShooter_Public_CoopCharacter_h_21_RPC_WRAPPERS \
	UntitledCoopShooter_Source_UntitledCoopShooter_Public_CoopCharacter_h_21_CALLBACK_WRAPPERS \
	UntitledCoopShooter_Source_UntitledCoopShooter_Public_CoopCharacter_h_21_INCLASS \
	UntitledCoopShooter_Source_UntitledCoopShooter_Public_CoopCharacter_h_21_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define UntitledCoopShooter_Source_UntitledCoopShooter_Public_CoopCharacter_h_21_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	UntitledCoopShooter_Source_UntitledCoopShooter_Public_CoopCharacter_h_21_PRIVATE_PROPERTY_OFFSET \
	UntitledCoopShooter_Source_UntitledCoopShooter_Public_CoopCharacter_h_21_SPARSE_DATA \
	UntitledCoopShooter_Source_UntitledCoopShooter_Public_CoopCharacter_h_21_RPC_WRAPPERS_NO_PURE_DECLS \
	UntitledCoopShooter_Source_UntitledCoopShooter_Public_CoopCharacter_h_21_CALLBACK_WRAPPERS \
	UntitledCoopShooter_Source_UntitledCoopShooter_Public_CoopCharacter_h_21_INCLASS_NO_PURE_DECLS \
	UntitledCoopShooter_Source_UntitledCoopShooter_Public_CoopCharacter_h_21_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> UNTITLEDCOOPSHOOTER_API UClass* StaticClass<class ACoopCharacter>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID UntitledCoopShooter_Source_UntitledCoopShooter_Public_CoopCharacter_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
