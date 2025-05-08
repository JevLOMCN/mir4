#include "AnimNode_SkeletalControlBase.h"

FAnimNode_SkeletalControlBase::FAnimNode_SkeletalControlBase() {
    this->LODThreshold = 0;
    this->ActualAlpha = 0.00f;
    this->AlphaInputType = EAnimAlphaInputType::Float;
    this->bAlphaBoolEnabled = false;
    this->Alpha = 0.00f;
}

