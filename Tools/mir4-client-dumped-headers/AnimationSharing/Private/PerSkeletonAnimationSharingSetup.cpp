#include "PerSkeletonAnimationSharingSetup.h"

FPerSkeletonAnimationSharingSetup::FPerSkeletonAnimationSharingSetup() {
    this->Skeleton = NULL;
    this->SkeletalMesh = NULL;
    this->BlendAnimBlueprint = NULL;
    this->AdditiveAnimBlueprint = NULL;
    this->StateProcessorClass = NULL;
}

