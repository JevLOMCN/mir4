#include "ModularSynthComponent.h"

UModularSynthComponent::UModularSynthComponent(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->VoiceCount = 8;
}

void UModularSynthComponent::SetSynthPreset(const FModularSynthPreset& SynthPreset) {
}

void UModularSynthComponent::SetSustainGain(float SustainGain) {
}

void UModularSynthComponent::SetStereoDelayWetlevel(float DelayWetlevel) {
}

void UModularSynthComponent::SetStereoDelayTime(float DelayTimeMsec) {
}

void UModularSynthComponent::SetStereoDelayRatio(float DelayRatio) {
}

void UModularSynthComponent::SetStereoDelayMode(ESynthStereoDelayMode StereoDelayMode) {
}

void UModularSynthComponent::SetStereoDelayIsEnabled(bool StereoDelayEnabled) {
}

void UModularSynthComponent::SetStereoDelayFeedback(float DelayFeedback) {
}

void UModularSynthComponent::SetSpread(float Spread) {
}

void UModularSynthComponent::SetReleaseTime(float ReleaseTimeMsec) {
}

void UModularSynthComponent::SetPortamento(float Portamento) {
}

void UModularSynthComponent::SetPitchBend(float PitchBend) {
}

void UModularSynthComponent::SetPan(float Pan) {
}

void UModularSynthComponent::SetOscType(int32 OscIndex, ESynth1OscType OscType) {
}

void UModularSynthComponent::SetOscSync(const bool bIsSynced) {
}

void UModularSynthComponent::SetOscSemitones(int32 OscIndex, float Semitones) {
}

void UModularSynthComponent::SetOscPulsewidth(int32 OscIndex, float Pulsewidth) {
}

void UModularSynthComponent::SetOscOctave(int32 OscIndex, float Octave) {
}

void UModularSynthComponent::SetOscGainMod(int32 OscIndex, float OscGainMod) {
}

void UModularSynthComponent::SetOscGain(int32 OscIndex, float OscGain) {
}

void UModularSynthComponent::SetOscFrequencyMod(int32 OscIndex, float OscFreqMod) {
}

void UModularSynthComponent::SetOscCents(int32 OscIndex, float Cents) {
}

void UModularSynthComponent::SetModEnvSustainGain(const float SustainGain) {
}

void UModularSynthComponent::SetModEnvReleaseTime(const float Release) {
}

void UModularSynthComponent::SetModEnvPatch(const ESynthModEnvPatch InPatchType) {
}

void UModularSynthComponent::SetModEnvInvert(const bool bInvert) {
}

void UModularSynthComponent::SetModEnvDepth(const float Depth) {
}

void UModularSynthComponent::SetModEnvDecayTime(const float DecayTimeMsec) {
}

void UModularSynthComponent::SetModEnvBiasPatch(const ESynthModEnvBiasPatch InPatchType) {
}

void UModularSynthComponent::SetModEnvBiasInvert(const bool bInvert) {
}

void UModularSynthComponent::SetModEnvAttackTime(const float AttackTimeMsec) {
}

void UModularSynthComponent::SetLFOType(int32 LFOIndex, ESynthLFOType LFOType) {
}

void UModularSynthComponent::SetLFOPatch(int32 LFOIndex, ESynthLFOPatchType LFOPatchType) {
}

void UModularSynthComponent::SetLFOMode(int32 LFOIndex, ESynthLFOMode LFOMode) {
}

void UModularSynthComponent::SetLFOGainMod(int32 LFOIndex, float GainMod) {
}

void UModularSynthComponent::SetLFOGain(int32 LFOIndex, float Gain) {
}

void UModularSynthComponent::SetLFOFrequencyMod(int32 LFOIndex, float FrequencyModHz) {
}

void UModularSynthComponent::SetLFOFrequency(int32 LFOIndex, float FrequencyHz) {
}

void UModularSynthComponent::SetGainDb(float GainDb) {
}

void UModularSynthComponent::SetFilterType(ESynthFilterType FilterType) {
}

void UModularSynthComponent::SetFilterQMod(float FilterQ) {
}

void UModularSynthComponent::SetFilterQ(float FilterQ) {
}

void UModularSynthComponent::SetFilterFrequencyMod(float FilterFrequencyHz) {
}

void UModularSynthComponent::SetFilterFrequency(float FilterFrequencyHz) {
}

void UModularSynthComponent::SetFilterAlgorithm(ESynthFilterAlgorithm FilterAlgorithm) {
}

void UModularSynthComponent::SetEnableUnison(bool EnableUnison) {
}

void UModularSynthComponent::SetEnableRetrigger(bool RetriggerEnabled) {
}

void UModularSynthComponent::SetEnablePolyphony(bool bEnablePolyphony) {
}

bool UModularSynthComponent::SetEnablePatch(const FPatchId PatchId, const bool bIsEnabled) {
    return false;
}

void UModularSynthComponent::SetEnableLegato(bool LegatoEnabled) {
}

void UModularSynthComponent::SetDecayTime(float DecayTimeMsec) {
}

void UModularSynthComponent::SetChorusFrequency(float Frequency) {
}

void UModularSynthComponent::SetChorusFeedback(float Feedback) {
}

void UModularSynthComponent::SetChorusEnabled(bool EnableChorus) {
}

void UModularSynthComponent::SetChorusDepth(float Depth) {
}

void UModularSynthComponent::SetAttackTime(float AttackTimeMsec) {
}

void UModularSynthComponent::NoteOn(const float Note, const int32 Velocity, const float Duration) {
}

void UModularSynthComponent::NoteOff(const float Note, const bool bAllNotesOff, const bool bKillAllNotes) {
}

FPatchId UModularSynthComponent::CreatePatch(const ESynth1PatchSource PatchSource, const TArray<FSynth1PatchCable>& PatchCables, const bool bEnableByDefault) {
    return FPatchId{};
}


