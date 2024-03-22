// Copyright Epic Games, Inc. All Rights Reserved.

#include "DEVFPSGameMode.h"
#include "DEVFPSCharacter.h"
#include "UObject/ConstructorHelpers.h"

ADEVFPSGameMode::ADEVFPSGameMode()
	: Super()
{
	// set default pawn class to our Blueprinted character
	static ConstructorHelpers::FClassFinder<APawn> PlayerPawnClassFinder(TEXT("/Game/FirstPerson/Blueprints/BP_FirstPersonCharacter"));
	DefaultPawnClass = PlayerPawnClassFinder.Class;

}
