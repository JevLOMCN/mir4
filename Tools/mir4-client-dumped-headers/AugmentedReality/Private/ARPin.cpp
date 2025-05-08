#include "ARPin.h"

UARPin::UARPin() {
    this->TrackedGeometry = NULL;
    this->PinnedComponent = NULL;
    this->TrackingState = EARTrackingState::Unknown;
}

EARTrackingState UARPin::GetTrackingState() const {
    return EARTrackingState::Unknown;
}

UARTrackedGeometry* UARPin::GetTrackedGeometry() const {
    return NULL;
}

USceneComponent* UARPin::GetPinnedComponent() const {
    return NULL;
}

FTransform UARPin::GetLocalToWorldTransform() const {
    return FTransform{};
}

FTransform UARPin::GetLocalToTrackingTransform() const {
    return FTransform{};
}

FName UARPin::GetDebugName() const {
    return NAME_None;
}

void UARPin::DebugDraw(UWorld* World, const FLinearColor& Color, float Scale, float PersistForSeconds) const {
}


