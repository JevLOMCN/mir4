#include "AnimNode_CopyBone.h"

FAnimNode_CopyBone::FAnimNode_CopyBone() {
    this->bCopyTranslation = false;
    this->bCopyRotation = false;
    this->bCopyScale = false;
    this->ControlSpace = BCS_WorldSpace;
}

