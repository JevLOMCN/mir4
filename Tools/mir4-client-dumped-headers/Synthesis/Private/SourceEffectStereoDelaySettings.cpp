#include "SourceEffectStereoDelaySettings.h"

FSourceEffectStereoDelaySettings::FSourceEffectStereoDelaySettings() {
    this->DelayMode = EStereoDelaySourceEffect::Normal;
    this->DelayTimeMsec = 0.00f;
    this->Feedback = 0.00f;
    this->DelayRatio = 0.00f;
    this->WetLevel = 0.00f;
}

