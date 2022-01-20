// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/Actor.h"
#include "HitscanFirearm.generated.h"

class USkeletalMeshComponent;
class UAnimMontage;
class USoundBase;
class ACoopCharacter;

UCLASS()
class UNTITLEDCOOPSHOOTER_API AHitscanFirearm : public AActor
{
	GENERATED_BODY()

		/** Gun mesh: 1st person view (seen only by self) */
		UPROPERTY(VisibleDefaultsOnly, Category = Mesh)
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

	
public:
	// Called every frame
	virtual void Tick(float DeltaTime) override;

	void StartFire();

	void StopFire();

	void Fire();

	UFUNCTION(BlueprintPure)
		USkeletalMeshComponent* GetMeshComponent() const { return MeshComponent; }

};
