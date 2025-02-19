// Copyright Epic Games, Inc. All Rights Reserved.

#include "ProjectHunterGameMode.h"
#include "ProjectHunterCharacter.h"
#include "UObject/ConstructorHelpers.h"

AProjectHunterGameMode::AProjectHunterGameMode()
	: Super()
{
	// set default pawn class to our Blueprinted character
	static ConstructorHelpers::FClassFinder<APawn> PlayerPawnClassFinder(TEXT("/Game/FirstPerson/Blueprints/BP_FirstPersonCharacter"));
	DefaultPawnClass = PlayerPawnClassFinder.Class;

}
