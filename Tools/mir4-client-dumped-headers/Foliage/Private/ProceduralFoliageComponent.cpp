#include "ProceduralFoliageComponent.h"

UProceduralFoliageComponent::UProceduralFoliageComponent(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->FoliageSpawner = NULL;
    this->TileOverlap = 0.00f;
    this->SpawningVolume = NULL;
}


