// Copyright Epic Games, Inc. All Rights Reserved.

#include "HouseUnderIronGameMode.h"
#include "HouseUnderIronCharacter.h"
#include "UObject/ConstructorHelpers.h"

AHouseUnderIronGameMode::AHouseUnderIronGameMode()
	: Super()
{
	// set default pawn class to our Blueprinted character
	static ConstructorHelpers::FClassFinder<APawn> PlayerPawnClassFinder(TEXT("/Game/FirstPerson/Blueprints/BP_FirstPersonCharacter"));
	DefaultPawnClass = PlayerPawnClassFinder.Class;

}
