// Copyright Epic Games, Inc. All Rights Reserved.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/GameModeBase.h"
#include "Agile_4TestGameModeBase.generated.h"

/**
 * 
 */
UCLASS()
class AGILE_4TEST_API AAgile_4TestGameModeBase : public AGameModeBase
{
	GENERATED_BODY()
	
public: 
	virtual void PawnKilled(APawn* PawnKilled);
	
};
