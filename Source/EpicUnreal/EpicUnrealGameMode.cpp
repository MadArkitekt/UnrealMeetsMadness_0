// Copyright 1998-2017 Epic Games, Inc. All Rights Reserved.

#include "EpicUnrealGameMode.h"
#include "EpicUnrealHUD.h"
#include "EpicUnrealCharacter.h"
#include "UObject/ConstructorHelpers.h"

AEpicUnrealGameMode::AEpicUnrealGameMode()
	: Super()
{
	// set default pawn class to our Blueprinted character
	static ConstructorHelpers::FClassFinder<APawn> PlayerPawnClassFinder(TEXT("/Game/FirstPersonCPP/Blueprints/FirstPersonCharacter"));
	DefaultPawnClass = PlayerPawnClassFinder.Class;

	// use our custom HUD class
	HUDClass = AEpicUnrealHUD::StaticClass();
}
