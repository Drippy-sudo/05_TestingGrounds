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
	return nullptr;
}
void UTheActorPool::Return(AActor* ActorToReturn)
{

}
void UTheActorPool::Add(AActor* ActorToAdd)
{

}
