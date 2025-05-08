#include "AudioCaptureComponent.h"

UAudioCaptureComponent::UAudioCaptureComponent(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->JitterLatencyFrames = 0;
}


