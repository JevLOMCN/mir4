#include "AnimNode_RotationOffsetBlendSpace.h"

FAnimNode_RotationOffsetBlendSpace::FAnimNode_RotationOffsetBlendSpace() {
    this->LODThreshold = 0;
    this->Alpha = 0.00f;
    this->AlphaInputType = EAnimAlphaInputType::Float;
    this->bAlphaBoolEnabled = false;
}

