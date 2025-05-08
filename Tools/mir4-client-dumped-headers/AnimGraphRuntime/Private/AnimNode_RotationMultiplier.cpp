#include "AnimNode_RotationMultiplier.h"

FAnimNode_RotationMultiplier::FAnimNode_RotationMultiplier() {
    this->Multiplier = 0.00f;
    this->RotationAxisToRefer = BA_X;
    this->bIsAdditive = false;
}

