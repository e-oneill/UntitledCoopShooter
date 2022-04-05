// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/Character.h"
#include "AICharacterBase.generated.h"

class UVitalsComponent;
class UPawnSensingComponent;
class AHitscanFirearm;

UENUM(BlueprintType)
enum class EBotStatus : uint8
{
	OnAlert,
	Idle,
	Patrolling,
	Suspicious,
	Investigating,
	InCombat
};

UCLASS()
class UNTITLEDCOOPSHOOTER_API AAICharacterBase : public ACharacter
{
	GENERATED_BODY()

public:
	// Sets default values for this character's properties
	AAICharacterBase();

	UPROPERTY(EditDefaultsOnly, Category = "Components")
		UVitalsComponent* VitalsComponent;

	UPROPERTY(EditDefaultsOnly, Category = "Components")
		UPawnSensingComponent* SensingComponent;
	UPROPERTY(Replicated)
		AHitscanFirearm* CurrentWeapon;
	UPROPERTY(Replicated)
		TSubclassOf<AHitscanFirearm> EquippedWeapon;
	UPROPERTY(EditAnywhere, Category = "Components")
		TSubclassOf<AHitscanFirearm> StartingWeapon;
protected:
	// Called when the game starts or when spawned
	virtual void BeginPlay() override;

	UPROPERTY(ReplicatedUsing=OnRep_Client_BotStatus)
		EBotStatus BotStatus;

	UFUNCTION()
		virtual void OnRep_Client_BotStatus(EBotStatus OldStatus);

	UFUNCTION()
		void SwitchWeapon(TSubclassOf<AHitscanFirearm> NewWeapon);

	bool bDead;

public:	
	// Called every frame
	virtual void Tick(float DeltaTime) override;

	// Called to bind functionality to input
	virtual void SetupPlayerInputComponent(class UInputComponent* PlayerInputComponent) override;

	UFUNCTION()
		void OnHealthChanged(UVitalsComponent* OwningHealthComp, float Health, float HealthDelta, const class UDamageType* DamageTypeTaken, class AController* InstigatedBy, AActor* DamageCauser);

	UFUNCTION(BlueprintPure)
		bool GetDead() const {return bDead;}

};
