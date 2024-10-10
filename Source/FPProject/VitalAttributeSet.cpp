// Fill out your copyright notice in the Description page of Project Settings.


#include "VitalAttributeSet.h"
#include "GameplayEffect.h"
#include "GameplayEffectExtension.h"

void UVitalAttributeSet::PreAttributeChange(const FGameplayAttribute& Attribute, float& NewValue)
{
	if (Attribute == GetHealthAttribute())
	{
		NewValue = FMath::Clamp(NewValue, 0.0f, MaxHealth.GetCurrentValue());
	}
	else if (Attribute == GetHungerAttribute())
	{
		NewValue = FMath::Clamp(NewValue, 0.0f, MaxHunger.GetCurrentValue());
	};
}