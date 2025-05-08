#include "SubmixEffectFilterSettings.h"

FSubmixEffectFilterSettings::FSubmixEffectFilterSettings() {
    this->FilterType = ESubmixFilterType::LowPass;
    this->FilterAlgorithm = ESubmixFilterAlgorithm::OnePole;
    this->FilterFrequency = 0.00f;
    this->FilterQ = 0.00f;
}

