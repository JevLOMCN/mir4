#include "EnvOverlapData.h"

FEnvOverlapData::FEnvOverlapData() {
    this->ExtentX = 0.00f;
    this->ExtentY = 0.00f;
    this->ExtentZ = 0.00f;
    this->OverlapChannel = ECC_WorldStatic;
    this->OverlapShape = EEnvOverlapShape::Box;
    this->bOnlyBlockingHits = false;
    this->bOverlapComplex = false;
    this->bSkipOverlapQuerier = false;
}

