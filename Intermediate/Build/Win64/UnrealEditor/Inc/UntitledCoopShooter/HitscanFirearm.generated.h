// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
struct FTransform;
enum class EWeaponClass : uint8;
class USkeletalMeshComponent;
class AWeaponAttachment;
#ifdef UNTITLEDCOOPSHOOTER_HitscanFirearm_generated_h
#error "HitscanFirearm.generated.h already included, missing '#pragma once' in HitscanFirearm.h"
#endif
#define UNTITLEDCOOPSHOOTER_HitscanFirearm_generated_h

#define UntitledCoopShooter_Source_UntitledCoopShooter_Public_HitscanFirearm_h_19_GENERATED_BODY \
	friend struct Z_Construct_UScriptStruct_FHitScanTrace_Statics; \
	UNTITLEDCOOPSHOOTER_API static class UScriptStruct* StaticStruct();


template<> UNTITLEDCOOPSHOOTER_API UScriptStruct* StaticStruct<struct FHitScanTrace>();

#define UntitledCoopShooter_Source_UntitledCoopShooter_Public_HitscanFirearm_h_49_SPARSE_DATA
#define UntitledCoopShooter_Source_UntitledCoopShooter_Public_HitscanFirearm_h_49_RPC_WRAPPERS \
	virtual bool ServerStopFire_Validate(); \
	virtual void ServerStopFire_Implementation(); \
	virtual bool ServerFire_Validate(); \
	virtual void ServerFire_Implementation(); \
 \
	DECLARE_FUNCTION(execSwitchFireMode); \
	DECLARE_FUNCTION(execGetCurrentOpticTransform); \
	DECLARE_FUNCTION(execGetWeaponClass); \
	DECLARE_FUNCTION(execGetWeaponVerticalRecoil); \
	DECLARE_FUNCTION(execGetWeaponLateralRecoil); \
	DECLARE_FUNCTION(execGetWeaponErgonomics); \
	DECLARE_FUNCTION(execGetWeaponWeight); \
	DECLARE_FUNCTION(execGetMeshComponent); \
	DECLARE_FUNCTION(execServerStopFire); \
	DECLARE_FUNCTION(execServerFire); \
	DECLARE_FUNCTION(execOnRep_HitScanTrace); \
	DECLARE_FUNCTION(execGetCurrentOptic);


#define UntitledCoopShooter_Source_UntitledCoopShooter_Public_HitscanFirearm_h_49_RPC_WRAPPERS_NO_PURE_DECLS \
	virtual bool ServerStopFire_Validate(); \
	virtual void ServerStopFire_Implementation(); \
	virtual bool ServerFire_Validate(); \
	virtual void ServerFire_Implementation(); \
 \
	DECLARE_FUNCTION(execSwitchFireMode); \
	DECLARE_FUNCTION(execGetCurrentOpticTransform); \
	DECLARE_FUNCTION(execGetWeaponClass); \
	DECLARE_FUNCTION(execGetWeaponVerticalRecoil); \
	DECLARE_FUNCTION(execGetWeaponLateralRecoil); \
	DECLARE_FUNCTION(execGetWeaponErgonomics); \
	DECLARE_FUNCTION(execGetWeaponWeight); \
	DECLARE_FUNCTION(execGetMeshComponent); \
	DECLARE_FUNCTION(execServerStopFire); \
	DECLARE_FUNCTION(execServerFire); \
	DECLARE_FUNCTION(execOnRep_HitScanTrace); \
	DECLARE_FUNCTION(execGetCurrentOptic);


#define UntitledCoopShooter_Source_UntitledCoopShooter_Public_HitscanFirearm_h_49_EVENT_PARMS
#define UntitledCoopShooter_Source_UntitledCoopShooter_Public_HitscanFirearm_h_49_CALLBACK_WRAPPERS
#define UntitledCoopShooter_Source_UntitledCoopShooter_Public_HitscanFirearm_h_49_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesAHitscanFirearm(); \
	friend struct Z_Construct_UClass_AHitscanFirearm_Statics; \
