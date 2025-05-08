#include "SourceEffectMidSideSpreaderSettings.h"

FSourceEffectMidSideSpreaderSettings::FSourceEffectMidSideSpreaderSettings() {
    this->InputMode = EStereoChannelMode::MidSide;
    this->SpreadAmount = 0.00f;
    this->OutputMode = EStereoChannelMode::MidSide;
    this->bEqualPower = false;
}

