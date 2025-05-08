#include "WmfMediaSettings.h"

UWmfMediaSettings::UWmfMediaSettings() {
    this->AllowNonStandardCodecs = false;
    this->LowLatency = false;
    this->NativeAudioOut = false;
    this->HardwareAcceleratedVideoDecoding = false;
}


