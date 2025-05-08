#include "AnimNode_LookAt.h"

FAnimNode_LookAt::FAnimNode_LookAt() {
    this->bUseLookUpAxis = false;
    this->InterpolationType = EInterpolationBlend::Linear;
    this->LookAtClamp = 0.00f;
    this->InterpolationTime = 0.00f;
    this->InterpolationTriggerThreashold = 0.00f;
}

