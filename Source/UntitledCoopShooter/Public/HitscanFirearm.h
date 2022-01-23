// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/Actor.h"
#include "HitscanFirearm.generated.h"

class USkeletalMeshComponent;
class UAnimMontage;
class USoundBase;
class ACoopCharacter;

//A custom struct that contains information of a single Hit Scan Weapon Line trace
USTRUCT()
struct FHitScanTrace
{
	GENERATED_BODY()

public:
	UPROPERTY()
		int8 ForceReplication;
	UPROPERTY()
		TEnumAsByte<EPhysicalSurface> SurfaceType;
	UPROPERTY()
		FVector_NetQuantize TraceTo;
};

UENUM(BlueprintType)
enum class EWeaponClass : uint8
{
	Primary,
	Sidearm,
	Special,
};

UENUM(BlueprintType)
enum class EFireMode : uint8
{
	FullAuto,
	SemiAuto,
	Burst,
};

UCLASS()
class UNTITLEDCOOPSHOOTER_API AHitscanFirearm : public AActor
{
	GENERATED_BODY()

		/** Gun mesh: 1st person view (seen only by self) */
		UPROPERTY(EditDefaultsOnly, Category = Mesh)
		USkeletalMeshComponent* MeshComponent;

public:
	// Sets default values for this actor's properties
	AHitscanFirearm();

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = Optics)
		TArray<UStaticMeshComponent*> Optics;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = Optics)
		UStaticMeshComponent* CurrentOptic;

	/** Sound to play each time we fire */
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = Gameplay)
		USoundBase* FireSound;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = Gameplay)
		UAnimMontage* ReloadAnimation;
	
	ACoopCharacter* Character;
	

	UFUNCTION(BlueprintPure)
		UStaticMeshComponent* GetCurrentOptic() const { return CurrentOptic; }

protected:
	// Called when the game starts or when spawned
	virtual void BeginPlay() override;
	//Is this a primary, secondary or special weapon?
	UPROPERTY(EditDefaultsOnly, BlueprintReadOnly, Category = "Weapon Stats")
		EWeaponClass WeaponClass;
	//Base damage of each weapon trace
	UPROPERTY(EditDefaultsOnly, BlueprintReadOnly, Category = "Weapon Stats", meta = (ClampMin = 0.0f, ClampMax = 80.0f))
		float WeaponDamage;
	//Weight of the weapon in pounds
	UPROPERTY(EditDefaultsOnly, BlueprintReadOnly, Category = "Weapon Stats")
		float WeaponWeight;
	//How far should the line trace go
	UPROPERTY(EditDefaultsOnly, BlueprintReadOnly, Category = "Weapon Stats")
		float WeaponEffectiveRange;
	UPROPERTY(EditDefaultsOnly, BlueprintReadOnly, Category = "Weapon Stats")
		TSubclassOf<UDamageType> DamageType;
	//Inverse percentage value to simulate quality of weapon ergonomics - affects turning speed in combination with weight
	UPROPERTY(EditDefaultsOnly, BlueprintReadOnly, Category = "Weapon Handling", meta = (ClampMin = 0.25f, ClampMax = 1.0f))
		float WeaponErgonomics;
	//Amount of lateral recoil on weapon fire
	UPROPERTY(EditDefaultsOnly, BlueprintReadOnly, Category = "Weapon Handling", meta = (ClampMin = 0.0f, ClampMax = 10.0f))
		float WeaponLateralRecoil;
	//Amount of vertical recoil on weapon fire
	UPROPERTY(EditDefaultsOnly, BlueprintReadOnly, Category = "Weapon Handling", meta = (ClampMin = 0.0f, ClampMax = 80.0f))
		float WeaponVerticalRecoil;
	//Can the weapon fire full auto?
	UPROPERTY(EditDefaultsOnly, BlueprintReadOnly, Category = "Fire Modes")
		bool bCanFullAuto;
	//Can the weapon fire semi auto?
	UPROPERTY(EditDefaultsOnly, BlueprintReadOnly, Category = "Fire Modes")
		bool bCanSemiAuto;
	//Can the weapon fire burst?
	UPROPERTY(EditDefaultsOnly, BlueprintReadOnly, Category = "Fire Modes")
		bool bCanBurstFire;
	UPROPERTY(BlueprintReadOnly, Category = "Fire Modes")
		EFireMode CurrentFireMode;
	FTimerHandle T_TimeBetweenShotsTimer;
	FTimerHandle T_BurstShotsTimer;
	//How many shots fired per burst
	UPROPERTY(EditDefaultsOnly, BlueprintReadOnly, Category = "Fire Modes", meta = (EditCondition = bCanBurstFire))
		int32 ShotsPerBurst;
	//Tracker for burst fire shots
		int8 ShotsThisBurst;
	//How many rounds per minute does the gun fire?
	UPROPERTY(EditDefaultsOnly, BlueprintReadOnly, Category = "Fire Modes")
		int32 RateOfFire;
		float SecondsBetweenShots;
		float LastFireTime;
	
	UPROPERTY(ReplicatedUsing = OnRep_HitScanTrace)
		FHitScanTrace HitScanTrace;

	UFUNCTION()
		void OnRep_HitScanTrace();
	
	void PlayFireEffects(FVector TraceEnd);

	void PlayImpactEffects(EPhysicalSurface SurfaceType, FVector ImpactPoint);
	
public:
	// Called every frame
	virtual void Tick(float DeltaTime) override;

	void StartFire();

	void StopFire();

	void Fire();

	void BurstFire();

	//Getters
	UFUNCTION(BlueprintPure)
		USkeletalMeshComponent* GetMeshComponent() const { return MeshComponent; }
	UFUNCTION(BlueprintPure)
		float GetWeaponWeight() const {return WeaponWeight;}
	UFUNCTION(BlueprintPure)
		float GetWeaponErgonomics() const { return WeaponErgonomics; }
	UFUNCTION(BlueprintPure)
		float GetWeaponLateralRecoil() const {return WeaponLateralRecoil;}
	UFUNCTION(BlueprintPure)
		float GetWeaponVerticalRecoil() const {return WeaponVerticalRecoil;}
	UFUNCTION(BlueprintPure)
		EWeaponClass GetWeaponClass() const {return WeaponClass;}
	UFUNCTION()
		void SwitchFireMode();
};
