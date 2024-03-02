// Fill out your copyright notice in the Description page of Project Settings.


#include "Drill.h"

ADrill::ADrill()
{
	PrimaryActorTick.bCanEverTick = true;

	SkeletalMeshComponent = CreateDefaultSubobject<USkeletalMeshComponent>(TEXT("SkeletalMeshComponent"));
	RootComponent = SkeletalMeshComponent;

}

void ADrill::BeginPlay()
{
}

void ADrill::Tick(float DeltaTime)
{
}
