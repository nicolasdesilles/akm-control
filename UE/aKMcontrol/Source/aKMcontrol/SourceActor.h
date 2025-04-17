// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/Actor.h"
#include "SourceActor.generated.h"

class USceneComponent;
class USCS_Node;

UCLASS()
class AKMCONTROL_API ASourceActor : public AActor
{
	GENERATED_BODY()
	
public:	
	// Sets default values for this actor's properties
	ASourceActor();

protected:
	// Called when the game starts or when spawned
	virtual void BeginPlay() override;

public:	
	// Called every frame
	virtual void Tick(float DeltaTime) override;

	// Properties

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Settings")
	FString Name;

};
