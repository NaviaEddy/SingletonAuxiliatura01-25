// Copyright Epic Games, Inc. All Rights Reserved.

#include "EscenarioSingletonGameMode.h"
#include "EscenarioSingletonPawn.h"
#include "escenario1Singleton.h"

AEscenarioSingletonGameMode::AEscenarioSingletonGameMode()
{
	PrimaryActorTick.bCanEverTick = true;
	// set default pawn class to our character class
	DefaultPawnClass = AEscenarioSingletonPawn::StaticClass();
}

void AEscenarioSingletonGameMode::BeginPlay()
{
	Super::BeginPlay();

	for (int i = 0; i <= 5; i++) {
		CrearEscenario = GetWorld()->SpawnActor<Aescenario1Singleton>(Aescenario1Singleton::StaticClass());
		if (CrearEscenario) {
			GEngine->AddOnScreenDebugMessage(-1, 5.f, FColor::Silver, FString::Printf(
				TEXT("%s fue creado"), *CrearEscenario->GetName()
			));
		}
		
	}
}

void AEscenarioSingletonGameMode::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);
}

