// Copyright Epic Games, Inc. All Rights Reserved.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/GameModeBase.h"
#include "EscenarioSingletonGameMode.generated.h"

UCLASS(MinimalAPI)
class AEscenarioSingletonGameMode : public AGameModeBase
{
	GENERATED_BODY()

public:
	AEscenarioSingletonGameMode();

protected:
	virtual void BeginPlay() override;

	class Aescenario1Singleton* CrearEscenario;

public:
	virtual void Tick(float DeltaTime) override;
};



