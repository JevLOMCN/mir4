#include "AnimNode_BlendSpacePlayer.h"

FAnimNode_BlendSpacePlayer::FAnimNode_BlendSpacePlayer() {
    this->X = 0.00f;
    this->Y = 0.00f;
    this->Z = 0.00f;
    this->PlayRate = 0.00f;
    this->bLoop = false;
    this->bResetPlayTimeWhenBlendSpaceChanges = false;
    this->StartPosition = 0.00f;
    this->BlendSpace = NULL;
    this->PreviousBlendSpace = NULL;
}

