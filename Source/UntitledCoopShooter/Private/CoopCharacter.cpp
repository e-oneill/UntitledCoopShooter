// Fill out your copyright notice in the Description page of Project Settings.


#include "CoopCharacter.h"
#include "HitscanFirearm.h"
#include "WeaponAttachment.h"
#include "VitalsComponent.h"
#include "IKAnimInstance.h"
#include "Animation/AnimInstance.h"
#include "Camera/CameraComponent.h"
#include "Components/CapsuleComponent.h"
#include "Components/InputComponent.h"
#include "GameFramework/InputSettings.h"
#include "HeadMountedDisplayFunctionLibrary.h"
#include "Kismet/GameplayStatics.h"
#include "Net/UnrealNetwork.h"
#include "DrawDebugHelpers.h"

DEFINE_LOG_CATEGORY_STATIC(LogFPChar, Warning, All);

// Sets default values
ACoopCharacter::ACoopCharacter()
{
	// Set this character to call Tick() every frame.  You can turn this off to improve performance if you don't need it.
	PrimaryActorTick.bCanEverTick = true;

	// Set size for collision capsule
	GetCapsuleComponent()->InitCapsuleSize(55.f, 96.0f);

	// set our turn rates for input
	BaseTurnRate = 45.f;
	BaseLookUpRate = 45.f;

	// Create a CameraComponent	
	FirstPersonCameraComponent = CreateDefaultSubobject<UCameraComponent>(TEXT("FirstPersonCamera"));
	FirstPersonCameraComponent->SetupAttachment(GetCapsuleComponent());
	FirstPersonCameraComponent->SetRelativeLocation(FVector(-39.56f, 1.75f, 64.f)); // Position the camera
	FirstPersonCameraComponent->bUsePawnControlRotation = true;

	// Create a mesh component that will be used when being viewed from a '1st person' view (when controlling this pawn)
	Mesh1P = CreateDefaultSubobject<USkeletalMeshComponent>(TEXT("CharacterMesh1P"));
	Mesh1P->SetOnlyOwnerSee(true);
	Mesh1P->SetupAttachment(FirstPersonCameraComponent);
	Mesh1P->bCastDynamicShadow = false;
	Mesh1P->CastShadow = false;
	Mesh1P->SetRelativeRotation(FRotator(1.9f, -19.19f, 5.2f));
	Mesh1P->SetRelativeLocation(FVector(-0.5f, -4.4f, -155.7f));

	// Create a gun mesh component
	//TP_Gun = CreateDefaultSubobject<USkeletalMeshComponent>(TEXT("TP_Gun"));
	//TP_Gun->SetOnlyOwnerSee(false);			// otherwise won't be visible in the multiplayer
	//TP_Gun->SetOwnerNoSee(true);
	//TP_Gun->bCastDynamicShadow = true;
	//TP_Gun->CastShadow = true;
	//TP_Gun->SetupAttachment(RootComponent);

	VitalsComponent = CreateDefaultSubobject<UVitalsComponent>(TEXT("VitalsComponent"));

	bIsAiming = false;
	OpticIndex = 0;

	bReplicates = true;
	SetReplicateMovement(true);

}


void ACoopCharacter::BeginPlay()
{
	// Call the base class  
	Super::BeginPlay();
	ProceduralAimingAnimInstance = Cast<UIKAnimInstance>(GetMesh1P()->GetAnimInstance());
	if (!ProceduralAimingAnimInstance)
	{
		UE_LOG(LogTemp, Error, TEXT("Player Anim Instance is not set to the IK Anim Instance"));
	}
	else
	{
		ProceduralAimingAnimInstance->UpdateAnimInstanceCurrentWeapon();
		UE_LOG(LogTemp, Log, TEXT("Updating Anim Instance"));
	}
	//Attach gun mesh component to Skeleton, doing it here because the skeleton is not yet created in the constructor
	SwitchWeapon(PrimaryWeapon);


	
}

//////////////////////////////////////////////////////////////////////////
// Input

