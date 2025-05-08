#include "LandscapeSplineControlPoint.h"

ULandscapeSplineControlPoint::ULandscapeSplineControlPoint() {
    this->Width = 1000.00f;
    this->LayerWidthRatio = 1.00f;
    this->SideFalloff = 1000.00f;
    this->LeftSideFalloffFactor = 1.00f;
    this->RightSideFalloffFactor = 1.00f;
    this->LeftSideLayerFalloffFactor = 0.50f;
    this->RightSideLayerFalloffFactor = 0.50f;
    this->EndFalloff = 2000.00f;
    this->LocalMeshComponent = NULL;
}


