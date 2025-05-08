#include "MediaSoundComponent.h"

UMediaSoundComponent::UMediaSoundComponent(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->bAutoActivate = true;
    this->Channels = EMediaSoundChannels::Stereo;
    this->DynamicRateAdjustment = false;
    this->RateAdjustmentFactor = 0.00f;
    this->MediaPlayer = NULL;
}

void UMediaSoundComponent::SetSpectralAnalysisSettings(TArray<float> InFrequenciesToAnalyze, EMediaSoundComponentFFTSize InFFTSize) {
}

void UMediaSoundComponent::SetMediaPlayer(UMediaPlayer* NewMediaPlayer) {
}

void UMediaSoundComponent::SetEnvelopeFollowingsettings(int32 AttackTimeMsec, int32 ReleaseTimeMsec) {
}

void UMediaSoundComponent::SetEnableSpectralAnalysis(bool bInSpectralAnalysisEnabled) {
}

void UMediaSoundComponent::SetEnableEnvelopeFollowing(bool bInEnvelopeFollowing) {
}

TArray<FMediaSoundComponentSpectralData> UMediaSoundComponent::GetSpectralData() {
    return TArray<FMediaSoundComponentSpectralData>();
}

UMediaPlayer* UMediaSoundComponent::GetMediaPlayer() const {
    return NULL;
}

float UMediaSoundComponent::GetEnvelopeValue() const {
    return 0.0f;
}

bool UMediaSoundComponent::BP_GetAttenuationSettingsToApply(FSoundAttenuationSettings& OutAttenuationSettings) {
    return false;
}


