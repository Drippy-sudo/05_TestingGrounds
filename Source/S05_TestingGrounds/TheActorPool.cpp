// Fill out your copyright notice in the Description page of Project Settings.

#include "TheActorPool.h"


// Sets default values for this component's properties
UTheActorPool::UTheActorPool()
{
	// Set this component to be initialized when the game starts, and to be ticked every frame.  You can turn these features
	// off to improve performance if you don't need them.
	PrimaryComponentTick.bCanEverTick = true;

	// ...
}

AActor* UTheActorPool::Checkout()
{
	UE_LOG(LogTemp, Warning, TEXT("[%s] Checkout."), *GetName());
	return nullptr;
}
void UTheActorPool::Return(AActor* ActorToReturn)
{
	if (ActorToReturn == nullptr) 
	{
	UE_LOG(LogTemp, Warning, TEXT("[%s] Returned null actor."), *GetName());
	return;
	}
	UE_LOG(LogTemp, Warning, TEXT("[%s] Actor returned: {%s}."), *GetName(), *ActorToReturn->GetName());
}
void UTheActorPool::Add(AActor* ActorToAdd)
{
	if (ActorToAdd == nullptr)
	{
		UE_LOG(LogTemp, Warning, TEXT("[%s] Added null actor."), *GetName());
		return;
	}
	UE_LOG(LogTemp, Warning, TEXT("[%s] Actor added: {%s}."), *GetName(), *ActorToAdd->GetName());
}
