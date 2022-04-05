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
class UVitalsComponent;
UCLASS()
class UNTITLEDCOOPSHOOTER_API ACoopCharacter : public ACharacter
{
	GENERATED_BODY()

		/** Pawn mesh: 1st person view (arms; seen only by self) */
	UPROPERTY(VisibleDefaultsOnly, Category = Mesh)
		USkeletalMeshComponent* Mesh1P;

	/** First person camera */
	UPROPERTY(VisibleAnywhere, BlueprintReadOnly, Category = Camera, meta = (AllowPrivateAccess = "true"))
		UCameraComponent* FirstPersonCameraComponent;

	UPROPERTY(EditDefaultsOnly, Category = "Components")
		UVitalsComponent* VitalsComponent;

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

	UFUNCTION(BlueprintPure)
		UStaticMeshComponent* GetCurrentOptic() const { return CurrentOptic; }

protected:
	//Transforms for animation instance
	UPROPERTY()
		FTransform SightTransform;

		/*UFUNCTION()
		void OnRep_SightTransform(FTransform NewTransform);*/
	UPROPERTY()
		FTransform RelativeHandTransform;
	UPROPERTY()
		FTransform LeftHandTransform;
	/*UFUNCTION()
		void OnRep_LeftHandTransform(FTransform NewTransform);*/
	//variable for tracking the currently equipped weapon - pointer to actual actor
	UPROPERTY(BlueprintReadOnly, Category = "Loadout", Replicated)
		AHitscanFirearm* CurrentWeapon;
	///** Third Person Gun mesh that is seen by other players */
	UPROPERTY(VisibleDefaultsOnly, Category = Mesh, Replicated)
		AHitscanFirearm* TP_Gun;
		//Variable used to track which of the subclasses is active
		UPROPERTY(ReplicatedUsing = OnRep_EquippedWeapon)
		TSubclassOf<AHitscanFirearm> EquippedWeapon;
	UFUNCTION(Client, Reliable, WithValidation)
		void OnRep_EquippedWeapon();
	//the equipped primary weapon type
	UPROPERTY(EditDefaultsOnly, Category = "Loadout")
		TSubclassOf<AHitscanFirearm> PrimaryWeapon;
	UPROPERTY(EditDefaultsOnly, Category = "Loadout")
		TSubclassOf<AHitscanFirearm> SecondaryWeapon;
	//the amount of ammo the player has for the currently equipped weapon
	UPROPERTY(BlueprintReadOnly, Category = "Loadout")
		int32 CurrentAmmo;
	//the amount of ammo the player has for primary weapons
	UPROPERTY(EditDefaultsOnly, BlueprintReadOnly, Category = "Loadout")
		int32 PrimaryAmmo;
	//the amount of ammo the player has for their sidearm
	UPROPERTY(EditDefaultsOnly, BlueprintReadOnly, Category = "Loadout")
		int32 SidearmAmmo;
	//the amount of ammo the player has for special weapons
	UPROPERTY(EditDefaultsOnly, BlueprintReadOnly, Category = "Loadout")
		int32 SpecialAmmo;

	UFUNCTION()
	void SwitchWeapon(TSubclassOf<AHitscanFirearm> NewWeapon);
	
	UFUNCTION(Server, Reliable, WithValidation)
	void Server_SwitchWeapon(TSubclassOf<AHitscanFirearm> NewWeapon);
	UFUNCTION()
	void SwitchFireMode();

	UFUNCTION()
	void SwitchToPrimary();

	UFUNCTION()
	void SwitchToSecondary();

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

	UFUNCTION(Server, Reliable, WithValidation)
		void ServerOnStopFire();

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
	UFUNCTION(BlueprintPure)
		AHitscanFirearm* GetCurrentWeapon() const { return CurrentWeapon; }
	UFUNCTION()
		void DeductAmmo();
	UFUNCTION(BlueprintPure)
		FTransform GetSightTransform() const {return SightTransform;}
	UFUNCTION(BlueprintCallable)
		void SetSightTransform(FTransform NewTransform) { SightTransform = NewTransform; }
	UFUNCTION(BlueprintPure)
		FTransform GetRelativeHandTransform() const {return RelativeHandTransform;}
	UFUNCTION(BlueprintCallable)
		void SetRelativeHandTransform(FTransform NewTransform) {RelativeHandTransform = NewTransform; }
	UFUNCTION(BlueprintPure)
		FTransform GetLeftHandTransform() const { return LeftHandTransform; }
	UFUNCTION(BlueprintCallable)
		void SetLeftHandTransform(FTransform NewTransform) { LeftHandTransform = NewTransform; }
};
