// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef UNTITLEDCOOPSHOOTER_IKAnimInstance_generated_h
#error "IKAnimInstance.generated.h already included, missing '#pragma once' in IKAnimInstance.h"
#endif
#define UNTITLEDCOOPSHOOTER_IKAnimInstance_generated_h

#define UntitledCoopShooter_Source_UntitledCoopShooter_Public_IKAnimInstance_h_15_SPARSE_DATA
#define UntitledCoopShooter_Source_UntitledCoopShooter_Public_IKAnimInstance_h_15_RPC_WRAPPERS \
 \
	DECLARE_FUNCTION(execUpdateAnimInstanceCurrentWeapon); \
	DECLARE_FUNCTION(execFire); \
	DECLARE_FUNCTION(execStopReload);


#define UntitledCoopShooter_Source_UntitledCoopShooter_Public_IKAnimInstance_h_15_RPC_WRAPPERS_NO_PURE_DECLS \
 \
	DECLARE_FUNCTION(execUpdateAnimInstanceCurrentWeapon); \
	DECLARE_FUNCTION(execFire); \
	DECLARE_FUNCTION(execStopReload);


#define UntitledCoopShooter_Source_UntitledCoopShooter_Public_IKAnimInstance_h_15_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUIKAnimInstance(); \
	friend struct Z_Construct_UClass_UIKAnimInstance_Statics; \
public: \
	DECLARE_CLASS(UIKAnimInstance, UAnimInstance, COMPILED_IN_FLAGS(0 | CLASS_Transient), CASTCLASS_None, TEXT("/Script/UntitledCoopShooter"), NO_API) \
	DECLARE_SERIALIZER(UIKAnimInstance)


#define UntitledCoopShooter_Source_UntitledCoopShooter_Public_IKAnimInstance_h_15_INCLASS \
private: \
	static void StaticRegisterNativesUIKAnimInstance(); \
	friend struct Z_Construct_UClass_UIKAnimInstance_Statics; \
public: \
	DECLARE_CLASS(UIKAnimInstance, UAnimInstance, COMPILED_IN_FLAGS(0 | CLASS_Transient), CASTCLASS_None, TEXT("/Script/UntitledCoopShooter"), NO_API) \
	DECLARE_SERIALIZER(UIKAnimInstance)


#define UntitledCoopShooter_Source_UntitledCoopShooter_Public_IKAnimInstance_h_15_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UIKAnimInstance(const FObjectInitializer& ObjectInitializer); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UIKAnimInstance) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UIKAnimInstance); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UIKAnimInstance); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UIKAnimInstance(UIKAnimInstance&&); \
	NO_API UIKAnimInstance(const UIKAnimInstance&); \
public:


#define UntitledCoopShooter_Source_UntitledCoopShooter_Public_IKAnimInstance_h_15_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UIKAnimInstance(UIKAnimInstance&&); \
	NO_API UIKAnimInstance(const UIKAnimInstance&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UIKAnimInstance); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UIKAnimInstance); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(UIKAnimInstance)


