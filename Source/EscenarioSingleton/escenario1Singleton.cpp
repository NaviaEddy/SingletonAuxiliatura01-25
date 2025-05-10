// Fill out your copyright notice in the Description page of Project Settings.


#include "escenario1Singleton.h"
#include "Kismet/GameplayStatics.h"

// Sets default values
Aescenario1Singleton::Aescenario1Singleton()
{
 	// Set this actor to call Tick() every frame.  You can turn this off to improve performance if you don't need it.
	PrimaryActorTick.bCanEverTick = true;

	UGameplayStatics::GetAllActorsOfClass(GetWorld(),
		Aescenario1Singleton::StaticClass(), InstanciasSingleton);

	if (InstanciasSingleton.Num() > 1) {
		InstanciaEscenario = Cast<Aescenario1Singleton>(InstanciasSingleton[0]);
		GEngine->AddOnScreenDebugMessage(-1, 5.f, FColor::Silver, FString::Printf(
			TEXT("%s ya existe"), *InstanciaEscenario->GetName()
		));
		Destroy();
	}

}

// Called when the game starts or when spawned
void Aescenario1Singleton::BeginPlay()
{
	Super::BeginPlay();
	
}

// Called every frame
void Aescenario1Singleton::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);

}

