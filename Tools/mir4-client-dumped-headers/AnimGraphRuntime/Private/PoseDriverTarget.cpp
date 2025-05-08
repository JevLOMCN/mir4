#include "PoseDriverTarget.h"

FPoseDriverTarget::FPoseDriverTarget() {
    this->TargetScale = 0.00f;
    this->DistanceMethod = ERBFDistanceMethod::Euclidean;
    this->FunctionType = ERBFFunctionType::Gaussian;
    this->bApplyCustomCurve = false;
    this->bIsHidden = false;
}

