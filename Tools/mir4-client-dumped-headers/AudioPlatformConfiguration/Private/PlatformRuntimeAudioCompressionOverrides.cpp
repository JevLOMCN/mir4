#include "PlatformRuntimeAudioCompressionOverrides.h"

FPlatformRuntimeAudioCompressionOverrides::FPlatformRuntimeAudioCompressionOverrides() {
    this->bOverrideCompressionTimes = false;
    this->DurationThreshold = 0.00f;
    this->MaxNumRandomBranches = 0;
    this->SoundCueQualityIndex = 0;
}

