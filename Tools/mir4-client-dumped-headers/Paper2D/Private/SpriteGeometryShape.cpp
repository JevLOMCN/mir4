#include "SpriteGeometryShape.h"

FSpriteGeometryShape::FSpriteGeometryShape() {
    this->ShapeType = ESpriteShapeType::Box;
    this->Rotation = 0.00f;
    this->bNegativeWinding = false;
}

