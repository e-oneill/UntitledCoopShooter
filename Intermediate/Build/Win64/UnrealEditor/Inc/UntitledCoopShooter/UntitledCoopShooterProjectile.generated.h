// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
class UPrimitiveComponent;
class AActor;
struct FVector;
struct FHitResult;
#ifdef UNTITLEDCOOPSHOOTER_UntitledCoopShooterProjectile_generated_h
#error "UntitledCoopShooterProjectile.generated.h already included, missing '#pragma once' in UntitledCoopShooterProjectile.h"
#endif
#define UNTITLEDCOOPSHOOTER_UntitledCoopShooterProjectile_generated_h

#define UntitledCoopShooter_Source_UntitledCoopShooter_UntitledCoopShooterProjectile_h_15_SPARSE_DATA
#define UntitledCoopShooter_Source_UntitledCoopShooter_UntitledCoopShooterProjectile_h_15_RPC_WRAPPERS \
 \
	DECLARE_FUNCTION(execOnHit);


#define UntitledCoopShooter_Source_UntitledCoopShooter_UntitledCoopShooterProjectile_h_15_RPC_WRAPPERS_NO_PURE_DECLS \
 \
	DECLARE_FUNCTION(execOnHit);


#define UntitledCoopShooter_Source_UntitledCoopShooter_UntitledCoopShooterProjectile_h_15_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesAUntitledCoopShooterProjectile(); \
	friend struct Z_Construct_UClass_AUntitledCoopShooterProjectile_Statics; \
public: \
	DECLARE_CLASS(AUntitledCoopShooterProjectile, AActor, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/UntitledCoopShooter"), NO_API) \
	DECLARE_SERIALIZER(AUntitledCoopShooterProjectile) \
	static const TCHAR* StaticConfigName() {return TEXT("Game");} \



#define UntitledCoopShooter_Source_UntitledCoopShooter_UntitledCoopShooterProjectile_h_15_INCLASS \
private: \
	static void StaticRegisterNativesAUntitledCoopShooterProjectile(); \
	friend struct Z_Construct_UClass_AUntitledCoopShooterProjectile_Statics; \
public: \
	DECLARE_CLASS(AUntitledCoopShooterProjectile, AActor, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/UntitledCoopShooter"), NO_API) \
	DECLARE_SERIALIZER(AUntitledCoopShooterProjectile) \
	static const TCHAR* StaticConfigName() {return TEXT("Game");} \



#define UntitledCoopShooter_Source_UntitledCoopShooter_UntitledCoopShooterProjectile_h_15_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API AUntitledCoopShooterProjectile(const FObjectInitializer& ObjectInitializer); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(AUntitledCoopShooterProjectile) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, AUntitledCoopShooterProjectile); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(AUntitledCoopShooterProjectile); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API AUntitledCoopShooterProjectile(AUntitledCoopShooterProjectile&&); \
	NO_API AUntitledCoopShooterProjectile(const AUntitledCoopShooterProjectile&); \
public:


#define UntitledCoopShooter_Source_UntitledCoopShooter_UntitledCoopShooterProjectile_h_15_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API AUntitledCoopShooterProjectile(AUntitledCoopShooterProjectile&&); \
	NO_API AUntitledCoopShooterProjectile(const AUntitledCoopShooterProjectile&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, AUntitledCoopShooterProjectile); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(AUntitledCoopShooterProjectile); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(AUntitledCoopShooterProjectile)


#define UntitledCoopShooter_Source_UntitledCoopShooter_UntitledCoopShooterProjectile_h_15_PRIVATE_PROPERTY_OFFSET \
	FORCEINLINE static uint32 __PPO__CollisionComp() { return STRUCT_OFFSET(AUntitledCoopShooterProjectile, CollisionComp); } \
	FORCEINLINE static uint32 __PPO__ProjectileMovement() { return STRUCT_OFFSET(AUntitledCoopShooterProjectile, ProjectileMovement); }


#define UntitledCoopShooter_Source_UntitledCoopShooter_UntitledCoopShooterProjectile_h_12_PROLOG
#define UntitledCoopShooter_Source_UntitledCoopShooter_UntitledCoopShooterProjectile_h_15_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	UntitledCoopShooter_Source_UntitledCoopShooter_UntitledCoopShooterProjectile_h_15_PRIVATE_PROPERTY_OFFSET \
	UntitledCoopShooter_Source_UntitledCoopShooter_UntitledCoopShooterProjectile_h_15_SPARSE_DATA \
	UntitledCoopShooter_Source_UntitledCoopShooter_UntitledCoopShooterProjectile_h_15_RPC_WRAPPERS \
	UntitledCoopShooter_Source_UntitledCoopShooter_UntitledCoopShooterProjectile_h_15_INCLASS \
	UntitledCoopShooter_Source_UntitledCoopShooter_UntitledCoopShooterProjectile_h_15_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define UntitledCoopShooter_Source_UntitledCoopShooter_UntitledCoopShooterProjectile_h_15_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	UntitledCoopShooter_Source_UntitledCoopShooter_UntitledCoopShooterProjectile_h_15_PRIVATE_PROPERTY_OFFSET \
	UntitledCoopShooter_Source_UntitledCoopShooter_UntitledCoopShooterProjectile_h_15_SPARSE_DATA \
	UntitledCoopShooter_Source_UntitledCoopShooter_UntitledCoopShooterProjectile_h_15_RPC_WRAPPERS_NO_PURE_DECLS \
	UntitledCoopShooter_Source_UntitledCoopShooter_UntitledCoopShooterProjectile_h_15_INCLASS_NO_PURE_DECLS \
	UntitledCoopShooter_Source_UntitledCoopShooter_UntitledCoopShooterProjectile_h_15_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> UNTITLEDCOOPSHOOTER_API UClass* StaticClass<class AUntitledCoopShooterProjectile>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID UntitledCoopShooter_Source_UntitledCoopShooter_UntitledCoopShooterProjectile_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
