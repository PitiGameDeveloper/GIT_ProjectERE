// Fill out your copyright notice in the Description page of Project Settings.


#include "MyCharacterTest.h"

// Sets default values
AMyCharacterTest::AMyCharacterTest()
{
 	// Set this character to call Tick() every frame.  You can turn this off to improve performance if you don't need it.
	PrimaryActorTick.bCanEverTick = true;

}

// Called when the game starts or when spawned
void AMyCharacterTest::BeginPlay()
{
	Super::BeginPlay();
	
}

// Called every frame
void AMyCharacterTest::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);
	
	if (GEngine)
	{
		
			GEngine->AddOnScreenDebugMessage(-1, 15.0f, FColor::Yellow, TEXT("Some debug message!"));
	}

}

// Called to bind functionality to input
void AMyCharacterTest::SetupPlayerInputComponent(UInputComponent* PlayerInputComponent)
{
	Super::SetupPlayerInputComponent(PlayerInputComponent);

}

