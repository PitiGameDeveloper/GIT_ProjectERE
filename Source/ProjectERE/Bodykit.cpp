// Fill out your copyright notice in the Description page of Project Settings.


#include "Bodykit.h"

// Sets default values
ABodykit::ABodykit()
{
 	// Set this actor to call Tick() every frame.  You can turn this off to improve performance if you don't need it.
	PrimaryActorTick.bCanEverTick = true;
	BodyMesh = CreateDefaultSubobject<UStaticMeshComponent>(TEXT(" Bodykit")); 
	SetRootComponent(BodyMesh);

}

// Called when the game starts or when spawned
void ABodykit::BeginPlay()
{
	Super::BeginPlay();
	
}

// Called every frame
void ABodykit::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);

}

