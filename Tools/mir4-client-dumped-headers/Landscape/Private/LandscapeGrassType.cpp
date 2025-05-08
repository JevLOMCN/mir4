#include "LandscapeGrassType.h"

ULandscapeGrassType::ULandscapeGrassType() {
    this->bEnableDensityScaling = true;
    this->GrassMesh = NULL;
    this->GrassDensity = 400.00f;
    this->PlacementJitter = 1.00f;
    this->StartCullDistance = 10000;
    this->EndCullDistance = 10000;
    this->RandomRotation = true;
    this->AlignToSurface = true;
}


