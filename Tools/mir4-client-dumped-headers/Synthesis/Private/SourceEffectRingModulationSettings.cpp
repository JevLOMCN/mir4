#include "SourceEffectRingModulationSettings.h"

FSourceEffectRingModulationSettings::FSourceEffectRingModulationSettings() {
    this->ModulatorType = ERingModulatorTypeSourceEffect::Sine;
    this->Frequency = 0.00f;
    this->Depth = 0.00f;
    this->DryLevel = 0.00f;
    this->WetLevel = 0.00f;
}

