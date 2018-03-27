// Copyright 1998-2017 Epic Games, Inc. All Rights Reserved.

#include "OmegaGameMode.h"
#include "OmegaCharacter.h"

AOmegaGameMode::AOmegaGameMode()
{
	// Set default pawn class to our character
	DefaultPawnClass = AOmegaCharacter::StaticClass();	
}
