// Fill out your copyright notice in the Description page of Project Settings.


#include "HitscanFirearm.h"
#include "UntitledCoopShooter/UntitledCoopShooter.h"
#include "CoopCharacter.h"
#include "DrawDebugHelpers.h"
#include "IKAnimInstance.h"
#include "Kismet/GameplayStatics.h"
#include "Net/UnrealNetwork.h"
#include "Particles/ParticleSystem.h"
#include "Particles/ParticleSystemComponent.h"
#include "PhysicalMaterials/PhysicalMaterial.h"
#include "TimerManager.h"
// Sets default values
AHitscanFirearm::AHitscanFirearm()
{
	// Set this actor to call Tick() every frame.  You can turn this off to improve performance if you don't need it.
	PrimaryActorTick.bCanEverTick = true;
	// Create a gun mesh component
	MeshComponent = CreateDefaultSubobject<USkeletalMeshComponent>(TEXT("MeshComponent"));
	MeshComponent->SetOnlyOwnerSee(false);			// otherwise won't be visible in the multiplayer
	MeshComponent->bCastDynamicShadow = true;
	MeshComponent->CastShadow = true;
	MeshComponent->SetCollisionEnabled(ECollisionEnabled::NoCollision);
	RootComponent = MeshComponent;

	WeaponEffectiveRange = 10000.f;
}

// Called when the game starts or when spawned
void AHitscanFirearm::BeginPlay()
{
	Super::BeginPlay();
	Character = Cast<ACoopCharacter>(GetOwner());
	if (Character)
	{
		MeshComponent->AttachToComponent(Character->GetMesh1P(), FAttachmentTransformRules(EAttachmentRule::SnapToTarget, true), TEXT("S_hand_r"));
	}
	if (bCanFullAuto)
	{
		CurrentFireMode = EFireMode::FullAuto;
	}
	else if (bCanBurstFire)
	{
		CurrentFireMode = EFireMode::Burst;
	}
	else if (bCanSemiAuto)
	{
		CurrentFireMode = EFireMode::SemiAuto;
	}
	SecondsBetweenShots = 60.f / RateOfFire;
	
}

void AHitscanFirearm::OnRep_HitScanTrace()
{
	//Instruct Clients to play cosmetic effects
	PlayFireEffects(HitScanTrace.TraceTo);
	PlayImpactEffects(HitScanTrace.SurfaceType, HitScanTrace.TraceTo);
}

void AHitscanFirearm::PlayFireEffects(FVector TraceEnd)
{
	if (FireSound != nullptr)
	{
		UGameplayStatics::PlaySoundAtLocation(this, FireSound, GetActorLocation());
	}
}

void AHitscanFirearm::PlayImpactEffects(EPhysicalSurface SurfaceType, FVector ImpactPoint)
{

}

// Called every frame
void AHitscanFirearm::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);
}

void AHitscanFirearm::StartFire()
{
	float FirstDelay = FMath::Max(LastFireTime + SecondsBetweenShots - GetWorld()->TimeSeconds, 0.0f);
	switch (CurrentFireMode)
	{
	case EFireMode::FullAuto:
		GetWorldTimerManager().SetTimer(T_TimeBetweenShotsTimer, this, &AHitscanFirearm::Fire, SecondsBetweenShots, true, FirstDelay);
		break;
	case EFireMode::SemiAuto:
		GetWorldTimerManager().SetTimer(T_TimeBetweenShotsTimer, this, &AHitscanFirearm::Fire, SecondsBetweenShots, false, FirstDelay);
		break;
	case EFireMode::Burst:
		if (!GetWorldTimerManager().IsTimerActive(T_BurstShotsTimer))
		{
			GetWorldTimerManager().SetTimer(T_BurstShotsTimer, this, &AHitscanFirearm::BurstFire, SecondsBetweenShots, true, FirstDelay);
		}
		break;
	default:
		break;
	}
}

void AHitscanFirearm::StopFire()
{
	GetWorldTimerManager().ClearTimer(T_TimeBetweenShotsTimer);
}

