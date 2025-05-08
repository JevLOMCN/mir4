#include "PaperTileMap.h"

UPaperTileMap::UPaperTileMap() {
    this->MapWidth = 4;
    this->MapHeight = 4;
    this->TileWidth = 32;
    this->TileHeight = 32;
    this->PixelsPerUnrealUnit = 1.00f;
    this->SeparationPerTileX = 0.00f;
    this->SeparationPerTileY = 0.00f;
    this->SeparationPerLayer = 4.00f;
    this->CollisionThickness = 50.00f;
    this->SpriteCollisionDomain = ESpriteCollisionMode::Use3DPhysics;
    this->ProjectionMode = ETileMapProjectionMode::Orthogonal;
    this->HexSideLength = 0;
    this->BodySetup = NULL;
    this->LayerNameIndex = 0;
}


