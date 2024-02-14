// Fill out your copyright notice in the Description page of Project Settings.


#include "Snappoint.h"

// Sets default values
ASnappoint::ASnappoint()
{
 	// Set this actor to call Tick() every frame.  You can turn this off to improve performance if you don't need it.
	PrimaryActorTick.bCanEverTick = false;

	Arrow = CreateDefaultSubobject<UArrowComponent>(TEXT("Arrow"));
	SetRootComponent(Arrow);

}

// Called when the game starts or when spawned
void ASnappoint::BeginPlay()
{
	Super::BeginPlay();
	
}

// Called every frame
void ASnappoint::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);

}