void ACoopCharacter::SetupPlayerInputComponent(class UInputComponent* PlayerInputComponent)
{
	// set up gameplay key bindings
	check(PlayerInputComponent);

	// Bind jump events
	PlayerInputComponent->BindAction("Jump", IE_Pressed, this, &ACharacter::Jump);
	PlayerInputComponent->BindAction("Jump", IE_Released, this, &ACharacter::StopJumping);

	// Bind fire event
	PlayerInputComponent->BindAction("Fire", IE_Pressed, this, &ACoopCharacter::OnFire);
	PlayerInputComponent->BindAction("Fire", IE_Released, this, &ACoopCharacter::StopFire);
	PlayerInputComponent->BindAction("Reload", IE_Pressed, this, &ACoopCharacter::Reload);
	PlayerInputComponent->BindAction("Switch Fire Mode", IE_Pressed, this, &ACoopCharacter::SwitchFireMode);
	PlayerInputComponent->BindAction("Switch to Primary Weapon", IE_Pressed, this, &ACoopCharacter::SwitchToPrimary);
	PlayerInputComponent->BindAction("Switch to Secondary Weapon", IE_Pressed, this, &ACoopCharacter::SwitchToSecondary);
	// Bind movement events
	PlayerInputComponent->BindAxis("MoveForward", this, &ACoopCharacter::MoveForward);
	PlayerInputComponent->BindAxis("MoveRight", this, &ACoopCharacter::MoveRight);

	// We have 2 versions of the rotation bindings to handle different kinds of devices differently
	// "turn" handles devices that provide an absolute delta, such as a mouse.
	// "turnrate" is for devices that we choose to treat as a rate of change, such as an analog joystick
	PlayerInputComponent->BindAxis("Turn", this, &APawn::AddControllerYawInput);
	PlayerInputComponent->BindAxis("TurnRate", this, &ACoopCharacter::TurnAtRate);
	PlayerInputComponent->BindAxis("LookUp", this, &APawn::AddControllerPitchInput);
	PlayerInputComponent->BindAxis("LookUpRate", this, &ACoopCharacter::LookUpAtRate);
}

void ACoopCharacter::DeductAmmo()
{
	CurrentAmmo--;
	switch (CurrentWeapon->GetWeaponClass())
	{
	case EWeaponClass::Primary:
		PrimaryAmmo--;
		break;
	case EWeaponClass::Sidearm:
		SidearmAmmo--;
		break;
	case EWeaponClass::Special:
		SpecialAmmo--;
		break;
	default:
		break;
	}
}

void ACoopCharacter::OnFire()
{
	//if (!HasAuthority())
	//{
	//	ServerOnFire();
	//	return;
	//}
	if (CurrentWeapon)
	{
		CurrentWeapon->StartFire();
	}
}

void ACoopCharacter::StopFire()
{
	//if (!HasAuthority())
	//{
	//	ServerOnStopFire();
	//	return;
	//}
	if (CurrentWeapon)
	{
		CurrentWeapon->StopFire();
	}
}

void ACoopCharacter::OnRep_EquippedWeapon_Implementation()
{
	if (ProceduralAimingAnimInstance)
	{
		ProceduralAimingAnimInstance->UpdateAnimInstanceCurrentWeapon();
	}
}

bool ACoopCharacter::OnRep_EquippedWeapon_Validate()
{
	return true;
}

//void ACoopCharacter::OnRep_SightTransform(FTransform NewTransform)
//{
//	SightTransform = NewTransform;
//}
//
//void ACoopCharacter::OnRep_LeftHandTransform(FTransform NewTransform)
//{
//	LeftHandTransform = NewTransform;
//}


void ACoopCharacter::SwitchWeapon(TSubclassOf<AHitscanFirearm> NewWeapon)
{
	Server_SwitchWeapon(NewWeapon);
}

