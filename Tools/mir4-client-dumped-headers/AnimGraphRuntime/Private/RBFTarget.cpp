#include "RBFTarget.h"

FRBFTarget::FRBFTarget() {
    this->ScaleFactor = 0.00f;
    this->bApplyCustomCurve = false;
    this->DistanceMethod = ERBFDistanceMethod::Euclidean;
    this->FunctionType = ERBFFunctionType::Gaussian;
}

