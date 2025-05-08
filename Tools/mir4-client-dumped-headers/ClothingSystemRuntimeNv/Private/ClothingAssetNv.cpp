#include "ClothingAssetNv.h"
#include "ClothConfigNv.h"

UClothingAssetNv::UClothingAssetNv() {
    this->ClothSimConfig = CreateDefaultSubobject<UClothConfigNv>(TEXT("ClothConfigNv"));
}


