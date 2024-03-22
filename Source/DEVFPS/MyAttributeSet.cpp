// Fill out your copyright notice in the Description page of Project Settings.


#include "MyAttributeSet.h"


float UMyAttributeSet::GetHealth() const
{
    return FMath::Max(Health.GetCurrentValue(), 0.0f);
}

void UMyAttributeSet::SetHealth(float NewVal)
{
    // Do not accept values lower than zero.
    NewVal = FMath::Max(NewVal, 0.0f);

    
    UAbilitySystemComponent* ASC = GetOwningAbilitySystemComponent();
    if (ensure(ASC))
    {
        ASC->SetNumericAttributeBase(GetHealthAttribute(), NewVal);
    }
}


float UMyAttributeSet::GetDamage() const
{
    return FMath::Max(Damage.GetCurrentValue(), 0.0f);
}

void UMyAttributeSet::SetDamage(float NewVal)
{
    // Do not accept values lower than zero.
    NewVal = FMath::Max(NewVal, 0.0f);


    UAbilitySystemComponent* ASC = GetOwningAbilitySystemComponent();
    if (ensure(ASC))
    {
        ASC->SetNumericAttributeBase(GetDamageAttribute(), NewVal);
    }
}