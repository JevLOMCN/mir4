#include "SynthComponentMonoWaveTable.h"

USynthComponentMonoWaveTable::USynthComponentMonoWaveTable(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->CurrentPreset = NULL;
}

void USynthComponentMonoWaveTable::SetWaveTablePosition(float InPosition) {
}

void USynthComponentMonoWaveTable::SetSustainPedalState(bool InSustainPedalState) {
}

void USynthComponentMonoWaveTable::SetPosLfoType(const ESynthLFOType InLfoType) {
}

void USynthComponentMonoWaveTable::SetPosLfoFrequency(const float InLfoFrequency) {
}

void USynthComponentMonoWaveTable::SetPosLfoDepth(const float InLfoDepth) {
}

void USynthComponentMonoWaveTable::SetPositionEnvelopeSustainGain(const float InSustainGain) {
}

void USynthComponentMonoWaveTable::SetPositionEnvelopeReleaseTime(const float InReleaseTimeMsec) {
}

void USynthComponentMonoWaveTable::SetPositionEnvelopeInvert(const bool bInInvert) {
}

void USynthComponentMonoWaveTable::SetPositionEnvelopeDepth(const float InDepth) {
}

void USynthComponentMonoWaveTable::SetPositionEnvelopeDecayTime(const float InDecayTimeMsec) {
}

void USynthComponentMonoWaveTable::SetPositionEnvelopeBiasInvert(const bool bInBiasInvert) {
}

void USynthComponentMonoWaveTable::SetPositionEnvelopeBiasDepth(const float InDepth) {
}

void USynthComponentMonoWaveTable::SetPositionEnvelopeAttackTime(const float InAttackTimeMsec) {
}

void USynthComponentMonoWaveTable::SetLowPassFilterResonance(float InNewQ) {
}

void USynthComponentMonoWaveTable::SetLowPassFilterFrequency(float InNewFrequency) {
}

void USynthComponentMonoWaveTable::SetFrequencyWithMidiNote(const float InMidiNote) {
}

void USynthComponentMonoWaveTable::SetFrequencyPitchBend(const float FrequencyOffsetCents) {
}

void USynthComponentMonoWaveTable::SetFrequency(const float FrequencyHz) {
}

void USynthComponentMonoWaveTable::SetFilterEnvelopeSustainGain(const float InSustainGain) {
}

void USynthComponentMonoWaveTable::SetFilterEnvelopeReleaseTime(const float InReleaseTimeMsec) {
}

void USynthComponentMonoWaveTable::SetFilterEnvelopenDecayTime(const float InDecayTimeMsec) {
}

void USynthComponentMonoWaveTable::SetFilterEnvelopeInvert(const bool bInInvert) {
}

void USynthComponentMonoWaveTable::SetFilterEnvelopeDepth(const float InDepth) {
}

void USynthComponentMonoWaveTable::SetFilterEnvelopeBiasInvert(const bool bInBiasInvert) {
}

void USynthComponentMonoWaveTable::SetFilterEnvelopeBiasDepth(const float InDepth) {
}

void USynthComponentMonoWaveTable::SetFilterEnvelopeAttackTime(const float InAttackTimeMsec) {
}

bool USynthComponentMonoWaveTable::SetCurveValue(int32 TableIndex, int32 KeyframeIndex, const float NewValue) {
    return false;
}

bool USynthComponentMonoWaveTable::SetCurveTangent(int32 TableIndex, float InNewTangent) {
    return false;
}

bool USynthComponentMonoWaveTable::SetCurveInterpolationType(CurveInterpolationType InterpolationType, int32 TableIndex) {
    return false;
}

void USynthComponentMonoWaveTable::SetAmpEnvelopeSustainGain(const float InSustainGain) {
}

void USynthComponentMonoWaveTable::SetAmpEnvelopeReleaseTime(const float InReleaseTimeMsec) {
}

void USynthComponentMonoWaveTable::SetAmpEnvelopeInvert(const bool bInInvert) {
}

void USynthComponentMonoWaveTable::SetAmpEnvelopeDepth(const float InDepth) {
}

void USynthComponentMonoWaveTable::SetAmpEnvelopeDecayTime(const float InDecayTimeMsec) {
}

void USynthComponentMonoWaveTable::SetAmpEnvelopeBiasInvert(const bool bInBiasInvert) {
}

void USynthComponentMonoWaveTable::SetAmpEnvelopeBiasDepth(const float InDepth) {
}

void USynthComponentMonoWaveTable::SetAmpEnvelopeAttackTime(const float InAttackTimeMsec) {
}

void USynthComponentMonoWaveTable::RefreshWaveTable(int32 Index) {
}

void USynthComponentMonoWaveTable::RefreshAllWaveTables() {
}

void USynthComponentMonoWaveTable::NoteOn(const float InMidiNote, const float InVelocity) {
}

void USynthComponentMonoWaveTable::NoteOff(const float InMidiNote) {
}

int32 USynthComponentMonoWaveTable::GetNumTableEntries() {
    return 0;
}

int32 USynthComponentMonoWaveTable::GetMaxTableIndex() const {
    return 0;
}

TArray<float> USynthComponentMonoWaveTable::GetKeyFrameValuesForTable(float TableIndex) const {
    return TArray<float>();
}

float USynthComponentMonoWaveTable::GetCurveTangent(int32 TableIndex) {
    return 0.0f;
}


