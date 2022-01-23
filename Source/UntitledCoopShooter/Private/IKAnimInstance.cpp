// Fill out your copyright notice in the Description page of Project Settings.


#include "IKAnimInstance.h"
#include "CoopCharacter.h"
#include "HitscanFirearm.h"
#include "TimerManager.h"
#include "Camera/CameraComponent.h"
#include "Kismet/KismetMathLibrary.h"
#include "GameFramework/PawnMovementComponent.h"
#include "Curves/CurveVector.h"

UIKAnimInstance::UIKAnimInstance()
{
	AimAlpha = 0.f;
	bIsAiming = false;
	bInterpHandTransform = false;
	ReloadAlpha = 1.f;

	RecoilRotationXMin = 1.5f;
	RecoilRotationXMax = 3.f;
	RecoilRotationYMin = -1.f;
	RecoilRotationYMax = 1.f;
	RecoilRotationZMin = -1.f;
	RecoilRotationZMax = 1.f;

	RecoilLocationXMin = -3.f;
	RecoilLocationXMax = -1.f;
	RecoilLocationYMin = -3.f;
	RecoilLocationYMax = 3.f;
	RecoilLocationZMin = .5f;
	RecoilLocationZMax = 1.f;
		
}

void UIKAnimInstance::NativeBeginPlay()
{
	Super::NativeBeginPlay();

	Character = Cast<ACoopCharacter>(TryGetPawnOwner());
	if (Character) //This cast must succeed in order for this to work at all
	{
		UE_LOG(LogTemp, Log, TEXT("Valid Character"));
		FTimerHandle TStartUpTimer;
		GetWorld()->GetTimerManager().SetTimer(TStartUpTimer, this, &UIKAnimInstance::FirstStartUp, 0.5f, false);
		OldRot = Character->GetControlRotation(); //Not sure if this is replicated
		//SetLeftHandIK();
	}
	else
	{
		UE_LOG(LogTemp, Log, TEXT("Failed to get current character"));
	}

}

void UIKAnimInstance::NativeUpdateAnimation(float DeltaSeconds)
{
	Super::NativeUpdateAnimation(DeltaSeconds);

	if (!Character)
	{
		return; //Character has not been set
	}
	if (bInterpAlpha) //This value is set from the character blueprint, by calling SetAiming(bool)
	{
		InterpAiming(DeltaSeconds); //If we have set alpha to be interped, we call the function to interp aim down sights
	}
	if (bInterpHandTransform) //This value is set from the character blueprint, by calling CycleToOptics(bool)
	{
		InterpHandTransform(DeltaSeconds); //Interp movement from one sight to the next
	}
	if (Character->IsLocallyControlled() && CurrentWeapon) //This only runs on the client controlling a player pawn, as it wouldn't be visible on other clients
	{
		WeaponTurnSway(DeltaSeconds); //Handles sway of weapon when the player turns or looks up and down
		WeaponMovementSway(DeltaSeconds); //Handles sway of weapon, relative to current player movement
		InterpRecoil(DeltaSeconds); //Sets weapon to start interping to recoil destination
		InterpFinalRecoil(DeltaSeconds); //Sets weapon to start interping back to base pose
	}

	if (CurrentWeapon)
	{
		SetLeftHandIK();
	}
	
}



void UIKAnimInstance::InterpAiming(float DeltaSeconds)
{
	AimAlpha = FMath::Clamp((UKismetMathLibrary::FInterpTo(AimAlpha, static_cast<float>(bIsAiming), DeltaSeconds, 8.f)), 0.0f, 1.0f);
	//UE_LOG(LogTemp, Log, TEXT("Interping to new aim alpha %f"), AimAlpha);
	if (AimAlpha >= 1 || AimAlpha <= 0)
	{
		bInterpAlpha = false;
	}
}

void UIKAnimInstance::Reload()
{
	if (ReloadAlpha == 1.0f)
	{
		ReloadAlpha = 0.f;
	}
	else if (ReloadAlpha == 0.f)
	{
		ReloadAlpha = 1.f;
	}
}

