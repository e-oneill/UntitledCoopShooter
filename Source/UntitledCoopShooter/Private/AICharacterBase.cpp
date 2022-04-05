// Fill out your copyright notice in the Description page of Project Settings.


#include "AICharacterBase.h"
#include "VitalsComponent.h"
#include "Perception/PawnSensingComponent.h"
#include "HitscanFirearm.h"
#include "WeaponAttachment.h"
#include "Net/UnrealNetwork.h"
// Sets default values
AAICharacterBase::AAICharacterBase()
{
 	// Set this character to call Tick() every frame.  You can turn this off to improve performance if you don't need it.
	PrimaryActorTick.bCanEverTick = true;
	VitalsComponent = CreateDefaultSubobject<UVitalsComponent>(TEXT("VitalsComponent"));
	VitalsComponent->OnHealthChanged.AddDynamic(this, &AAICharacterBase::OnHealthChanged);

	SensingComponent = CreateDefaultSubobject<UPawnSensingComponent>(TEXT("SensingComponent"));
	SensingComponent->SetPeripheralVisionAngle(45.0f);

	bDead = false;

	
	
}

// Called when the game starts or when spawned
void AAICharacterBase::BeginPlay()
{
	Super::BeginPlay();
	SwitchWeapon(StartingWeapon);

	

}

void AAICharacterBase::OnRep_Client_BotStatus(EBotStatus OldStatus)
{
	
}

void AAICharacterBase::SwitchWeapon(TSubclassOf<AHitscanFirearm> NewWeapon)
{
	if (CurrentWeapon)
	{
		if (CurrentWeapon->CurrentOptic)
		{
			CurrentWeapon->CurrentOptic->Destroy();
		}
		CurrentWeapon->Destroy();
	}
	FActorSpawnParameters SpawnParams;
	SpawnParams.SpawnCollisionHandlingOverride = ESpawnActorCollisionHandlingMethod::AlwaysSpawn;
	CurrentWeapon = GetWorld()->SpawnActor<AHitscanFirearm>(NewWeapon, FVector::ZeroVector, FRotator::ZeroRotator, SpawnParams);
	CurrentWeapon->SetOwner(this);
	CurrentWeapon->SetupOptic();
	CurrentWeapon->GetMeshComponent()->SetOnlyOwnerSee(false);
	CurrentWeapon->GetMeshComponent()->SetOwnerNoSee(false);
	//CurrentWeapon->GetMeshComponent()->SetCastHiddenShadow(true);
	CurrentWeapon->GetMeshComponent()->bCastDynamicShadow = true;
	CurrentWeapon->GetMeshComponent()->CastShadow = true;
	CurrentWeapon->AttachToComponent(GetMesh(), FAttachmentTransformRules(EAttachmentRule::SnapToTarget, true), TEXT("S_hand_r"));
	if (CurrentWeapon->CurrentOptic)
	{
		CurrentWeapon->CurrentOptic->StaticMesh->bCastDynamicShadow = true;
		CurrentWeapon->CurrentOptic->StaticMesh->CastShadow = true;
		CurrentWeapon->CurrentOptic->StaticMesh->SetOnlyOwnerSee(false);
		CurrentWeapon->CurrentOptic->StaticMesh->SetOwnerNoSee(true);
		CurrentWeapon->CurrentOptic->StaticMesh->SetCastHiddenShadow(true);
	}
	EquippedWeapon = NewWeapon;
}

// Called every frame
void AAICharacterBase::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);

}

// Called to bind functionality to input
void AAICharacterBase::SetupPlayerInputComponent(UInputComponent* PlayerInputComponent)
{
	Super::SetupPlayerInputComponent(PlayerInputComponent);

}

void AAICharacterBase::OnHealthChanged(UVitalsComponent* OwningHealthComp, float Health, float HealthDelta, const class UDamageType* DamageTypeTaken, class AController* InstigatedBy, AActor* DamageCauser)
{
	if (Health <= 0.f)
	{
		bDead = true;
		UE_LOG(LogTemp, Log, TEXT("Bot is dead"));
	}
}

void AAICharacterBase::GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const
{
	Super::GetLifetimeReplicatedProps(OutLifetimeProps);

	DOREPLIFETIME(AAICharacterBase, EquippedWeapon);
	DOREPLIFETIME(AAICharacterBase, CurrentWeapon);
	DOREPLIFETIME(AAICharacterBase, BotStatus);
	//DOREPLIFETIME(ACoopCharacter, SightTransform);
	//DOREPLIFETIME(ACoopCharacter, RelativeHandTransform);
	//DOREPLIFETIME(ACoopCharacter, LeftHandTransform);
}

