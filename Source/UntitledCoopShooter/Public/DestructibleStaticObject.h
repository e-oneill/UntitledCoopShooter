// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/Actor.h"
#include "DestructibleStaticObject.generated.h"

class UStaticMeshComponent;
class UStaticMesh;
class UVitalsComponent;
class UParticleSystem;
class URadialForceComponent;
class UDamageType;
class USoundBase;

UCLASS()
class UNTITLEDCOOPSHOOTER_API ADestructibleStaticObject : public AActor
{
	GENERATED_BODY()

public:
	// Sets default values for this actor's properties
	ADestructibleStaticObject();

protected:
	UPROPERTY(VisibleAnywhere, BlueprintReadOnly, Category = "Components")
		UStaticMeshComponent* StandardMesh;
	UPROPERTY(EditDefaultsOnly, BlueprintReadOnly, Category = "Components")
		UStaticMesh* DestroyedMesh;
	UPROPERTY(VisibleAnywhere, BlueprintReadOnly, Category = "Components")
		UVitalsComponent* VitalsComponent;
	// Called when the game starts or when spawned
	virtual void BeginPlay() override;

	UPROPERTY(EditDefaultsOnly, BlueprintReadOnly, Category = "Explosion")
		bool bExplodesOnDestroy;
	UPROPERTY(EditDefaultsOnly, BlueprintReadOnly, Category = "Explosion")
		bool bSimulatePhysicsWhenDestroyed;
	UPROPERTY(EditDefaultsOnly, Category = "Explosion", meta = (EditCondition = bExplodesOnDestroy))
		bool bBlastDamageWithFallOff;
	UPROPERTY(EditDefaultsOnly, Category = "Explosion", meta = (EditCondition = bExplodesOnDestroy))
		USoundBase* ExplosionSound;
	UPROPERTY(EditDefaultsOnly, BlueprintReadOnly, Category = "Explosion", meta = (EditCondition = bExplodesOnDestroy))
		UParticleSystem* ExplosionEffect;

	UPROPERTY(EditDefaultsOnly, BlueprintReadOnly, Category = "Explosion")
		URadialForceComponent* ForceComponent;
	UPROPERTY(EditDefaultsOnly, BlueprintReadOnly, Category = "Explosion", meta = (EditCondition = bExplodesOnDestroy))
		float BlastRadius = 600.f;

	UPROPERTY(EditDefaultsOnly, BlueprintReadOnly, Category = "Explosion", meta = (EditCondition = bExplodesOnDestroy))
		float BlastForce = 100.f;

	UPROPERTY(EditDefaultsOnly, BlueprintReadOnly, Category = "Explosion", meta = (EditCondition = bExplodesOnDestroy))
		float BaseDamage = 100.f;

	UPROPERTY(EditDefaultsOnly, BlueprintReadOnly, Category = "Explosion", meta = (EditCondition = bExplodesOnDestroy))
		TSubclassOf<UDamageType> DamageType;

	UPROPERTY(ReplicatedUsing = OnRep_Destroyed)
		bool bIsDestroyed;

	UFUNCTION()
		void OnRep_Destroyed();


public:
	// Called every frame
	virtual void Tick(float DeltaTime) override;

	UFUNCTION()
		void OnHealthChanged(UVitalsComponent* OwningHealthComp, float Health, float HealthDelta, const class UDamageType* DamageTypeTaken, class AController* InstigatedBy, AActor* DamageCauser);
};
