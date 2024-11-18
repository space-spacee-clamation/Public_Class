// Copyright Epic Games, Inc. All Rights Reserved.

#include "TencentGameMode.h"
#include "TencentCharacter.h"
#include "UObject/ConstructorHelpers.h"

ATencentGameMode::ATencentGameMode()
	: Super()
{
	// set default pawn class to our Blueprinted character
	static ConstructorHelpers::FClassFinder<APawn> PlayerPawnClassFinder(TEXT("/Game/FirstPerson/Blueprints/BP_FirstPersonCharacter"));
	DefaultPawnClass = PlayerPawnClassFinder.Class;

}
