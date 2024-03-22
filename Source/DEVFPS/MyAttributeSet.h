// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "AttributeSet.h"
#include "DEVFPSMyAbilitySystemComponent.h"
#include "MyAttributeSet.generated.h"


/**
 * 
 */
UCLASS()
class DEVFPS_API UMyAttributeSet : public UAttributeSet
{
	GENERATED_BODY()
	
public:

	UPROPERTY(EditAnywhere, BlueprintReadOnly)
	FGameplayAttributeData Health;


	UPROPERTY(EditAnywhere, BlueprintReadOnly)
	FGameplayAttributeData Damage;

	GAMEPLAYATTRIBUTE_PROPERTY_GETTER(UMyAttributeSet, Health);
	float GetHealth()const;
	void SetHealth(float NewVal);
	GAMEPLAYATTRIBUTE_VALUE_INITTER(Health);

	GAMEPLAYATTRIBUTE_PROPERTY_GETTER(UMyAttributeSet, Damage);
	float GetDamage()const;
	void SetDamage(float NewVal);
	GAMEPLAYATTRIBUTE_VALUE_INITTER(Damage);
};
