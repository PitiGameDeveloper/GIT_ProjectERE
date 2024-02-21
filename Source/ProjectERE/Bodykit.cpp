// Fill out your copyright notice in the Description page of Project Settings.


#include "Bodykit.h"

// Sets default values
ABodykit::ABodykit()
{
 	// Set this actor to call Tick() every frame.  You can turn this off to improve performance if you don't need it.
	PrimaryActorTick.bCanEverTick = true;
	BodyMesh = CreateDefaultSubobject<UStaticMeshComponent>(TEXT("Bodykit")); 
	SetRootComponent(BodyMesh);
	SnappointsNumber = 1;

	for (int i = 0; i < SnappointsNumber; i++)
	{
		UArrowComponent* Snappoint = CreateDefaultSubobject<UArrowComponent>(TEXT("Snappoint"));
		if (Snappoint)
		{
			Snappoint->AttachToComponent(BodyMesh, FAttachmentTransformRules::KeepRelativeTransform);
			Snappoints.Add(Snappoint);
		}
	}

}

// Called when the game starts or when spawned
void ABodykit::BeginPlay()
{
	Super::BeginPlay();
	
}

void ABodykit::OnConstruction(const FTransform& Transform)
{
	Super::OnConstruction(Transform);

	AddSnappoints();

}
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
#endif

void ABodykit::AddSnappoints()
{

}

// Called every frame
void ABodykit::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);

}

