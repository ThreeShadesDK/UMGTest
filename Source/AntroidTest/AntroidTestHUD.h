// Copyright Epic Games, Inc. All Rights Reserved.

#pragma once 

#include "CoreMinimal.h"
#include "GameFramework/HUD.h"
#include "AntroidTestHUD.generated.h"

UCLASS()
class AAntroidTestHUD : public AHUD
{
	GENERATED_BODY()

public:
	AAntroidTestHUD();

	/** Primary draw call for the HUD */
	virtual void DrawHUD() override;

private:
	/** Crosshair asset pointer */
	class UTexture2D* CrosshairTex;

};

