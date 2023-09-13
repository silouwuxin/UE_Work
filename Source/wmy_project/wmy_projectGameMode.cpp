// Copyright Epic Games, Inc. All Rights Reserved.

#include "wmy_projectGameMode.h"
#include "wmy_projectHUD.h"
#include "wmy_projectCharacter.h"
#include "UObject/ConstructorHelpers.h"

Awmy_projectGameMode::Awmy_projectGameMode()
	: Super()
{
	// set default pawn class to our Blueprinted character
	static ConstructorHelpers::FClassFinder<APawn> PlayerPawnClassFinder(TEXT("/Game/FirstPersonCPP/Blueprints/FirstPersonCharacter"));
	DefaultPawnClass = PlayerPawnClassFinder.Class;

	// use our custom HUD class
	HUDClass = Awmy_projectHUD::StaticClass();
}
