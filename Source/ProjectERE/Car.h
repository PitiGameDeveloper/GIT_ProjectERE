// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/Actor.h"
#include "Bodykit.h"
#include "Gadget.h"
#include "Car.generated.h"

UCLASS()
class PROJECTERE_API ACar : public AActor
{
	GENERATED_BODY()
	
public:	
	// Sets default values for this actor's properties
	ACar();

	UPROPERTY()
	ABodykit* Bodykit;

	UPROPERTY()
	TArray<AGadget*> Gadgets;

protected:
	// Called when the game starts or when spawned
	virtual void BeginPlay() override;

public:	
	// Called every frame
	virtual void Tick(float DeltaTime) override;

	UFUNCTION(BlueprintImplementableEvent)
	void Link(AGadget* Gadget, ABodykit* Body);

};
