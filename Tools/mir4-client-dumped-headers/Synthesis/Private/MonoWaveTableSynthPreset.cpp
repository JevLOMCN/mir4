#include "MonoWaveTableSynthPreset.h"

UMonoWaveTableSynthPreset::UMonoWaveTableSynthPreset() {
    this->PresetName = TEXT("Default");
    this->bLockKeyframesToGridBool = false;
    this->LockKeyframesToGrid = 16;
    this->WaveTableResolution = 512;
    this->bNormalizeWaveTables = true;
}


