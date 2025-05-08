#include "MM_CharacterMovementComponent.h"

UMM_CharacterMovementComponent::UMM_CharacterMovementComponent(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->DeltaRotationScale = 1.00f;
    this->bAdaptiveRotationRateForNavigation = true;
    this->RotationRateScaleForNavigation = 0.50f;
    this->RotationRateDecreaseCoffForNavigationError = 2.00f;
    this->bSkipTooSmallNavigationSegment = true;
    this->AgentRadiusRatioForSmallNavigationSegmentCheck = 0.50f;
    this->AgentHalfHeightRatioForSmallNavigationSegmentCheck = 0.50f;
}