void UIKAnimInstance::StopReload()
{
	ReloadAlpha = 1.f;
}

void UIKAnimInstance::InterpHandTransform(float DeltaSeconds)
{
	RelativeHandTransform = UKismetMathLibrary::TInterpTo(RelativeHandTransform, FinalHandTransform, DeltaSeconds, 8.f);

	if (RelativeHandTransform.Equals(FinalHandTransform)) bInterpHandTransform = false;
}

void UIKAnimInstance::FirstStartUp() //function to store variables needed to drive the animation system
{
	SetSightTransform();
	SetRelativeHandTransform();
	//SetLeftHandIK();
}

void UIKAnimInstance::SetSightTransform() //Setting the relative transform for the Sight, which is the center of the screen + 20 cms
{
	UCameraComponent* FPCamera = Character->GetFirstPersonCameraComponent();
	USkeletalMeshComponent* Mesh1P = Character->GetMesh1P();

	FTransform CamLocation = FPCamera->GetComponentTransform();
	FTransform MeshLocation = Mesh1P->GetComponentTransform();

	FTransform Relative = UKismetMathLibrary::MakeRelativeTransform(CamLocation, MeshLocation);

	FVector NewSightVector = Relative.GetLocation();
	FVector ForwardVector = Relative.GetRotation().GetForwardVector();
	ForwardVector *= 20.f;

	NewSightVector += ForwardVector;
	SightTransform.SetLocation(NewSightVector);
	SightTransform.SetRotation(Relative.Rotator().Quaternion());
}

void UIKAnimInstance::SetRelativeHandTransform()
{
	if (Character->GetCurrentWeapon()->GetCurrentOptic())
	{
		FTransform MeshTransform = Character->GetMesh1P()->GetSocketTransform(FName("hand_r"));
		FTransform OpticSocketTransform = Character->GetCurrentWeapon()->GetCurrentOptic()->GetSocketTransform(FName("S_Aim"));

		RelativeHandTransform = UKismetMathLibrary::MakeRelativeTransform(OpticSocketTransform, MeshTransform);
	}
	else
	{
		UE_LOG(LogTemp, Log, TEXT("Failed to get current optic"));
	}

}

void UIKAnimInstance::SetFinalHandTransform() //Function to set the right hand transform location, relative to the location of the center of the optic
{
	if (Character->GetCurrentWeapon()->GetCurrentOptic())
	{
		FTransform MeshTransform = Character->GetMesh1P()->GetSocketTransform(FName("hand_r"));
		FTransform OpticSocketTransform = CurrentWeapon->GetCurrentOptic()->GetSocketTransform(FName("S_Aim"));; //Sights must have this socket for this to work

		FinalHandTransform = UKismetMathLibrary::MakeRelativeTransform(OpticSocketTransform, MeshTransform);
	}
	else
	{
		UE_LOG(LogTemp, Log, TEXT("Failed to get current optic"));
	}
}

void UIKAnimInstance::SetLeftHandIK() //Set the transform destination of the Left Hand IK Bone, to stick the left hand to the grip point on the gun
{
	FTransform GunHandSocket = CurrentWeapon->GetMeshComponent()->GetSocketTransform(FName("S_LeftHand")); //Guns must have this socket for this to work
	FTransform MeshTransform = Character->GetMesh1P()->GetSocketTransform(FName("hand_r"));

	LeftHandTransform = UKismetMathLibrary::MakeRelativeTransform(GunHandSocket, MeshTransform);
}

void UIKAnimInstance::SetAiming(bool IsAiming)
{
	if (bIsAiming != IsAiming)
	{
		bIsAiming = IsAiming;
		bInterpAlpha = true;
	}
}

void UIKAnimInstance::CycleToOptic()
{
	//SetSightTransform();
	SetFinalHandTransform();
	bInterpHandTransform = true;
}

