// Copyright Epic Games, Inc. All Rights Reserved.


#include "UdemyUEGameModeBase.h"
#include "SandboxPawn.h"
#include "SandboxPlayerController.h"

AUdemyUEGameModeBase::AUdemyUEGameModeBase()
{
	DefaultPawnClass = ASandboxPawn::StaticClass();
	PlayerControllerClass = ASandboxPlayerController::StaticClass();
}