public: \
	DECLARE_CLASS(AHitscanFirearm, AActor, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/UntitledCoopShooter"), NO_API) \
	DECLARE_SERIALIZER(AHitscanFirearm) \
	void GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const override; \
	enum class ENetFields_Private : uint16 \
	{ \
		NETFIELD_REP_START=(uint16)((int32)Super::ENetFields_Private::NETFIELD_REP_END + (int32)1), \
		HitScanTrace=NETFIELD_REP_START, \
		NETFIELD_REP_END=HitScanTrace	}; \
	NO_API virtual void ValidateGeneratedRepEnums(const TArray<struct FRepRecord>& ClassReps) const override;


#define UntitledCoopShooter_Source_UntitledCoopShooter_Public_HitscanFirearm_h_49_INCLASS \
private: \
	static void StaticRegisterNativesAHitscanFirearm(); \
	friend struct Z_Construct_UClass_AHitscanFirearm_Statics; \
public: \
	DECLARE_CLASS(AHitscanFirearm, AActor, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/UntitledCoopShooter"), NO_API) \
	DECLARE_SERIALIZER(AHitscanFirearm) \
	void GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const override; \
	enum class ENetFields_Private : uint16 \
	{ \
		NETFIELD_REP_START=(uint16)((int32)Super::ENetFields_Private::NETFIELD_REP_END + (int32)1), \
		HitScanTrace=NETFIELD_REP_START, \
		NETFIELD_REP_END=HitScanTrace	}; \
	NO_API virtual void ValidateGeneratedRepEnums(const TArray<struct FRepRecord>& ClassReps) const override;


#define UntitledCoopShooter_Source_UntitledCoopShooter_Public_HitscanFirearm_h_49_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API AHitscanFirearm(const FObjectInitializer& ObjectInitializer); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(AHitscanFirearm) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, AHitscanFirearm); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(AHitscanFirearm); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API AHitscanFirearm(AHitscanFirearm&&); \
	NO_API AHitscanFirearm(const AHitscanFirearm&); \
public:


#define UntitledCoopShooter_Source_UntitledCoopShooter_Public_HitscanFirearm_h_49_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API AHitscanFirearm(AHitscanFirearm&&); \
	NO_API AHitscanFirearm(const AHitscanFirearm&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, AHitscanFirearm); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(AHitscanFirearm); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(AHitscanFirearm)


#define UntitledCoopShooter_Source_UntitledCoopShooter_Public_HitscanFirearm_h_49_PRIVATE_PROPERTY_OFFSET \
	FORCEINLINE static uint32 __PPO__MeshComponent() { return STRUCT_OFFSET(AHitscanFirearm, MeshComponent); } \
	FORCEINLINE static uint32 __PPO__WeaponClass() { return STRUCT_OFFSET(AHitscanFirearm, WeaponClass); } \
	FORCEINLINE static uint32 __PPO__WeaponDamage() { return STRUCT_OFFSET(AHitscanFirearm, WeaponDamage); } \
	FORCEINLINE static uint32 __PPO__WeaponWeight() { return STRUCT_OFFSET(AHitscanFirearm, WeaponWeight); } \
	FORCEINLINE static uint32 __PPO__WeaponEffectiveRange() { return STRUCT_OFFSET(AHitscanFirearm, WeaponEffectiveRange); } \
	FORCEINLINE static uint32 __PPO__DamageType() { return STRUCT_OFFSET(AHitscanFirearm, DamageType); } \
	FORCEINLINE static uint32 __PPO__WeaponErgonomics() { return STRUCT_OFFSET(AHitscanFirearm, WeaponErgonomics); } \
	FORCEINLINE static uint32 __PPO__WeaponLateralRecoil() { return STRUCT_OFFSET(AHitscanFirearm, WeaponLateralRecoil); } \
	FORCEINLINE static uint32 __PPO__WeaponVerticalRecoil() { return STRUCT_OFFSET(AHitscanFirearm, WeaponVerticalRecoil); } \
	FORCEINLINE static uint32 __PPO__bCanFullAuto() { return STRUCT_OFFSET(AHitscanFirearm, bCanFullAuto); } \
	FORCEINLINE static uint32 __PPO__bCanSemiAuto() { return STRUCT_OFFSET(AHitscanFirearm, bCanSemiAuto); } \
	FORCEINLINE static uint32 __PPO__bCanBurstFire() { return STRUCT_OFFSET(AHitscanFirearm, bCanBurstFire); } \
	FORCEINLINE static uint32 __PPO__CurrentFireMode() { return STRUCT_OFFSET(AHitscanFirearm, CurrentFireMode); } \
	FORCEINLINE static uint32 __PPO__ShotsPerBurst() { return STRUCT_OFFSET(AHitscanFirearm, ShotsPerBurst); } \
	FORCEINLINE static uint32 __PPO__RateOfFire() { return STRUCT_OFFSET(AHitscanFirearm, RateOfFire); } \
	FORCEINLINE static uint32 __PPO__HitScanTrace() { return STRUCT_OFFSET(AHitscanFirearm, HitScanTrace); }


#define UntitledCoopShooter_Source_UntitledCoopShooter_Public_HitscanFirearm_h_46_PROLOG \
	UntitledCoopShooter_Source_UntitledCoopShooter_Public_HitscanFirearm_h_49_EVENT_PARMS


#define UntitledCoopShooter_Source_UntitledCoopShooter_Public_HitscanFirearm_h_49_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	UntitledCoopShooter_Source_UntitledCoopShooter_Public_HitscanFirearm_h_49_PRIVATE_PROPERTY_OFFSET \
	UntitledCoopShooter_Source_UntitledCoopShooter_Public_HitscanFirearm_h_49_SPARSE_DATA \
	UntitledCoopShooter_Source_UntitledCoopShooter_Public_HitscanFirearm_h_49_RPC_WRAPPERS \
	UntitledCoopShooter_Source_UntitledCoopShooter_Public_HitscanFirearm_h_49_CALLBACK_WRAPPERS \
	UntitledCoopShooter_Source_UntitledCoopShooter_Public_HitscanFirearm_h_49_INCLASS \
	UntitledCoopShooter_Source_UntitledCoopShooter_Public_HitscanFirearm_h_49_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define UntitledCoopShooter_Source_UntitledCoopShooter_Public_HitscanFirearm_h_49_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	UntitledCoopShooter_Source_UntitledCoopShooter_Public_HitscanFirearm_h_49_PRIVATE_PROPERTY_OFFSET \
	UntitledCoopShooter_Source_UntitledCoopShooter_Public_HitscanFirearm_h_49_SPARSE_DATA \
	UntitledCoopShooter_Source_UntitledCoopShooter_Public_HitscanFirearm_h_49_RPC_WRAPPERS_NO_PURE_DECLS \
	UntitledCoopShooter_Source_UntitledCoopShooter_Public_HitscanFirearm_h_49_CALLBACK_WRAPPERS \
	UntitledCoopShooter_Source_UntitledCoopShooter_Public_HitscanFirearm_h_49_INCLASS_NO_PURE_DECLS \
	UntitledCoopShooter_Source_UntitledCoopShooter_Public_HitscanFirearm_h_49_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> UNTITLEDCOOPSHOOTER_API UClass* StaticClass<class AHitscanFirearm>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID UntitledCoopShooter_Source_UntitledCoopShooter_Public_HitscanFirearm_h


#define FOREACH_ENUM_EFIREMODE(op) \
	op(EFireMode::FullAuto) \
	op(EFireMode::SemiAuto) \
	op(EFireMode::Burst) 

enum class EFireMode : uint8;
template<> UNTITLEDCOOPSHOOTER_API UEnum* StaticEnum<EFireMode>();

#define FOREACH_ENUM_EWEAPONCLASS(op) \
	op(EWeaponClass::Primary) \
	op(EWeaponClass::Sidearm) \
	op(EWeaponClass::Special) 

enum class EWeaponClass : uint8;
template<> UNTITLEDCOOPSHOOTER_API UEnum* StaticEnum<EWeaponClass>();

PRAGMA_ENABLE_DEPRECATION_WARNINGS
