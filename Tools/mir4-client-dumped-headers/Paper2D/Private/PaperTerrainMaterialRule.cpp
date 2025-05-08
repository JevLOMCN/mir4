#include "PaperTerrainMaterialRule.h"

FPaperTerrainMaterialRule::FPaperTerrainMaterialRule() {
    this->StartCap = NULL;
    this->EndCap = NULL;
    this->MinimumAngle = 0.00f;
    this->MaximumAngle = 0.00f;
    this->bEnableCollision = false;
    this->CollisionOffset = 0.00f;
    this->DrawOrder = 0;
}