void UIKAnimInstance::WeaponMovementSway(float DeltaSeconds) //Function to make weapon sway up-down and left-right based on player walk speed
{
	if (WalkingSwayCurve) //This curve BP controls the way of the weapon as you walk
	{
		FVector VelocityVector = Character->GetMovementComponent()->Velocity;
		VelocityVector.Z = 0;
		float Velocity = VelocityVector.Size();
		float MaxSpeed = Character->GetMovementComponent()->GetMaxSpeed();
		Velocity = UKismetMathLibrary::NormalizeToRange(Velocity, (MaxSpeed / 2.f * -1.f), MaxSpeed * 1.5f); //Normalize velocity value based on walking speed
		FVector NewVector = WalkingSwayCurve->GetVectorValue(Character->GetGameTimeSinceCreation());
		SwayLocation = UKismetMathLibrary::VInterpTo(SwayLocation, NewVector, DeltaSeconds, 1.8f); //Interp the sway
		SwayLocation *= Velocity;
		//UE_LOG(LogTemp, Log, TEXT("Weapon Sway target: %f"), SwayLocation.Z);
		//UE_LOG(LogTemp, Log, TEXT("Moving"));
	}
}

void UIKAnimInstance::WeaponTurnSway(float DeltaSeconds)
{
	//Turning Sway Rotation 
	FRotator CurrentRotation = Character->GetControlRotation();
	float InterpSpeed = 4.f;
	if (CurrentWeapon)
	{
		float FirearmWeight = CurrentWeapon->GetWeaponWeight(); //e.g. 7.75 is the weight of an M4 Carbine, 8.8 the weight of an M16, 22 the weight of a M249
		float FirearmErgonomics = CurrentWeapon->GetWeaponErgonomics(); // e.g. 0.8f M4, 0.7f M16, .6f M249
		/*This block of code is a placeholder - later when we refactor so that our firearms are a separate class, the firearm weight will
		* drive the turning lag on the firearm, and attachments will increase the weight and decrease weapon handling */
		float Multiplier = FirearmErgonomics * (10.f / FirearmWeight); // 
		Multiplier = FMath::Clamp(Multiplier, 0.3f, 1.5f);
		InterpSpeed *= Multiplier;


		UnmodifiedRot = UKismetMathLibrary::RInterpTo(UnmodifiedRot, CurrentRotation - OldRot, DeltaSeconds, InterpSpeed);
		TurnRot = UnmodifiedRot;
		TurnRot.Roll = TurnRot.Pitch; //IMPORTANT: Due to the way the IK is set up, our Pitch is our Roll, and vice versa
		TurnRot.Yaw = FMath::Clamp(TurnRot.Yaw, -7.5f, 7.5f);
		TurnRot.Roll = FMath::Clamp(TurnRot.Roll, -3.f, 3.f);
		TurnRot.Pitch = 0.f; //We zero out the pitch, to remove the roll, see above
		TurnLocation.Y = TurnRot.Yaw / -4.f;
		TurnLocation.Z = TurnRot.Roll / -1.5f;

		TurningSwayTransform.SetLocation(TurnLocation);
		TurningSwayTransform.SetRotation(TurnRot.Quaternion());

		OldRot = CurrentRotation;
	}

}

void UIKAnimInstance::InterpFinalRecoil(float DeltaSeconds)
{
	//Interps recoil back to zero
	FinalRecoilTransform = UKismetMathLibrary::TInterpTo(FinalRecoilTransform, FTransform(), DeltaSeconds, 10.f);
}

void UIKAnimInstance::InterpRecoil(float DeltaSeconds)
{
	//Interps to Recoil position 
	RecoilTransform = UKismetMathLibrary::TInterpTo(RecoilTransform, FinalRecoilTransform, DeltaSeconds, 10.f);
}

