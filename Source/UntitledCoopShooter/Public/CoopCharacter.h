// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/Character.h"
#include "CoopCharacter.generated.h"

class UInputComponent;
class USkeletalMeshComponent;
class USceneComponent;
class UCameraComponent;
class UMotionControllerComponent;
class UAnimMontage;
class USoundBase;
class AHitscanFirearm;

UCLASS()
class UNTITLEDCOOPSHOOTER_API ACoopCharacter : public ACharacter
{
	GENERATED_BODY()

		/** Pawn mesh: 1st person view (arms; seen only by self) */
	UPROPERTY(VisibleDefaultsOnly, Category = Mesh)
		USkeletalMeshComponent* Mesh1P;

	///** Gun mesh: 1st person view (seen only by self) */
	//UPROPERTY(VisibleDefaultsOnly, Category = Mesh)
	//	USkeletalMeshComponent* FP_Gun;

	/** First person camera */
	UPROPERTY(VisibleAnywhere, BlueprintReadOnly, Category = Camera, meta = (AllowPrivateAccess = "true"))
		UCameraComponent* FirstPersonCameraComponent;

public:
	// Sets default values for this character's properties
	ACoopCharacter();

protected:
	virtual void BeginPlay();

public:
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = Optics)
		TArray<UStaticMeshComponent*> Optics;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = Optics)
		UStaticMeshComponent* CurrentOptic;
	/** Base turn rate, in deg/sec. Other scaling may affect final turn rate. */
	UPROPERTY(VisibleAnywhere, BlueprintReadOnly, Category = Camera)
		float BaseTurnRate;

	/** Base look up/down rate, in deg/sec. Other scaling may affect final rate. */
	UPROPERTY(VisibleAnywhere, BlueprintReadOnly, Category = Camera)
		float BaseLookUpRate;

	/** Sound to play each time we fire */
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = Gameplay)
		USoundBase* FireSound;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = Gameplay)
		UAnimMontage* ReloadAnimation;

	UFUNCTION(BlueprintPure)
		UStaticMeshComponent* GetCurrentOptic() const { return CurrentOptic; }

protected:
	UPROPERTY(BlueprintReadOnly, Category = "Loadout")
		AHitscanFirearm* CurrentWeapon;
	UPROPERTY(EditDefaultsOnly, Category = "Loadout")
		TSubclassOf<AHitscanFirearm> PrimaryWeapon;


	/** Handles moving forward/backward */
	void MoveForward(float Val);

	/** Handles stafing movement, left and right */
	void MoveRight(float Val);

	/**
	 * Called via input to turn at a given rate.
	 * @param Rate	This is a normalized rate, i.e. 1.0 means 100% of desired turn rate
	 */
	void TurnAtRate(float Rate);

	/**
	 * Called via input to turn look up/down at a given rate.
	 * @param Rate	This is a normalized rate, i.e. 1.0 means 100% of desired turn rate
	 */
	void LookUpAtRate(float Rate);

	UPROPERTY(ReplicatedUsing = OnRep_OpticIndex)
		uint8 OpticIndex;

	UFUNCTION()
		void OnRep_OpticIndex();

	UFUNCTION(Server, Reliable, WithValidation)
		void Server_OpticIndex(uint8 NewIndex);
	/** Fires a projectile. */
	void OnFire();

	void StopFire();

	UFUNCTION(Server, Reliable, WithValidation)
		void ServerOnFire();

	void GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const override;

	class UIKAnimInstance* ProceduralAimingAnimInstance;

	UFUNCTION(BlueprintCallable, Category = "Procedural Aiming")
		void SetAiming(bool IsAiming);

	UPROPERTY(BlueprintReadWrite, Category = "Procedural Aiming", ReplicatedUsing = OnRep_bIsAiming)
		bool bIsAiming;

	UFUNCTION()
		void OnRep_bIsAiming();

	UFUNCTION(Server, Reliable, WithValidation)
		void Server_SetAiming(bool IsAiming);

	UFUNCTION(BlueprintCallable, Category = "Procedural Aiming")
		void CycleOptic();

	UFUNCTION(BlueprintCallable, Category = "Procedural Aiming")
		void Reload();

protected:
	// APawn interface
	virtual void SetupPlayerInputComponent(UInputComponent* InputComponent) override;
	// End of APawn interface

public:
	/** Returns Mesh1P subobject **/
	UFUNCTION(BlueprintPure)
	USkeletalMeshComponent* GetMesh1P() const { return Mesh1P; }
	/** Returns FirstPersonCameraComponent subobject **/
	UFUNCTION(BlueprintPure)
	UCameraComponent* GetFirstPersonCameraComponent() const { return FirstPersonCameraComponent; }
	/*UFUNCTION(BlueprintPure)
		USkeletalMeshComponent* GetFP_Gun() const { return FP_Gun; }*/
	UFUNCTION(BlueprintPure)
		AHitscanFirearm* GetCurrentWeapon() const { return CurrentWeapon; }

};
