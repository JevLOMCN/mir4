#include "ProceduralFoliageVolume.h"
#include "ProceduralFoliageComponent.h"

AProceduralFoliageVolume::AProceduralFoliageVolume(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->ProceduralComponent = CreateDefaultSubobject<UProceduralFoliageComponent>(TEXT("ProceduralFoliageComponent"));
}


