// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "Engine/TriggerBox.h"
#include "PapaTriggerBox.generated.h"

/**
 * 
 */
UCLASS()
class OMEGA_API APapaTriggerBox : public ATriggerBox
{
	GENERATED_BODY()
	
 public:

	UFUNCTION(BlueprintImplementableEvent, BlueprintCallable, Category = "MoveTo")
	void MoveToVenue();
	
	
};
