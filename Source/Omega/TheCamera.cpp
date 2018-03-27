// Fill out your copyright notice in the Description page of Project Settings.

#include "TheCamera.h"
#include "Camera/CameraComponent.h"

// Sets default values
ATheCamera::ATheCamera()
{
	// Set this actor to call Tick() every frame.  You can turn this off to improve performance if you don't need it.
	PrimaryActorTick.bCanEverTick = true;
	CameraObject = CreateDefaultSubobject<UCameraComponent>(TEXT("TheCamera"));

		
}

// Called when the game starts or when spawned
void ATheCamera::BeginPlay()
{
	Super::BeginPlay();
	//UWorld* const World = GetWorld();
	//World->SpawnActor<this>();
	//AActor*Camera = World->SpawnActor(this, FVector(0.f, 260.0f, 200.0f), FRotator(0.f, 0.f, 90.f), FActorSpawnParameters);
}

// Called every frame
void ATheCamera::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);
	


}

