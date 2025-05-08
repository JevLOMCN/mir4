#include "AnimNode_CopyBoneDelta.h"

FAnimNode_CopyBoneDelta::FAnimNode_CopyBoneDelta() {
    this->bCopyTranslation = false;
    this->bCopyRotation = false;
    this->bCopyScale = false;
    this->CopyMode = CopyBoneDeltaMode::Accumulate;
    this->TranslationMultiplier = 0.00f;
    this->RotationMultiplier = 0.00f;
    this->ScaleMultiplier = 0.00f;
}

