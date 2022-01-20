// Fill out your copyright notice in the Description page of Project Settings.


#include "HitscanFirearm.h"
#include "CoopCharacter.h"
#include "IKAnimInstance.h"
#include "Kismet/GameplayStatics.h"
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
}

// Called every frame
void AHitscanFirearm::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);

}

void AHitscanFirearm::StartFire()
{
	Fire();
}

void AHitscanFirearm::StopFire()
{

}

void AHitscanFirearm::Fire()
{
	
	if (FireSound != nullptr)
	{
		UGameplayStatics::PlaySoundAtLocation(this, FireSound, GetActorLocation());
	}
	if (!Character)
	{
		Character = Cast<ACoopCharacter>(GetOwner());
	}
	if (Character)
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
	}
}

