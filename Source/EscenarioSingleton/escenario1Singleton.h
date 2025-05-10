// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/Actor.h"
#include "escenario1Singleton.generated.h"

UCLASS()
class ESCENARIOSINGLETON_API Aescenario1Singleton : public AActor
{
	GENERATED_BODY()
	
public:	
	// Sets default values for this actor's properties
	Aescenario1Singleton();

	UPROPERTY()
	Aescenario1Singleton* InstanciaEscenario;

protected:
	// Called when the game starts or when spawned
	virtual void BeginPlay() override;

	TArray<AActor*> InstanciasSingleton;

public:	
	// Called every frame
	virtual void Tick(float DeltaTime) override;

};
