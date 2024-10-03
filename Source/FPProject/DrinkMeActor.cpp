// Fill out your copyright notice in the Description page of Project Settings.


#include "DrinkMeActor.h"

// Sets default values
ADrinkMeActor::ADrinkMeActor()
{
 	// Set this actor to call Tick() every frame.  You can turn this off to improve performance if you don't need it.
	PrimaryActorTick.bCanEverTick = true;

	Point = CreateDefaultSubobject<UTextRenderComponent>(TEXT("TextRender"));
	Point->SetText(FText::FromString(TEXT("Drink Me")));
	Point->SetupAttachment(RootComponent);

}

// Called when the game starts or when spawned
void ADrinkMeActor::BeginPlay()
{
	Super::BeginPlay();
	
}

// Called every frame
void ADrinkMeActor::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);

}

