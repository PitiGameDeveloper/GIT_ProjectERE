// Fill out your copyright notice in the Description page of Project Settings.


#include "Bodykit.h"
#include "Components/ArrowComponent.h"
#include "Engine/World.h"
#include "Engine/DataTable.h"
#include "UObject/UObjectIterator.h"

// Sets default values
ABodykit::ABodykit()
{
 	// Set this actor to call Tick() every frame.  You can turn this off to improve performance if you don't need it.
	PrimaryActorTick.bCanEverTick = true;

	// Crear el componente Skeletal Mesh y adjuntarlo al RootComponent
    SkeletalMeshComponent = CreateDefaultSubobject<USkeletalMeshComponent>(TEXT("SkeletalMeshComponent"));
    RootComponent = SkeletalMeshComponent;

	

}

// Called when the game starts or when spawned
void ABodykit::BeginPlay()
{
	Super::BeginPlay();

	
	
}

void ABodykit::OnConstruction(const FTransform& Transform)
{
	Super::OnConstruction(Transform);

	if (IsValid(SkeletalMeshComponent->SkeletalMesh))
	{
		USkeletalMesh* SkeletalMesh = SkeletalMeshComponent->SkeletalMesh;
		int socketsNumber = SkeletalMesh->NumSockets();
		UE_LOG(LogTemp, Log, TEXT("Num de sokets = %d"), socketsNumber);
	}
}

// Called every frame
void ABodykit::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);

}

