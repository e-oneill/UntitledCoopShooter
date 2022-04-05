// Fill out your copyright notice in the Description page of Project Settings.


#include "HitscanFirearm.h"
#include "UntitledCoopShooter/UntitledCoopShooter.h"
#include "CoopCharacter.h"
#include "AICharacterBase.h"
#include "WeaponAttachment.h"
#include "VitalsComponent.h"
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

	bReplicates = true;
	//SetReplicateMovement(true);
}



// Called when the game starts or when spawned
void AHitscanFirearm::BeginPlay()
{
	Super::BeginPlay();
	Character = Cast<ACoopCharacter>(GetOwner());
	if (Character)
	{
		//MeshComponent->AttachToComponent(Character->GetMesh1P(), FAttachmentTransformRules(EAttachmentRule::SnapToTarget, true), TEXT("S_hand_r"));
	}
	else
	{
		AICharacter = Cast<AAICharacterBase>(GetOwner());
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

void AHitscanFirearm::SetupOptic()
{
	if (Optic)
	{
		FActorSpawnParameters SpawnParams;
		SpawnParams.SpawnCollisionHandlingOverride = ESpawnActorCollisionHandlingMethod::AlwaysSpawn;
		CurrentOptic = GetWorld()->SpawnActor<AWeaponAttachment>(Optic, FVector::ZeroVector, FRotator::ZeroRotator, SpawnParams);
		CurrentOptic->SetOwner(this);
		CurrentOptic->AttachToComponent(MeshComponent, FAttachmentTransformRules(EAttachmentRule::SnapToTarget, true), TEXT("S_Sight"));
		CurrentOpticTransform = CurrentOptic->StaticMesh->GetSocketTransform(FName("S_Aim"));
		CurrentOptic->StaticMesh->SetOnlyOwnerSee(true);
		CurrentOptic->StaticMesh->bCastDynamicShadow = false;
		CurrentOptic->StaticMesh->CastShadow = false;
	}
	else
	{
		CurrentOpticTransform = MeshComponent->GetSocketTransform(FName("S_IronSights"));
		UE_LOG(LogTemp, Log, TEXT("Setting up ironsights"));
	}
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
	if (!HasAuthority())
	{
		ServerStopFire();
	}
	GetWorldTimerManager().ClearTimer(T_TimeBetweenShotsTimer);
}
//At the moment, the Fire methods runs on both the server and the clients - to get the IK animation system replicating right, I likely need to move only the hittrace to the server and run the rest client-side
void AHitscanFirearm::Fire() 
{
	if (!HasAuthority())
	{
		ServerFire();
		//return;
	}
	if (!Character && !AICharacter)
	{
		Character = Cast<ACoopCharacter>(GetOwner());
		if (!Character)
		{
			AICharacter = Cast<AAICharacterBase>(GetOwner());
		}
	}
	else if (Character || AICharacter)
	{
			UIKAnimInstance* ProceduralAimingAnimInstance = Cast<UIKAnimInstance>(Character->GetMesh1P()->GetAnimInstance());
			if (ProceduralAimingAnimInstance)
			{
				//UE_LOG(LogTemp, Log, TEXT("Anim instance exists"));
				ProceduralAimingAnimInstance->Fire();
			}
			else
			{
				if (!AICharacter)
				{
					UE_LOG(LogTemp, Log, TEXT("Character does not have IK Anim instance set"));
				}
			}
			FVector EyeLocation;
			FRotator EyeRotation;
			FCollisionQueryParams QueryParams;
			QueryParams.AddIgnoredActor(this);
			QueryParams.bTraceComplex = true;
			QueryParams.bReturnPhysicalMaterial = true;
			if (Character)
			{
				Character->GetActorEyesViewPoint(EyeLocation, EyeRotation);
				QueryParams.AddIgnoredActor(Character);
			}
			else if (AICharacter)
			{
				AICharacter->GetActorEyesViewPoint(EyeLocation, EyeRotation);
				QueryParams.AddIgnoredActor(AICharacter);
			}
			
			FVector MuzzleLocation = MeshComponent->GetSocketLocation(FName("S_Muzzle"));
			FRotator MuzzleRotation = MeshComponent->GetSocketRotation(FName("S_Muzzle"));
			//consider whether to add bullet spread
			FVector ShotDirection = EyeRotation.Vector();
			ShotDirection = MuzzleRotation.Vector(); //Testing using Muzzle-based hit tracing
			FVector TraceEnd = EyeLocation + (ShotDirection * WeaponEffectiveRange);
			FVector TraceEndPoint = TraceEnd;
			
			
			EPhysicalSurface SurfaceType = SurfaceType_Default;
			FHitResult Hit;
			if (GetWorld()->LineTraceSingleByChannel(Hit, MuzzleLocation, TraceEnd, COLLISION_WEAPON, QueryParams))
			{
				//Blocking hit, process
				SurfaceType = UPhysicalMaterial::DetermineSurfaceType(Hit.PhysMaterial.Get());
				AActor* HitActor = Hit.GetActor();
				TraceEndPoint = Hit.ImpactPoint;
				float ActualDamage = WeaponDamage;
				UVitalsComponent* VitalsComp = HitActor->FindComponentByClass<UVitalsComponent>();
				if (VitalsComp)
				{
					if (SurfaceType == SURFACE_FLESHVULNERABLE && (VitalsComp->GetShield() <= 0.f && VitalsComp->GetArmor() <= 0.f)) //Headshots get no bonus damage on shield or armor
					{
						ActualDamage *= 3.f; //headshot damage
					}
				}
				if (Character)
				{
					UGameplayStatics::ApplyPointDamage(HitActor, ActualDamage, ShotDirection, Hit, Character->GetInstigatorController(), Character, DamageType);
					Character->DeductAmmo();
				}
				else if (AICharacter)
				{
					UGameplayStatics::ApplyPointDamage(HitActor, ActualDamage, ShotDirection, Hit, AICharacter->GetInstigatorController(), AICharacter, DamageType);
				}
				
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
			
	}
}

void AHitscanFirearm::ServerFire_Implementation()
{
	Fire();
}

bool AHitscanFirearm::ServerFire_Validate()
{
	return true;
}

void AHitscanFirearm::ServerStopFire_Implementation()
{
	StopFire();
}

bool AHitscanFirearm::ServerStopFire_Validate()
{
	return true;
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

