#include "ClothLODDataNv.h"
#include "ClothPhysicalMeshDataNv.h"

UClothLODDataNv::UClothLODDataNv() {
    this->PhysicalMeshData = CreateDefaultSubobject<UClothPhysicalMeshDataNv>(TEXT("ClothPhysicalMeshDataNv"));
}


