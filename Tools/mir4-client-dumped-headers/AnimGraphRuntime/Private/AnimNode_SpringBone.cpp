#include "AnimNode_SpringBone.h"

FAnimNode_SpringBone::FAnimNode_SpringBone() {
    this->MaxDisplacement = 0.00f;
    this->SpringStiffness = 0.00f;
    this->SpringDamping = 0.00f;
    this->ErrorResetThresh = 0.00f;
    this->bLimitDisplacement = false;
    this->bTranslateX = false;
    this->bTranslateY = false;
    this->bTranslateZ = false;
    this->bRotateX = false;
    this->bRotateY = false;
    this->bRotateZ = false;
}

