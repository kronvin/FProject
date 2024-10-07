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
};

void UVitalAttributeSet::PostGameplayEffectExecute(const FGameplayEffectModCallbackData& Data)
{
	if (Data.EvaluatedData.Attribute == GetHealthAttribute())
	{
		float NewHealth = GetHealth();
		if (NewHealth <= 0.0f)
		{
			// Event on death
		};
	}
	else if (Data.EvaluatedData.Attribute == GetHungerAttribute())
	{
		float NewHunger = GetHunger();

		if (NewHunger <= 0.0f)
		{
			float CurrentHealth = GetHealth();
			float HealthDecrease = 10.0f;

			SetHealth(CurrentHealth - HealthDecrease);

			if (GetHealth() < 0.0f)
			{
				SetHealth(0.0f);
			};
		};
	};
}