void UIKAnimInstance::Fire()
{
	float FirearmWeight = CurrentWeapon->GetWeaponWeight();
	float FirearmLateralRecoil = CurrentWeapon->GetWeaponLateralRecoil();
	float FirearmVerticalRecoil = CurrentWeapon->GetWeaponVerticalRecoil();
	//UE_LOG(LogTemp, Log, TEXT("Fire Animation Called"));
	FVector RandomRecoilLoc = FinalRecoilTransform.GetLocation();
	RandomRecoilLoc += FVector(FMath::RandRange(RecoilLocationXMin, RecoilLocationXMax), /* Forward and back */
								FMath::RandRange(RecoilLocationYMin, RecoilLocationYMax), /* To the right */
								FMath::RandRange(RecoilLocationZMin, RecoilLocationZMax)); /* Up and down */

	FRotator RandomRecoilRot = FinalRecoilTransform.GetRotation().Rotator();
	RandomRecoilRot += FRotator(FMath::RandRange(RecoilRotationXMin, RecoilRotationXMax), /* X: Movement of barrel upwards */
								FMath::RandRange(RecoilRotationYMin, RecoilRotationYMax), /* Y: Movement of barrel left to right*/
								FMath::RandRange(RecoilRotationZMin, RecoilRotationZMax)); /* Z: Roll of weapon*/
	FinalRecoilTransform.SetRotation(RandomRecoilRot.Quaternion());
	FinalRecoilTransform.SetLocation(RandomRecoilLoc);
	//UE_LOG(LogTemp, Log, TEXT("Location in X is %f, Y is %f and Z is %f"), FinalRecoilTransform.GetLocation().X, FinalRecoilTransform.GetLocation().Y, FinalRecoilTransform.GetLocation().Z);
}

void UIKAnimInstance::UpdateAnimInstanceCurrentWeapon()
{
	if (Character)
	{
		CurrentWeapon = Character->GetCurrentWeapon();
		SetSightTransform();
		SetRelativeHandTransform();
		UE_LOG(LogTemp, Log, TEXT("Set Current Weapon"));
		RecoilRotationXMin *= UKismetMathLibrary::NormalizeToRange(CurrentWeapon->GetWeaponVerticalRecoil(), 0.f, 40.f);
		RecoilRotationXMax *= UKismetMathLibrary::NormalizeToRange(CurrentWeapon->GetWeaponVerticalRecoil(), 0.f, 40.f);
		RecoilRotationYMin *= UKismetMathLibrary::NormalizeToRange(CurrentWeapon->GetWeaponLateralRecoil(), 0.f, 5.f);
		RecoilRotationYMax *= UKismetMathLibrary::NormalizeToRange(CurrentWeapon->GetWeaponLateralRecoil(), 0.f, 5.f);
		RecoilRotationZMin *= UKismetMathLibrary::NormalizeToRange(CurrentWeapon->GetWeaponLateralRecoil(), 0.f, 5.f);
		RecoilRotationZMax *= UKismetMathLibrary::NormalizeToRange(CurrentWeapon->GetWeaponLateralRecoil(), 0.f, 5.f);
		RecoilLocationXMin *= UKismetMathLibrary::NormalizeToRange(CurrentWeapon->GetWeaponVerticalRecoil(), 0.f, 40.f);
		RecoilLocationXMax *= UKismetMathLibrary::NormalizeToRange(CurrentWeapon->GetWeaponVerticalRecoil(), 0.f, 40.f);
		RecoilLocationYMin *= UKismetMathLibrary::NormalizeToRange(CurrentWeapon->GetWeaponLateralRecoil(), 0.f, 5.f);
		RecoilLocationYMax *= UKismetMathLibrary::NormalizeToRange(CurrentWeapon->GetWeaponLateralRecoil(), 0.f, 5.f);
		RecoilLocationZMin *= UKismetMathLibrary::NormalizeToRange(CurrentWeapon->GetWeaponLateralRecoil(), 0.f, 5.f);
		RecoilLocationZMax *= UKismetMathLibrary::NormalizeToRange(CurrentWeapon->GetWeaponLateralRecoil(), 0.f, 5.f);
	}
}
