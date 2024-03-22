// Copyright Epic Games, Inc. All Rights Reserved.

#include "C_Alexandre_ProgGameMode.h"
#include "C_Alexandre_ProgCharacter.h"
#include "UObject/ConstructorHelpers.h"

AC_Alexandre_ProgGameMode::AC_Alexandre_ProgGameMode()
{
	// set default pawn class to our Blueprinted character
	static ConstructorHelpers::FClassFinder<APawn> PlayerPawnBPClass(TEXT("/Game/ThirdPerson/Blueprints/BP_ThirdPersonCharacter"));
	if (PlayerPawnBPClass.Class != NULL)
	{
		DefaultPawnClass = PlayerPawnBPClass.Class;
	}
}
