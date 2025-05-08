#include "ARTrackedGeometry.h"

UARTrackedGeometry::UARTrackedGeometry() {
    this->TrackingState = EARTrackingState::Tracking;
    this->UnderlyingMesh = NULL;
    this->ObjectClassification = EARObjectClassification::NotApplicable;
    this->LastUpdateFrameNumber = 0;
}

bool UARTrackedGeometry::IsTracked() const {
    return false;
}

UMRMeshComponent* UARTrackedGeometry::GetUnderlyingMesh() {
    return NULL;
}

EARTrackingState UARTrackedGeometry::GetTrackingState() const {
    return EARTrackingState::Unknown;
}

EARObjectClassification UARTrackedGeometry::GetObjectClassification() const {
    return EARObjectClassification::NotApplicable;
}

FTransform UARTrackedGeometry::GetLocalToWorldTransform() const {
    return FTransform{};
}

FTransform UARTrackedGeometry::GetLocalToTrackingTransform() const {
    return FTransform{};
}

float UARTrackedGeometry::GetLastUpdateTimestamp() const {
    return 0.0f;
}

int32 UARTrackedGeometry::GetLastUpdateFrameNumber() const {
    return 0;
}

FName UARTrackedGeometry::GetDebugName() const {
    return NAME_None;
}


