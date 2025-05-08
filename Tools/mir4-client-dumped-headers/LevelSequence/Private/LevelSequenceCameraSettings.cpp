#include "LevelSequenceCameraSettings.h"

FLevelSequenceCameraSettings::FLevelSequenceCameraSettings() {
    this->bOverrideAspectRatioAxisConstraint = false;
    this->AspectRatioAxisConstraint = AspectRatio_MaintainYFOV;
}

