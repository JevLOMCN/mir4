#include "AnimNode_BlendListBase.h"

FAnimNode_BlendListBase::FAnimNode_BlendListBase() {
    this->TransitionType = EBlendListTransitionType::StandardBlend;
    this->BlendType = EAlphaBlendOption::Linear;
    this->bResetChildOnActivation = false;
    this->CustomBlendCurve = NULL;
    this->BlendProfile = NULL;
}

