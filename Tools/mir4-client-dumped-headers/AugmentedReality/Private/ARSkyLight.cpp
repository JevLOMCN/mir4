#include "ARSkyLight.h"

AARSkyLight::AARSkyLight(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->CaptureProbe = NULL;
}

void AARSkyLight::SetEnvironmentCaptureProbe(UAREnvironmentCaptureProbe* InCaptureProbe) {
}


