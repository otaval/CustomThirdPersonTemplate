// Copyright 1998-2019 Epic Games, Inc. All Rights Reserved.

#include "ProjectIGIGameMode.h"
#include "ProjectIGICharacter.h"
#include "UObject/ConstructorHelpers.h"

AProjectIGIGameMode::AProjectIGIGameMode()
{
	// set default pawn class to our Blueprinted character
	static ConstructorHelpers::FClassFinder<APawn> PlayerPawnBPClass(TEXT("/Game/Blueprints/ThirdPersonCharacter"));
	if (PlayerPawnBPClass.Class != NULL)
	{
		DefaultPawnClass = PlayerPawnBPClass.Class;
	}
}
