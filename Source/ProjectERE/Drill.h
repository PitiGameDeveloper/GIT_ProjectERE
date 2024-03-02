// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "Gadget.h"
#include "Components/BoxComponent.h"
#include "Drill.generated.h"

/**
 * 
 */
UCLASS()
class PROJECTERE_API ADrill : public AGadget
{
	GENERATED_BODY()

public:

	ADrill();

	UPROPERTY()
	class UBoxComponent* DrillCollision;

protected:
	// Called when the game starts or when spawned
	void BeginPlay() override;

public:
	// Called every frame
	void Tick(float DeltaTime) override;
	
};