void AHitscanFirearm::Fire()
{
	if (!Character)
	{
		Character = Cast<ACoopCharacter>(GetOwner());
	}
	else if (Character)
	{
			UIKAnimInstance* ProceduralAimingAnimInstance = Cast<UIKAnimInstance>(Character->GetMesh1P()->GetAnimInstance());
			if (ProceduralAimingAnimInstance)
			{
				UE_LOG(LogTemp, Log, TEXT("Anim instance exists"));
				ProceduralAimingAnimInstance->Fire();
			}
			else
			{
				UE_LOG(LogTemp, Log, TEXT("Anim instance doesn't exist"));
			}
			FVector EyeLocation;
			FRotator EyeRotation;
			Character->GetActorEyesViewPoint(EyeLocation, EyeRotation);
			FVector MuzzleLocation = MeshComponent->GetSocketLocation(FName("S_Muzzle"));
			FRotator MuzzleRotation = MeshComponent->GetSocketRotation(FName("S_Muzzle"));
			//consider whether to add bullet spread
			FVector ShotDirection = EyeRotation.Vector();
			ShotDirection = MuzzleRotation.Vector(); //Testing using Muzzle-based hit tracing
			FVector TraceEnd = EyeLocation + (ShotDirection * WeaponEffectiveRange);
			FVector TraceEndPoint = TraceEnd;
			FCollisionQueryParams QueryParams;
			QueryParams.AddIgnoredActor(Character);
			QueryParams.AddIgnoredActor(this);
			QueryParams.bTraceComplex = true;
			QueryParams.bReturnPhysicalMaterial = true;
			EPhysicalSurface SurfaceType = SurfaceType_Default;
			FHitResult Hit;
			if (GetWorld()->LineTraceSingleByChannel(Hit, MuzzleLocation, TraceEnd, COLLISION_WEAPON, QueryParams))
			{
				//Blocking hit, process
				SurfaceType = UPhysicalMaterial::DetermineSurfaceType(Hit.PhysMaterial.Get());
				AActor* HitActor = Hit.GetActor();
				TraceEndPoint = Hit.ImpactPoint;
				float ActualDamage = WeaponDamage;
				if (SurfaceType == SURFACE_FLESHVULNERABLE)
				{
					ActualDamage *= 3.f; //headshot damage
				}

				UGameplayStatics::ApplyPointDamage(HitActor, ActualDamage, ShotDirection, Hit, Character->GetInstigatorController(), Character, DamageType);
				PlayImpactEffects(SurfaceType, Hit.ImpactPoint);
			}
			PlayFireEffects(TraceEndPoint);
			DrawDebugLine(GetWorld(), MuzzleLocation, TraceEnd, FColor::White, false, 1.0f, 0, 1.0f);
			if (HasAuthority())
			{
				HitScanTrace.ForceReplication++;
				HitScanTrace.TraceTo = TraceEndPoint;
				HitScanTrace.SurfaceType = SurfaceType;
			}
			LastFireTime = GetWorld()->TimeSeconds;
			Character->DeductAmmo();
	}
}

void AHitscanFirearm::BurstFire()
{
	ShotsThisBurst++;
	Fire();
	if (ShotsThisBurst >= ShotsPerBurst)
	{
		ShotsThisBurst = 0;
		GetWorldTimerManager().ClearTimer(T_BurstShotsTimer);
	}
}

void AHitscanFirearm::SwitchFireMode()
{
	switch (CurrentFireMode)
	{
	case EFireMode::FullAuto:
		if (bCanBurstFire)
		{
			CurrentFireMode = EFireMode::Burst;
		}
		else if (bCanSemiAuto)
		{
			CurrentFireMode = EFireMode::SemiAuto;
		}
		break;
	case EFireMode::Burst:
		if (bCanSemiAuto)
		{
			CurrentFireMode = EFireMode::SemiAuto;
		}
		else if (bCanFullAuto)
		{
			CurrentFireMode = EFireMode::FullAuto;
		}
		break;
	case EFireMode::SemiAuto:
		if (bCanFullAuto)
		{
			CurrentFireMode = EFireMode::FullAuto;
		}
		else if (bCanBurstFire)
		{
			CurrentFireMode = EFireMode::Burst;
		}
		break;
	default:
		break;
	}
}

void AHitscanFirearm::GetLifetimeReplicatedProps(TArray< FLifetimeProperty >& OutLifetimeProps) const
{
	Super::GetLifetimeReplicatedProps(OutLifetimeProps);

	DOREPLIFETIME_CONDITION(AHitscanFirearm, HitScanTrace, COND_SkipOwner);
}

