// Copyright Epic Games, Inc. All Rights Reserved.

#include "Shooter7GameMode.h"
#include "Shooter7Character.h"
#include "UObject/ConstructorHelpers.h"

AShooter7GameMode::AShooter7GameMode()
	: Super()
{
	// set default pawn class to our Blueprinted character
	static ConstructorHelpers::FClassFinder<APawn> PlayerPawnClassFinder(TEXT("/Game/FirstPerson/Blueprints/BP_FirstPersonCharacter"));
	DefaultPawnClass = PlayerPawnClassFinder.Class;

}
