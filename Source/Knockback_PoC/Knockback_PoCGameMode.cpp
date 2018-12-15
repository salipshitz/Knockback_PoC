// Copyright 1998-2018 Epic Games, Inc. All Rights Reserved.

#include "Knockback_PoCGameMode.h"
#include "Knockback_PoCHUD.h"
#include "Knockback_PoCCharacter.h"
#include "UObject/ConstructorHelpers.h"

AKnockback_PoCGameMode::AKnockback_PoCGameMode()
	: Super()
{
	// set default pawn class to our Blueprinted character
	static ConstructorHelpers::FClassFinder<APawn> PlayerPawnClassFinder(TEXT("/Game/FirstPersonCPP/Blueprints/FirstPersonCharacter"));
	DefaultPawnClass = PlayerPawnClassFinder.Class;

	// use our custom HUD class
	HUDClass = AKnockback_PoCHUD::StaticClass();
}
