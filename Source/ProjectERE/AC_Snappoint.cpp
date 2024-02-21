// Fill out your copyright notice in the Description page of Project Settings.


#include "AC_Snappoint.h"

// Sets default values for this component's properties
UAC_Snappoint::UAC_Snappoint()
{
	// Set this component to be initialized when the game starts, and to be ticked every frame.  You can turn these features
	// off to improve performance if you don't need them.
	PrimaryComponentTick.bCanEverTick = false;

	Arrow = CreateDefaultSubobject<UArrowComponent>(TEXT("Direction"));
	// ...
}


// Called when the game starts
void UAC_Snappoint::BeginPlay()
{
	Super::BeginPlay();

	// ...
	
}


// Called every frame
void UAC_Snappoint::TickComponent(float DeltaTime, ELevelTick TickType, FActorComponentTickFunction* ThisTickFunction)
{
	Super::TickComponent(DeltaTime, TickType, ThisTickFunction);

	// ...
}

