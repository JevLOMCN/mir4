#include "SubmixEffectDynamicsProcessorSettings.h"

FSubmixEffectDynamicsProcessorSettings::FSubmixEffectDynamicsProcessorSettings() {
    this->DynamicsProcessorType = ESubmixEffectDynamicsProcessorType::Compressor;
    this->PeakMode = ESubmixEffectDynamicsPeakMode::MeanSquared;
    this->LookAheadMsec = 0.00f;
    this->AttackTimeMsec = 0.00f;
    this->ReleaseTimeMsec = 0.00f;
    this->ThresholdDb = 0.00f;
    this->Ratio = 0.00f;
    this->KneeBandwidthDb = 0.00f;
    this->InputGainDb = 0.00f;
    this->OutputGainDb = 0.00f;
    this->bChannelLinked = false;
    this->bAnalogMode = false;
}

