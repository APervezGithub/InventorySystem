// Copyright Epic Games, Inc. All Rights Reserved.

#include "CookingGameGameMode.h"
#include "CookingGameCharacter.h"
#include "UObject/ConstructorHelpers.h"

ACookingGameGameMode::ACookingGameGameMode()
{
	// set default pawn class to our Blueprinted character
	static ConstructorHelpers::FClassFinder<APawn> PlayerPawnBPClass(TEXT("/Game/ThirdPersonCPP/Blueprints/ThirdPersonCharacter"));
	if (PlayerPawnBPClass.Class != NULL)
	{
		DefaultPawnClass = PlayerPawnBPClass.Class;
	}
}
