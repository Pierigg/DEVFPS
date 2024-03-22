// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "AbilitySystemComponent.h"
#include "DEVFPSMyAbilitySystemComponent.generated.h"

/**
 * 
 */
UCLASS(CLassGroup=(Custom), meta=(BlueprintSpawnableComponent))
class DEVFPS_API UDEVFPSMyAbilitySystemComponent : public UAbilitySystemComponent
{
	GENERATED_BODY()

public:
	UDEVFPSMyAbilitySystemComponent(const FObjectInitializer& ObjectInitializer);
	
};
