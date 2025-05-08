#include "GrassVariety.h"

FGrassVariety::FGrassVariety() {
    this->GrassMesh = NULL;
    this->bUseGrid = false;
    this->PlacementJitter = 0.00f;
    this->MinLOD = 0;
    this->Scaling = EGrassScaling::Uniform;
    this->RandomRotation = false;
    this->AlignToSurface = false;
    this->bUseLandscapeLightmap = false;
    this->bReceivesDecals = false;
    this->bCastDynamicShadow = false;
    this->bKeepInstanceBufferCPUCopy = false;
}

