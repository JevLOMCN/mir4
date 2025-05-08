#include "ProceduralFoliageSpawner.h"

UProceduralFoliageSpawner::UProceduralFoliageSpawner() {
    this->RandomSeed = 42;
    this->TileSize = 10000.00f;
    this->NumUniqueTiles = 10;
    this->MinimumQuadTreeSize = 100.00f;
    this->bNeedsSimulation = false;
}

void UProceduralFoliageSpawner::Simulate(int32 NumSteps) {
}


