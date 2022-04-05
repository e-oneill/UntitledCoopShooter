// Fill out your copyright notice in the Description page of Project Settings.


#include "WeaponAttachment.h"

// Sets default values
AWeaponAttachment::AWeaponAttachment()
{
 	// Set this actor to call Tick() every frame.  You can turn this off to improve performance if you don't need it.
	PrimaryActorTick.bCanEverTick = true;
	ErgonomicsImpact = 0.f;
	Weight = 0.f;
	StaticMesh = CreateDefaultSubobject<UStaticMeshComponent>(TEXT("StaticMesh"));
	RootComponent = StaticMesh;

	bReplicates = true;
}

// Called when the game starts or when spawned
void AWeaponAttachment::BeginPlay()
{
	Super::BeginPlay();

	
}

// Called every frame
void AWeaponAttachment::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);

}

