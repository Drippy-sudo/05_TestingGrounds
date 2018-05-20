// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "S05_TestingGroundsGameMode.h"
#include "InfiniteTerrianGameMode.generated.h"

/**
 * 
 */
UCLASS()
class S05_TESTINGGROUNDS_API AInfiniteTerrianGameMode : public AS05_TestingGroundsGameMode
{
	GENERATED_BODY()
	
public:

	AInfiniteTerrianGameMode();

	UFUNCTION(BlueprintCallable, Category = "Bounds Pool")
	void PopulateBoundsVolumePool();

protected:
	UPROPERTY(VisibleAnywhere, BlueprintReadOnly, Category = "Pool")
	class UTheActorPool* NavMeshBoundsVolumePool;

private:
	void AddToPool(class ANavMeshBoundsVolume *VolumeToAdd);
	
	
	
};