void ACoopCharacter::Server_SwitchWeapon_Implementation(TSubclassOf<AHitscanFirearm> NewWeapon)
{
	if (CurrentWeapon)
	{
		if (CurrentWeapon->CurrentOptic)
		{
			CurrentWeapon->CurrentOptic->Destroy();
			TP_Gun->CurrentOptic->Destroy();
		}
		TP_Gun->Destroy();
		CurrentWeapon->Destroy();
	}
	//if (GEngine)
	//{
	//	GEngine->AddOnScreenDebugMessage(-1, 5.f, FColor::Blue, TEXT("Equipping Weapon"));
	//}
	//	
	FActorSpawnParameters SpawnParams;
	SpawnParams.SpawnCollisionHandlingOverride = ESpawnActorCollisionHandlingMethod::AlwaysSpawn;
	CurrentWeapon = GetWorld()->SpawnActor<AHitscanFirearm>(NewWeapon, FVector::ZeroVector, FRotator::ZeroRotator, SpawnParams);
	CurrentWeapon->SetOwner(this);
	CurrentWeapon->GetMeshComponent()->SetOnlyOwnerSee(true);
	CurrentWeapon->GetMeshComponent()->bCastDynamicShadow = false;
	CurrentWeapon->GetMeshComponent()->CastShadow = false;
	CurrentWeapon->AttachToComponent(Mesh1P, FAttachmentTransformRules(EAttachmentRule::SnapToTarget, true), TEXT("S_hand_r"));
	//CurrentWeapon->GetMeshComponent()->SetCastShadows(false);
	CurrentWeapon->SetupOptic();
	TP_Gun = GetWorld()->SpawnActor<AHitscanFirearm>(NewWeapon, FVector::ZeroVector, FRotator::ZeroRotator, SpawnParams);
	TP_Gun->SetOwner(this);
	TP_Gun->GetMeshComponent()->SetOnlyOwnerSee(false);
	TP_Gun->GetMeshComponent()->SetOwnerNoSee(true);
	TP_Gun->GetMeshComponent()->SetCastHiddenShadow(true);
	TP_Gun->GetMeshComponent()->bCastDynamicShadow = true;
	TP_Gun->GetMeshComponent()->CastShadow = true;
	TP_Gun->AttachToComponent(GetMesh(), FAttachmentTransformRules(EAttachmentRule::SnapToTarget, true), TEXT("S_hand_r"));
	TP_Gun->SetupOptic();
	if (TP_Gun->CurrentOptic)
	{
		TP_Gun->CurrentOptic->StaticMesh->bCastDynamicShadow = true;
		TP_Gun->CurrentOptic->StaticMesh->CastShadow = true;
		TP_Gun->CurrentOptic->StaticMesh->SetOnlyOwnerSee(false);
		TP_Gun->CurrentOptic->StaticMesh->SetOwnerNoSee(true);
		TP_Gun->CurrentOptic->StaticMesh->SetCastHiddenShadow(true);
	}

	switch (CurrentWeapon->GetWeaponClass())
	{
	case EWeaponClass::Primary:
		CurrentAmmo = PrimaryAmmo;
		break;
	case EWeaponClass::Sidearm:
		CurrentAmmo = SidearmAmmo;
		break;
	case EWeaponClass::Special:
		CurrentAmmo = SpecialAmmo;
		break;
	default:
		break;
	}
	EquippedWeapon = NewWeapon;

	if (HasAuthority())
	{
		//OnRep_EquippedWeapon();
	}
	if (ProceduralAimingAnimInstance)
	{
		ProceduralAimingAnimInstance->UpdateAnimInstanceCurrentWeapon();
	}
}

bool ACoopCharacter::Server_SwitchWeapon_Validate(TSubclassOf<AHitscanFirearm> NewWeapon)
{
	return true;
}

void ACoopCharacter::SwitchFireMode()
{
	if (CurrentWeapon)
	{
		CurrentWeapon->SwitchFireMode();
	}
}

void ACoopCharacter::SwitchToPrimary()
{
	if (EquippedWeapon != PrimaryWeapon)
	{
		SwitchWeapon(PrimaryWeapon);
		EquippedWeapon = PrimaryWeapon;
	}
}

void ACoopCharacter::SwitchToSecondary()
{
	if (EquippedWeapon != SecondaryWeapon)
	{
		SwitchWeapon(SecondaryWeapon);
		EquippedWeapon = SecondaryWeapon;
	}
}

