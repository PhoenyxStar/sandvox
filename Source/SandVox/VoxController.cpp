// Fill out your copyright notice in the Description page of Project Settings.

#include "VoxController.h"

AVoxController::AVoxController() {
	// Set this pawn to call Tick() every frame.
	PrimaryActorTick.bCanEverTick = true;
}

void AVoxController::BeginPlay() {

}

void AVoxController::Tick(float DeltaSeconds) {
	Super::Tick(DeltaSeconds); // Call parent class tick function 
}