#define UntitledCoopShooter_Source_UntitledCoopShooter_Public_IKAnimInstance_h_15_PRIVATE_PROPERTY_OFFSET \
	FORCEINLINE static uint32 __PPO__Character() { return STRUCT_OFFSET(UIKAnimInstance, Character); } \
	FORCEINLINE static uint32 __PPO__CurrentWeapon() { return STRUCT_OFFSET(UIKAnimInstance, CurrentWeapon); } \
	FORCEINLINE static uint32 __PPO__RelativeHandTransform() { return STRUCT_OFFSET(UIKAnimInstance, RelativeHandTransform); } \
	FORCEINLINE static uint32 __PPO__SightTransform() { return STRUCT_OFFSET(UIKAnimInstance, SightTransform); } \
	FORCEINLINE static uint32 __PPO__LeftHandTransform() { return STRUCT_OFFSET(UIKAnimInstance, LeftHandTransform); } \
	FORCEINLINE static uint32 __PPO__SwayLocation() { return STRUCT_OFFSET(UIKAnimInstance, SwayLocation); } \
	FORCEINLINE static uint32 __PPO__AimAlpha() { return STRUCT_OFFSET(UIKAnimInstance, AimAlpha); } \
	FORCEINLINE static uint32 __PPO__ReloadAlpha() { return STRUCT_OFFSET(UIKAnimInstance, ReloadAlpha); } \
	FORCEINLINE static uint32 __PPO__WalkingSwayCurve() { return STRUCT_OFFSET(UIKAnimInstance, WalkingSwayCurve); } \
	FORCEINLINE static uint32 __PPO__RecoilRotationXMin() { return STRUCT_OFFSET(UIKAnimInstance, RecoilRotationXMin); } \
	FORCEINLINE static uint32 __PPO__RecoilRotationXMax() { return STRUCT_OFFSET(UIKAnimInstance, RecoilRotationXMax); } \
	FORCEINLINE static uint32 __PPO__RecoilRotationYMin() { return STRUCT_OFFSET(UIKAnimInstance, RecoilRotationYMin); } \
	FORCEINLINE static uint32 __PPO__RecoilRotationYMax() { return STRUCT_OFFSET(UIKAnimInstance, RecoilRotationYMax); } \
	FORCEINLINE static uint32 __PPO__RecoilRotationZMin() { return STRUCT_OFFSET(UIKAnimInstance, RecoilRotationZMin); } \
	FORCEINLINE static uint32 __PPO__RecoilRotationZMax() { return STRUCT_OFFSET(UIKAnimInstance, RecoilRotationZMax); } \
	FORCEINLINE static uint32 __PPO__RecoilLocationXMin() { return STRUCT_OFFSET(UIKAnimInstance, RecoilLocationXMin); } \
	FORCEINLINE static uint32 __PPO__RecoilLocationXMax() { return STRUCT_OFFSET(UIKAnimInstance, RecoilLocationXMax); } \
	FORCEINLINE static uint32 __PPO__RecoilLocationYMin() { return STRUCT_OFFSET(UIKAnimInstance, RecoilLocationYMin); } \
	FORCEINLINE static uint32 __PPO__RecoilLocationYMax() { return STRUCT_OFFSET(UIKAnimInstance, RecoilLocationYMax); } \
	FORCEINLINE static uint32 __PPO__RecoilLocationZMin() { return STRUCT_OFFSET(UIKAnimInstance, RecoilLocationZMin); } \
	FORCEINLINE static uint32 __PPO__RecoilLocationZMax() { return STRUCT_OFFSET(UIKAnimInstance, RecoilLocationZMax); } \
	FORCEINLINE static uint32 __PPO__TurnRot() { return STRUCT_OFFSET(UIKAnimInstance, TurnRot); } \
	FORCEINLINE static uint32 __PPO__TurnLocation() { return STRUCT_OFFSET(UIKAnimInstance, TurnLocation); } \
	FORCEINLINE static uint32 __PPO__TurningSwayTransform() { return STRUCT_OFFSET(UIKAnimInstance, TurningSwayTransform); } \
	FORCEINLINE static uint32 __PPO__RecoilTransform() { return STRUCT_OFFSET(UIKAnimInstance, RecoilTransform); } \
	FORCEINLINE static uint32 __PPO__OldRot() { return STRUCT_OFFSET(UIKAnimInstance, OldRot); }


#define UntitledCoopShooter_Source_UntitledCoopShooter_Public_IKAnimInstance_h_12_PROLOG
#define UntitledCoopShooter_Source_UntitledCoopShooter_Public_IKAnimInstance_h_15_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	UntitledCoopShooter_Source_UntitledCoopShooter_Public_IKAnimInstance_h_15_PRIVATE_PROPERTY_OFFSET \
	UntitledCoopShooter_Source_UntitledCoopShooter_Public_IKAnimInstance_h_15_SPARSE_DATA \
	UntitledCoopShooter_Source_UntitledCoopShooter_Public_IKAnimInstance_h_15_RPC_WRAPPERS \
	UntitledCoopShooter_Source_UntitledCoopShooter_Public_IKAnimInstance_h_15_INCLASS \
	UntitledCoopShooter_Source_UntitledCoopShooter_Public_IKAnimInstance_h_15_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define UntitledCoopShooter_Source_UntitledCoopShooter_Public_IKAnimInstance_h_15_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	UntitledCoopShooter_Source_UntitledCoopShooter_Public_IKAnimInstance_h_15_PRIVATE_PROPERTY_OFFSET \
	UntitledCoopShooter_Source_UntitledCoopShooter_Public_IKAnimInstance_h_15_SPARSE_DATA \
	UntitledCoopShooter_Source_UntitledCoopShooter_Public_IKAnimInstance_h_15_RPC_WRAPPERS_NO_PURE_DECLS \
	UntitledCoopShooter_Source_UntitledCoopShooter_Public_IKAnimInstance_h_15_INCLASS_NO_PURE_DECLS \
	UntitledCoopShooter_Source_UntitledCoopShooter_Public_IKAnimInstance_h_15_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> UNTITLEDCOOPSHOOTER_API UClass* StaticClass<class UIKAnimInstance>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID UntitledCoopShooter_Source_UntitledCoopShooter_Public_IKAnimInstance_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
