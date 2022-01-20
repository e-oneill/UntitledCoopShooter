// Copyright Epic Games, Inc. All Rights Reserved.

#include "UntitledCoopShooterGameMode.h"
#include "UntitledCoopShooterHUD.h"
#include "UntitledCoopShooterCharacter.h"
#include "UObject/ConstructorHelpers.h"

AUntitledCoopShooterGameMode::AUntitledCoopShooterGameMode()
	: Super()
{
	// set default pawn class to our Blueprinted character
	//static ConstructorHelpers::FClassFinder<APawn> PlayerPawnClassFinder(TEXT("/Game/FirstPersonCPP/Blueprints/FirstPersonCharacter"));
	//DefaultPawnClass = PlayerPawnClassFinder.Class;

	//// use our custom HUD class
	//HUDClass = AUntitledCoopShooterHUD::StaticClass();
}