void ACoopCharacter::MoveForward(float Value)
{
	if (Value != 0.0f)
	{
		// add movement in that direction
		AddMovementInput(GetActorForwardVector(), Value);
	}
}

void ACoopCharacter::MoveRight(float Value)
{
	if (Value != 0.0f)
	{
		// add movement in that direction
		AddMovementInput(GetActorRightVector(), Value);
	}
}

void ACoopCharacter::TurnAtRate(float Rate)
{
	// calculate delta for this frame from the rate information
	AddControllerYawInput(Rate * BaseTurnRate * GetWorld()->GetDeltaSeconds());
}

void ACoopCharacter::LookUpAtRate(float Rate)
{
	// calculate delta for this frame from the rate information
	AddControllerPitchInput(Rate * BaseLookUpRate * GetWorld()->GetDeltaSeconds());
}

void ACoopCharacter::ServerOnFire_Implementation()
{
	OnFire();
}

bool ACoopCharacter::ServerOnFire_Validate()
{
	return true;
}

void ACoopCharacter::ServerOnStopFire_Implementation()
{
	StopFire();
}

bool ACoopCharacter::ServerOnStopFire_Validate()
{
	return true;
}

void ACoopCharacter::SetAiming(bool IsAiming)
{
	bIsAiming = IsAiming;
	if (ProceduralAimingAnimInstance)
	{
		ProceduralAimingAnimInstance->SetAiming(bIsAiming);
	}

	if (!HasAuthority())
	{
		Server_SetAiming(IsAiming);
	}
}

void ACoopCharacter::OnRep_bIsAiming()
{
	if (ProceduralAimingAnimInstance)
	{
		ProceduralAimingAnimInstance->SetAiming(bIsAiming);
	}
}

void ACoopCharacter::Server_SetAiming_Implementation(bool IsAiming)
{
	SetAiming(IsAiming);
}

bool ACoopCharacter::Server_SetAiming_Validate(bool IsAiming)
{
	return true;
}

void ACoopCharacter::CycleOptic()
{

	if (++OpticIndex >= Optics.Num()) OpticIndex = 0;

	CurrentOptic = Optics[OpticIndex];
	if (ProceduralAimingAnimInstance)
	{
		ProceduralAimingAnimInstance->CycleToOptic();
	}

	if (!HasAuthority()) //May want to add check that optic index has actually changed before calling server RPC
	{
		Server_OpticIndex(OpticIndex);
	}
}

void ACoopCharacter::Reload()
{
	//if (ReloadAnimation != nullptr)
	//{
	//	if (ProceduralAimingAnimInstance != nullptr)
	//	{
	//		ProceduralAimingAnimInstance->Reload();
	//		ProceduralAimingAnimInstance->Montage_Play(ReloadAnimation, 1.f);
	//	}
	//}
}

void ACoopCharacter::OnRep_OpticIndex()
{
	CurrentOptic = Optics[OpticIndex];
	if (ProceduralAimingAnimInstance)
	{
		ProceduralAimingAnimInstance->CycleToOptic();
	}
}

void ACoopCharacter::Server_OpticIndex_Implementation(uint8 NewIndex)
{
	OpticIndex = NewIndex;
	OnRep_OpticIndex();
}

bool ACoopCharacter::Server_OpticIndex_Validate(uint8 NewIndex)
{
	return true;
}

void ACoopCharacter::GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const
{
	Super::GetLifetimeReplicatedProps(OutLifetimeProps);

	DOREPLIFETIME_CONDITION(ACoopCharacter, bIsAiming, COND_SkipOwner);
	DOREPLIFETIME_CONDITION(ACoopCharacter, OpticIndex, COND_SkipOwner);
	DOREPLIFETIME(ACoopCharacter, EquippedWeapon);
	DOREPLIFETIME(ACoopCharacter, CurrentWeapon);
	DOREPLIFETIME(ACoopCharacter, TP_Gun);
	//DOREPLIFETIME(ACoopCharacter, SightTransform);
	//DOREPLIFETIME(ACoopCharacter, RelativeHandTransform);
	//DOREPLIFETIME(ACoopCharacter, LeftHandTransform);
}


