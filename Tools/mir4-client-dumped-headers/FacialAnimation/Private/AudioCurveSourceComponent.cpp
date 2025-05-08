#include "AudioCurveSourceComponent.h"

UAudioCurveSourceComponent::UAudioCurveSourceComponent(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->CurveSourceBindingName = TEXT("Default");
    this->CurveSyncOffset = 0.00f;
}


