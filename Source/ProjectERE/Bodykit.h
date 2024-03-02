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

	UPROPERTY(VisibleAnywhere, Category = "BodyKit Stats")
	int Healthpoints;

	UPROPERTY(VisibleAnywhere, Category = "BodyKit Stats")
	int Energy;

	UPROPERTY(VisibleAnywhere, Category = "BodyKit Stats")
	int Tier;

	UPROPERTY(VisibleAnywhere, Category = "Snappoints")
	TArray<USkeletalMeshSocket*> Snappoints;



protected:

	virtual void BeginPlay() override;

	virtual void OnConstruction(const FTransform& Transform) override;

	// Skeletal Mesh Component para representar el modelo del coche
	UPROPERTY(VisibleAnywhere, BlueprintReadOnly, Category = "Mesh")
	class USkeletalMeshComponent* SkeletalMeshComponent;
	

public:	
	virtual void Tick(float DeltaTime) override;

private:

	

};
