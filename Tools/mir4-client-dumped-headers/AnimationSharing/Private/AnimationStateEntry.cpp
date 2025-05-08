#include "AnimationStateEntry.h"

FAnimationStateEntry::FAnimationStateEntry() {
    this->State = 0;
    this->bOnDemand = false;
    this->bAdditive = false;
    this->BlendTime = 0.00f;
    this->bReturnToPreviousState = false;
    this->bSetNextState = false;
    this->NextState = 0;
    this->WiggleTimePercentage = 0.00f;
    this->bRequiresCurves = false;
}

