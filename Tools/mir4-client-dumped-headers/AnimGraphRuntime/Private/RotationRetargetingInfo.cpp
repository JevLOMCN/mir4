#include "RotationRetargetingInfo.h"

FRotationRetargetingInfo::FRotationRetargetingInfo() {
    this->bEnabled = false;
    this->RotationComponent = ERotationComponent::EulerX;
    this->bUseAbsoluteAngle = false;
    this->SourceMinimum = 0.00f;
    this->SourceMaximum = 0.00f;
    this->TargetMinimum = 0.00f;
    this->TargetMaximum = 0.00f;
    this->EasingType = EEasingFuncType::Linear;
    this->bFlipEasing = false;
    this->EasingWeight = 0.00f;
    this->bClamp = false;
}

