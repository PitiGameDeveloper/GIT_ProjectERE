// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/Actor.h"
#include "Snappoint.h"
#include "Gadget.generated.h"

UCLASS()
class PROJECTERE_API AGadget : public AActor
{
	GENERATED_BODY()
	
public:	
	// Sets default values for this actor's properties
	AGadget();

	UPROPERTY(VisibleAnywhere, Category = "Gadget Mesh")
	UStaticMeshComponent* GadgetMesh;

	UPROPERTY(EditDefaultsOnly, Category = "Gadget Snappoint")
	ASnappoint* Snappoint;

protected:
	// Called when the game starts or when spawned
	virtual void BeginPlay() override;

public:	
	// Called every frame
	virtual void Tick(float DeltaTime) override;

};
