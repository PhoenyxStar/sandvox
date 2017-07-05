// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/PlayerController.h"
#include "VoxController.generated.h"

/**
 * 
 */
UCLASS()
class SANDVOX_API AVoxController : public APlayerController
{
	GENERATED_BODY()

public:
	AVoxController();
	
protected:
	// Called when the game starts or when spawned
	virtual void BeginPlay() override;

public:
	// Called every frame
	virtual void Tick(float DeltaSeconds) override;
	
};
