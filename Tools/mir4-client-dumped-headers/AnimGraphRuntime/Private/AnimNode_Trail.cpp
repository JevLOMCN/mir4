#include "AnimNode_Trail.h"

FAnimNode_Trail::FAnimNode_Trail() {
    this->ChainLength = 0;
    this->ChainBoneAxis = EAxis::None;
    this->bInvertChainBoneAxis = false;
    this->bLimitStretch = false;
    this->bLimitRotation = false;
    this->bUsePlanarLimit = false;
    this->bActorSpaceFakeVel = false;
    this->bReorientParentToChild = false;
    this->MaxDeltaTime = 0.00f;
    this->RelaxationSpeedScale = 0.00f;
    this->StretchLimit = 0.00f;
    this->LastBoneRotationAnimAlphaBlend = 0.00f;
}

