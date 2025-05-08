#include "PaperTileLayer.h"

UPaperTileLayer::UPaperTileLayer() {
    this->LayerWidth = 4;
    this->LayerHeight = 4;
    this->bHiddenInGame = false;
    this->bLayerCollides = true;
    this->bOverrideCollisionThickness = false;
    this->bOverrideCollisionOffset = false;
    this->CollisionThicknessOverride = 50.00f;
    this->CollisionOffsetOverride = 0.00f;
    this->AllocatedWidth = 4;
    this->AllocatedHeight = 4;
    this->AllocatedCells.AddDefaulted(16);
    this->TileSet = NULL;
}


