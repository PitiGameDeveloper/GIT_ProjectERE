// Copyright Epic Games, Inc. All Rights Reserved.

#include "ProjectEREGameMode.h"
#include "ProjectERECharacter.h"
#include "UObject/ConstructorHelpers.h"

AProjectEREGameMode::AProjectEREGameMode()
{
	// set default pawn class to our Blueprinted character
	static ConstructorHelpers::FClassFinder<APawn> PlayerPawnBPClass(TEXT("/Game/ThirdPerson/Blueprints/BP_ThirdPersonCharacter"));
	if (PlayerPawnBPClass.Class != NULL)
	{
		DefaultPawnClass = PlayerPawnBPClass.Class;
	}
}
