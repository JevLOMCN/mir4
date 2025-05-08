#include "SourceEffectPhaserSettings.h"

FSourceEffectPhaserSettings::FSourceEffectPhaserSettings() {
    this->WetLevel = 0.00f;
    this->Frequency = 0.00f;
    this->Feedback = 0.00f;
    this->LFOType = EPhaserLFOType::Sine;
    this->UseQuadraturePhase = false;
}

