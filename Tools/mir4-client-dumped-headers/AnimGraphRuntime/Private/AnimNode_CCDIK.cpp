#include "AnimNode_CCDIK.h"

FAnimNode_CCDIK::FAnimNode_CCDIK() {
    this->EffectorLocationSpace = BCS_WorldSpace;
    this->Precision = 0.00f;
    this->MaxIterations = 0;
    this->bStartFromTail = false;
    this->bEnableRotationLimit = false;
}

