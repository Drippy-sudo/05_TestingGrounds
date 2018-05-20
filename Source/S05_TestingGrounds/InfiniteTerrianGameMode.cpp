// Fill out your copyright notice in the Description page of Project Settings.

#include "InfiniteTerrianGameMode.h"
#include "AI/Navigation/NavMeshBoundsVolume.h"
#include "EngineUtils.h"
#include "TheActorPool.h"

AInfiniteTerrianGameMode::AInfiniteTerrianGameMode()
{
	NavMeshBoundsVolumePool = CreateDefaultSubobject<UTheActorPool>(FName("Nav Mesh Bounds Volume Pool"));
}

void AInfiniteTerrianGameMode::PopulateBoundsVolumePool()
{
	auto VolumeIterator = TActorIterator<ANavMeshBoundsVolume> (GetWorld());
	while (VolumeIterator)
	{
		AddToPool(*VolumeIterator);
		++VolumeIterator;
	}
}

void AInfiniteTerrianGameMode::AddToPool(class ANavMeshBoundsVolume *VolumeToAdd)
{
	NavMeshBoundsVolumePool->Add(VolumeToAdd);
}
