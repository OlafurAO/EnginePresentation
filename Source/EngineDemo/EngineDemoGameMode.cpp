// Copyright 1998-2019 Epic Games, Inc. All Rights Reserved.

#include "EngineDemoGameMode.h"
#include "EngineDemoCharacter.h"
#include "UObject/ConstructorHelpers.h"

AEngineDemoGameMode::AEngineDemoGameMode()
{
	// set default pawn class to our Blueprinted character
	static ConstructorHelpers::FClassFinder<APawn> PlayerPawnBPClass(TEXT("/Game/ThirdPersonCPP/Blueprints/ThirdPersonCharacter"));
	if (PlayerPawnBPClass.Class != NULL)
	{
		DefaultPawnClass = PlayerPawnBPClass.Class;
	}
}
