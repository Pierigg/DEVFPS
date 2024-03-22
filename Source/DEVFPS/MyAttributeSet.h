// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "AttributeSet.h"
#include "DEVFPSMyAbilitySystemComponent.h"
#include "MyAttributeSet.generated.h"

#define ATTRIVUTE_ACCESSORS(ClassName, PropertyNamme) \
	GAMEPLAYATTRIBUTE_PROPERTY_GETTER(ClassName, PropertyName) \
	GAMEPLAYATTRIBUTE_VALUE_GETTER(PropertyName) \
	GAMEPLAYATTRIBUTE_VALUE_SETTER(PropertyName) \
	GAMEPLAYATTRIBUTE_VALUE_INITTER(PropertyName)
/**
 * 
 */
UCLASS()
class DEVFPS_API UMyAttributeSet : public UAttributeSet
{
	GENERATED_BODY()
	
public:

	UPROPERTY(EditAnywhereBlueprintReadOnly, Category = "Health", ReplicatedUsing = OnRep_Health)
	FGameplayAttributeData Health;
	ATTRIBUTE_ACCESSORS(UMyAttributeSet, Health)
	UPROPERTY(BlueprintReadOnly, Category = "MaxHealth", ReplicatedUsing = OnRep_MaxHealth)
	FGameplayAttributeData MaxHealth;
	ATTRIBUTE_ACCESSORS(UMyAttributeSet, MaxHealth)

	/*UPROPERTY(BlueprintReadOnly, Category = "Mana", ReplicatedUsing = OnRep_Health)
	FGameplayAttributeData Mana;*/

	UFUNCTION()
	virtual void OnRep_Health(const FGameplayAttributeData& OldHealth);
	UFUNCTION()
	virtual void OnRep_MaxHealth(const FGameplayAttributeData& OldMaxHealth);

	virtual void PostGameplayEffectExecute(const FGameplayEffectModCallbackData& Data);

};
