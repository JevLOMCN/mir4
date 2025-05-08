#include "AREnvironmentCaptureProbe.h"

UAREnvironmentCaptureProbe::UAREnvironmentCaptureProbe() {
    this->EnvironmentCaptureTexture = NULL;
}

FVector UAREnvironmentCaptureProbe::GetExtent() const {
    return FVector{};
}

UAREnvironmentCaptureProbeTexture* UAREnvironmentCaptureProbe::GetEnvironmentCaptureTexture() {
    return NULL;
}


