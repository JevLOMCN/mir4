#include "SourceEffectFilterSettings.h"

FSourceEffectFilterSettings::FSourceEffectFilterSettings() {
    this->FilterCircuit = ESourceEffectFilterCircuit::OnePole;
    this->FilterType = ESourceEffectFilterType::LowPass;
    this->CutoffFrequency = 0.00f;
    this->FilterQ = 0.00f;
}

