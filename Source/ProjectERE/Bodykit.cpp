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
	BodyMesh = CreateDefaultSubobject<USkeletalMeshComponent>(TEXT("Bodykit")); 
	SetRootComponent(BodyMesh);
	

}

// Called when the game starts or when spawned
void ABodykit::BeginPlay()
{
	Super::BeginPlay();
	
}

void ABodykit::OnConstruction(const FTransform& Transform)
{
	Super::OnConstruction(Transform);
}
/*
#if WITH_EDITOR
void ABodykit::PostEditChangeProperty(FPropertyChangedEvent& PropertyChangedEvent)
{
	Super::PostEditChangeProperty(PropertyChangedEvent);

	SnappointsNumber = FMath::Max(SnappointsNumber, 0);

	if (PropertyChangedEvent.GetPropertyName() == GET_MEMBER_NAME_CHECKED(ABodykit, SnappointsNumber))
	{
		if (GetWorld() && !GetWorld()->IsPlayInEditor())
		{
			for (TObjectIterator<UBlueprint> Itr; Itr; ++Itr)
			{
				if (Itr->GeneratedClass == GetClass())
				{
					Itr->MarkPackageDirty();
				}
			}
		}
	}

}
#endif*/

void ABodykit::AddSnappoints()
{

}

// Called every frame
void ABodykit::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);

}

