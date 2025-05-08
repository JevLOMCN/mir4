#include "SpriteGeometryCollection.h"

FSpriteGeometryCollection::FSpriteGeometryCollection() {
    this->GeometryType = ESpritePolygonMode::SourceBoundingBox;
    this->PixelsPerSubdivisionX = 0;
    this->PixelsPerSubdivisionY = 0;
    this->bAvoidVertexMerging = false;
    this->AlphaThreshold = 0.00f;
    this->DetailAmount = 0.00f;
    this->SimplifyEpsilon = 0.00f;
}

