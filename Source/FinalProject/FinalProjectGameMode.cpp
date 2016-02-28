// Copyright 1998-2015 Epic Games, Inc. All Rights Reserved.

#include "FinalProject.h"
#include "FinalProjectGameMode.h"
#include "FinalProjectHUD.h"
#include "FinalProjectCharacter.h"

AFinalProjectGameMode::AFinalProjectGameMode()
	: Super()
{
	// set default pawn class to our Blueprinted character
	static ConstructorHelpers::FClassFinder<APawn> PlayerPawnClassFinder(TEXT("/Game/FirstPersonCPP/Blueprints/FirstPersonCharacter"));
	DefaultPawnClass = PlayerPawnClassFinder.Class;

	// use our custom HUD class
	HUDClass = AFinalProjectHUD::StaticClass();
}
