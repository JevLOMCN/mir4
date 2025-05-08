#include "ChildEmitter.h"

FChildEmitter::FChildEmitter() {
    this->ActivityInParentLifeTime = 0.00f;
    this->FollowParentPosition = false;
    this->FollowParentSpeedPercent = 0.00f;
    this->ZOrderOffset = 0;
    this->ChildrenAsset = NULL;
}

