// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/Actor.h"
#include "Components/ArrowComponent.h" 

#include "Snappoint.generated.h"

UCLASS()
class PROJECTERE_API ASnappoint : public AActor
{
	GENERATED_BODY()
	
public:	
	ASnappoint();

	UPROPERTY()
	class UArrowComponent* Arrow;

protected:
	// Called when the game starts or when spawned
	virtual void BeginPlay() override;

public:
	virtual void Tick(float DeltaTime) override;

};
