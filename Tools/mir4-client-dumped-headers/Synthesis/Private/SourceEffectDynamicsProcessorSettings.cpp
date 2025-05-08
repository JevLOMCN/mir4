#include "SourceEffectDynamicsProcessorSettings.h"

FSourceEffectDynamicsProcessorSettings::FSourceEffectDynamicsProcessorSettings() {
    this->DynamicsProcessorType = ESourceEffectDynamicsProcessorType::Compressor;
    this->PeakMode = ESourceEffectDynamicsPeakMode::MeanSquared;
    this->LookAheadMsec = 0.00f;
    this->AttackTimeMsec = 0.00f;
    this->ReleaseTimeMsec = 0.00f;
    this->ThresholdDb = 0.00f;
    this->Ratio = 0.00f;
    this->KneeBandwidthDb = 0.00f;
    this->InputGainDb = 0.00f;
    this->OutputGainDb = 0.00f;
    this->bStereoLinked = false;
    this->bAnalogMode = false;
}

