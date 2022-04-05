// Fill out your copyright notice in the Description page of Project Settings.


#include "DestructibleStaticObject.h"
#include "VitalsComponent.h"
#include "PhysicsEngine/RadialForceComponent.h"
#include "Kismet/GameplayStatics.h"
#include "Net/UnrealNetwork.h"
#include "Particles/ParticleSystem.h"
#include "Materials/Material.h"

// Sets default values
ADestructibleStaticObject::ADestructibleStaticObject()
{
	// Set this actor to call Tick() every frame.  You can turn this off to improve performance if you don't need it.
	PrimaryActorTick.bCanEverTick = true;
	StandardMesh = CreateDefaultSubobject<UStaticMeshComponent>(TEXT("StandardMesh"));
	RootComponent = StandardMesh;

	VitalsComponent = CreateDefaultSubobject<UVitalsComponent>(TEXT("VitalsComponent"));
	VitalsComponent->OnHealthChanged.AddDynamic(this, &ADestructibleStaticObject::OnHealthChanged);

	ForceComponent = CreateDefaultSubobject<URadialForceComponent>(TEXT("ForceComponent"));
	ForceComponent->ForceStrength = BlastForce;
	ForceComponent->ImpulseStrength = BlastForce;
	ForceComponent->Radius = BlastRadius;
	ForceComponent->bIgnoreOwningActor = true;
	ForceComponent->bAutoActivate = false;
	bSimulatePhysicsWhenDestroyed = false;
	bBlastDamageWithFallOff = true;
	//ForceComponent->bImpulseVelChange = true;
	bReplicates = true;
	SetReplicateMovement(true);
}

// Called when the game starts or when spawned
void ADestructibleStaticObject::BeginPlay()
{
	Super::BeginPlay();

}

void ADestructibleStaticObject::OnRep_Destroyed()
{
	if (bExplodesOnDestroy)
	{
		if (ExplosionEffect)
		{
			UGameplayStatics::SpawnEmitterAtLocation(GetWorld(), ExplosionEffect, GetActorLocation(), GetActorRotation());
		}
		if (ExplosionSound)
		{
			UGameplayStatics::PlaySoundAtLocation(this, ExplosionSound, GetActorLocation());
		}

		//MeshComponent->SetMaterial(0, ExplodeMaterial);
	}
}

// Called every frame
void ADestructibleStaticObject::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);

}

void ADestructibleStaticObject::OnHealthChanged(UVitalsComponent* OwningHealthComp, float Health, float HealthDelta, const class UDamageType* DamageTypeTaken, class AController* InstigatedBy, AActor* DamageCauser)
{
	if (bIsDestroyed)
	{
		return;
	}
	if (Health <= 0)
	{
		bIsDestroyed = true;
		OnRep_Destroyed();
		if (bExplodesOnDestroy)
		{
			TArray<AActor*> IgnoreActors;
			float InnerRadius = BlastRadius / 2.f;
			if (bBlastDamageWithFallOff)
			{
				UGameplayStatics::ApplyRadialDamageWithFalloff(GetWorld(), BaseDamage, 1.0f, GetActorLocation(), InnerRadius, BlastRadius, 1.0f, DamageType, IgnoreActors);
			}
			else
			{
				UGameplayStatics::ApplyRadialDamage(GetWorld(), BaseDamage, GetActorLocation(), BlastRadius, DamageType, IgnoreActors);
			}
			
			MakeNoise(1.0f, this->GetInstigator());
			
			ForceComponent->FireImpulse();
			
			SetLifeSpan(10.0f);
			//FVector Upwards = MeshComponent->GetUpVector() * 400.f;
			//MeshComponent->AddImpulse(Upwards, NAME_None, true);
		}
		if (bSimulatePhysicsWhenDestroyed)
		{
			StandardMesh->SetSimulatePhysics(true);
		}
		if (DestroyedMesh)
		{
			StandardMesh->SetStaticMesh(DestroyedMesh);
		}
		


	}
}

void ADestructibleStaticObject::GetLifetimeReplicatedProps(TArray< FLifetimeProperty >& OutLifetimeProps) const
{
	Super::GetLifetimeReplicatedProps(OutLifetimeProps);

	DOREPLIFETIME(ADestructibleStaticObject, bIsDestroyed);
}