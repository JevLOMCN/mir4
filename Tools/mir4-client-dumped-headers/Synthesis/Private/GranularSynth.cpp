#include "GranularSynth.h"

UGranularSynth::UGranularSynth(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->GranulatedSoundWave = NULL;
}

void UGranularSynth::SetSustainGain(const float SustainGain) {
}

void UGranularSynth::SetSoundWave(USoundWave* InSoundWave) {
}

void UGranularSynth::SetScrubMode(const bool bScrubMode) {
}

void UGranularSynth::SetReleaseTimeMsec(const float ReleaseTimeMsec) {
}

void UGranularSynth::SetPlayheadTime(const float InPositionSec, const float LerpTimeSec, EGranularSynthSeekType SeekType) {
}

void UGranularSynth::SetPlaybackSpeed(const float InPlayheadRate) {
}

void UGranularSynth::SetGrainVolume(const float BaseVolume, const FVector2D VolumeRange) {
}

void UGranularSynth::SetGrainsPerSecond(const float InGrainsPerSecond) {
}

void UGranularSynth::SetGrainProbability(const float InGrainProbability) {
}

void UGranularSynth::SetGrainPitch(const float BasePitch, const FVector2D PitchRange) {
}

void UGranularSynth::SetGrainPan(const float BasePan, const FVector2D PanRange) {
}

void UGranularSynth::SetGrainEnvelopeType(const EGranularSynthEnvelopeType EnvelopeType) {
}

void UGranularSynth::SetGrainDuration(const float BaseDurationMsec, const FVector2D DurationRange) {
}

void UGranularSynth::SetDecayTime(const float DecayTimeMsec) {
}

void UGranularSynth::SetAttackTime(const float AttackTimeMsec) {
}

void UGranularSynth::NoteOn(const float Note, const int32 Velocity, const float Duration) {
}

void UGranularSynth::NoteOff(const float Note, const bool bKill) {
}

bool UGranularSynth::IsLoaded() const {
    return false;
}

float UGranularSynth::GetSampleDuration() const {
    return 0.0f;
}

float UGranularSynth::GetCurrentPlayheadTime() const {
    return 0.0f;
}


