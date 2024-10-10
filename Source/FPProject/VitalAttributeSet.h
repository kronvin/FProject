// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "FPAttributeSet.h"
#include "VitalAttributeSet.generated.h"

/**
 * 
 */
UCLASS()
class FPPROJECT_API UVitalAttributeSet : public UFPAttributeSet
{
	GENERATED_BODY()

public:
	
	UPROPERTY(BlueprintReadOnly)
	FGameplayAttributeData Health;
	ATTRIBUTE_ACCESSORS(UVitalAttributeSet, Health);

	UPROPERTY(BlueprintReadOnly)
	FGameplayAttributeData MaxHealth;
	ATTRIBUTE_ACCESSORS(UVitalAttributeSet, MaxHealth);

	virtual void PreAttributeChange(const FGameplayAttribute& Attribute, float& NewValue) override;

	UPROPERTY(BlueprintReadOnly)
	FGameplayAttributeData Hunger;
	ATTRIBUTE_ACCESSORS(UVitalAttributeSet, Hunger);

	UPROPERTY(BlueprintReadOnly)
	FGameplayAttributeData MaxHunger;
	ATTRIBUTE_ACCESSORS(UVitalAttributeSet, MaxHunger);

};
