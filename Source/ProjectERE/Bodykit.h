// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/Actor.h"
#include "Snappoint.h"
#include "Components/ArrowComponent.h" 

#include "Bodykit.generated.h"


UCLASS()
class PROJECTERE_API ABodykit : public AActor
{
	GENERATED_BODY()
	
public:	
	ABodykit();

	UPROPERTY(EditDefaultsOnly, Category = "Bodykit name")
	FString BodyName;

	UPROPERTY(VisibleAnywhere, Category = "BodyKit Stats")
	int Healthpoints;

	UPROPERTY(VisibleAnywhere, Category = "BodyKit Stats")
	int Energy;

	UPROPERTY(VisibleAnywhere, Category = "BodyKit Stats")
	int Tier;

	UPROPERTY(VisibleAnywhere, Category = "BodyKit Mesh")
	UStaticMeshComponent* BodyMesh = nullptr;

	UPROPERTY(EditDefaultsOnly, Category = "Snappoints")
	TArray<UArrowComponent*> Snappoints;

	UPROPERTY(VisibleAnywhere, Category = "BodyKit Stats")
	int SnappointsNumber;



protected:
	virtual void BeginPlay() override;

public:	
	virtual void Tick(float DeltaTime) override;

private:

	

};
