#include "SourceEffectEnvelopeFollowerSettings.h"

FSourceEffectEnvelopeFollowerSettings::FSourceEffectEnvelopeFollowerSettings() {
    this->AttackTime = 0.00f;
    this->ReleaseTime = 0.00f;
    this->PeakMode = EEnvelopeFollowerPeakMode::MeanSquared;
    this->bIsAnalogMode = false;
}

