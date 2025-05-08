#include "SlateBrush.h"

FSlateBrush::FSlateBrush() {
    this->ResourceObject = NULL;
    this->DrawAs = ESlateBrushDrawType::NoDrawType;
    this->Tiling = ESlateBrushTileType::NoTile;
    this->Mirroring = ESlateBrushMirrorType::NoMirror;
    this->ImageType = ESlateBrushImageType::NoImage;
    this->bIsDynamicallyLoaded = false;
    this->bHasUObject = false;
}

