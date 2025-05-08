#include "TapDelayInfo.h"

FTapDelayInfo::FTapDelayInfo() {
    this->TapLineMode = ETapLineMode::SendToChannel;
    this->DelayLength = 0.00f;
    this->Gain = 0.00f;
    this->OutputChannel = 0;
    this->PanInDegrees = 0.00f;
    this->TapId = 0;
}

