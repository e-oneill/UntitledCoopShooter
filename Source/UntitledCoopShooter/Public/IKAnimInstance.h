// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "Animation/AnimInstance.h"
#include "IKAnimInstance.generated.h"

/**
 *
 */
UCLASS()
class UNTITLEDCOOPSHOOTER_API UIKAnimInstance : public UAnimInstance
{
	GENERATED_BODY()
public:
	UIKAnimInstance();
protected:

	virtual void NativeBeginPlay() override;

	virtual void NativeUpdateAnimation(float DeltaSeconds) override;
	UPROPERTY(BlueprintReadOnly, Category = "Procedural Aiming")
		class ACoopCharacter* Character;
	UPROPERTY(BlueprintReadOnly, Category = "Procedural Aiming")
		class AHitscanFirearm* CurrentWeapon;

	UPROPERTY(BlueprintReadOnly, Category = "Procedural Aiming")
		FTransform RelativeHandTransform;
	UPROPERTY(BlueprintReadOnly, Category = "Procedural Aiming")
		FTransform SightTransform;
	UPROPERTY(BlueprintReadOnly, Category = "Procedural Aiming")
		FTransform LeftHandTransform;
	UPROPERTY(BlueprintReadOnly, Category = "Procedural Aiming")
		FVector SwayLocation;
	UPROPERTY(BlueprintReadOnly, Category = "Procedural Aiming")
		float AimAlpha;
	UPROPERTY(BlueprintReadOnly, Category = "Procedural Aiming")
		float ReloadAlpha;
	UPROPERTY(EditAnywhere, BlueprintReadOnly, Category = "Procedural Aiming")
		class UCurveVector* WalkingSwayCurve;
	/* X: Movement of barrel upwards - should be positive */
	UPROPERTY(EditDefaultsOnly, Category = "Recoil Variables")
		float RecoilRotationXMin;

	UPROPERTY(EditDefaultsOnly, Category = "Recoil Variables")
		float RecoilRotationXMax;
	/* Y: Movement of barrel left to right*/
	UPROPERTY(EditDefaultsOnly, Category = "Recoil Variables")
		float RecoilRotationYMin;

	UPROPERTY(EditDefaultsOnly, Category = "Recoil Variables")
		float RecoilRotationYMax;
	/* Z: Roll of weapon - best to keep subtle*/
	UPROPERTY(EditDefaultsOnly, Category = "Recoil Variables")
		float RecoilRotationZMin;

	UPROPERTY(EditDefaultsOnly, Category = "Recoil Variables")
		float RecoilRotationZMax;
	/* Negative numbers will cause weapon to kick back into player */
	UPROPERTY(EditDefaultsOnly, Category = "Recoil Variables")
		float RecoilLocationXMin;

	UPROPERTY(EditDefaultsOnly, Category = "Recoil Variables")
		float RecoilLocationXMax;
	/* Should be a range from negative to positive, causing weapon to kick left and right */
	UPROPERTY(EditDefaultsOnly, Category = "Recoil Variables")
		float RecoilLocationYMin;

	UPROPERTY(EditDefaultsOnly, Category = "Recoil Variables")
		float RecoilLocationYMax;
	/* Kick of weapon up and down in your hands - best to be subtle */
	UPROPERTY(EditDefaultsOnly, Category = "Recoil Variables")
		float RecoilLocationZMin;

	UPROPERTY(EditDefaultsOnly, Category = "Recoil Variables")
		float RecoilLocationZMax;

	FTransform FinalHandTransform;
	UPROPERTY(BlueprintReadOnly, Category = "Procedural Aiming")
		FRotator TurnRot;

	UPROPERTY(BlueprintReadOnly, Category = "Procedural Aiming")
		FVector TurnLocation;
	UPROPERTY(BlueprintReadOnly, Category = "Procedural Aiming")
		FTransform TurningSwayTransform;

	UPROPERTY(BlueprintReadOnly, Category = "Procedural Aiming")
		FTransform RecoilTransform;
	FTransform FinalRecoilTransform;

	UPROPERTY(BlueprintReadOnly, Category = "Procedural Aiming")
		FRotator OldRot;

	FRotator UnmodifiedRot;

	bool bIsAiming;
	bool bInterpAlpha;

	bool bInterpHandTransform;

	void InterpAiming(float DeltaSeconds);

	

	bool bIsFiring;


	void InterpHandTransform(float DeltaSeconds);

	void FirstStartUp(); // function that is called in begin play, as the firearm object is spawn by the player actor on beginplay, we wait 0.2 seconds before we call this.
	void SetSightTransform();
	void SetRelativeHandTransform();
	void SetFinalHandTransform();
	void SetLeftHandIK();
	void WeaponMovementSway(float DeltaSeconds);
	void WeaponTurnSway(float DeltaSeconds);
	void InterpFinalRecoil(float DeltaSeconds);
	void InterpRecoil(float DeltaSeconds);
	//Function to call to have animation react to player firing

public:

	void SetAiming(bool IsAiming);

	void CycleToOptic();

	void Reload();

	UFUNCTION(BlueprintCallable, Category = "Procedural Aiming")
		void StopReload();
	UFUNCTION(BlueprintCallable, Category = "Procedural Aiming")
		void Fire();
	UFUNCTION(BlueprintCallable, Category = "Procedural Aiming")
		void UpdateAnimInstanceCurrentWeapon();
};
