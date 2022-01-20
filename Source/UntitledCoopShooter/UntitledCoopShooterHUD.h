// Copyright Epic Games, Inc. All Rights Reserved.

#pragma once 

#include "CoreMinimal.h"
#include "GameFramework/HUD.h"
#include "UntitledCoopShooterHUD.generated.h"

UCLASS()
class AUntitledCoopShooterHUD : public AHUD
{
	GENERATED_BODY()

public:
	AUntitledCoopShooterHUD();

	/** Primary draw call for the HUD */
	virtual void DrawHUD() override;

private:
	/** Crosshair asset pointer */
	class UTexture2D* CrosshairTex;

};

