#include "LandscapeSplineMeshEntry.h"

FLandscapeSplineMeshEntry::FLandscapeSplineMeshEntry() {
    this->Mesh = NULL;
    this->bCenterH = false;
    this->bScaleToWidth = false;
    this->Orientation = LSMO_XUp;
    this->ForwardAxis = ESplineMeshAxis::X;
    this->UpAxis = ESplineMeshAxis::X;
}

