// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "Gadget.h"
#include "Wheel.generated.h"

/**
 * 
 */
UCLASS()
class PROJECTERE_API AWheel : public AGadget
{
	GENERATED_BODY()
	
public:

	AWheel();


protected:
	// Called when the game starts or when spawned
	virtual void BeginPlay() override;

public:
	// Called every frame
	virtual void Tick(float DeltaTime) override;
};
