#include "AnimNode_TwoWayBlend.h"

FAnimNode_TwoWayBlend::FAnimNode_TwoWayBlend() {
    this->AlphaInputType = EAnimAlphaInputType::Float;
    this->bAlphaBoolEnabled = false;
    this->bResetChildOnActivation = false;
    this->Alpha = 0.00f;
}

