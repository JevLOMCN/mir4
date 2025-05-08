#include "SynthSamplePlayer.h"

USynthSamplePlayer::USynthSamplePlayer(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->SoundWave = NULL;
}

void USynthSamplePlayer::SetSoundWave(USoundWave* InSoundWave) {
}

void USynthSamplePlayer::SetScrubTimeWidth(float InScrubTimeWidthSec) {
}

void USynthSamplePlayer::SetScrubMode(bool bScrubMode) {
}

void USynthSamplePlayer::SetPitch(float InPitch, float TimeSec) {
}

void USynthSamplePlayer::SeekToTime(float TimeSec, ESamplePlayerSeekType SeekType, bool bWrap) {
}

bool USynthSamplePlayer::IsLoaded() const {
    return false;
}

float USynthSamplePlayer::GetSampleDuration() const {
    return 0.0f;
}

float USynthSamplePlayer::GetCurrentPlaybackProgressTime() const {
    return 0.0f;
}

float USynthSamplePlayer::GetCurrentPlaybackProgressPercent() const {
    return 0.0f;
}


