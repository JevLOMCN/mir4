#include "CameraLookatTrackingSettings.h"

FCameraLookatTrackingSettings::FCameraLookatTrackingSettings() {
    this->bEnableLookAtTracking = false;
    this->bDrawDebugLookAtTrackingPosition = false;
    this->LookAtTrackingInterpSpeed = 0.00f;
    this->bAllowRoll = false;
}

