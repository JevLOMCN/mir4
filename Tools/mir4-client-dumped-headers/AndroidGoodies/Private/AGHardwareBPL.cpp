#include "AGHardwareBPL.h"

UAGHardwareBPL::UAGHardwareBPL() {
}

void UAGHardwareBPL::VibrateWithPattern(TArray<float> pattern, int32 repeatFrom) {
}

void UAGHardwareBPL::VibrateWithEffectAndAttributes(UAGVibrationEffect* vibrationEffect, FAGAudioAttributes audioAttributes) {
}

void UAGHardwareBPL::VibrateWithEffect(UAGVibrationEffect* vibrationEffect) {
}

void UAGHardwareBPL::Vibrate(float Duration) {
}

void UAGHardwareBPL::StopVibration() {
}

bool UAGHardwareBPL::IsBatteryPresent() {
    return false;
}

bool UAGHardwareBPL::IsBatteryLow() {
    return false;
}

bool UAGHardwareBPL::HasVibrator() {
    return false;
}

bool UAGHardwareBPL::HasAmplitudeControl() {
    return false;
}

int32 UAGHardwareBPL::GetImmediateBatteryCurrent() {
    return 0;
}

int32 UAGHardwareBPL::GetBatteryVoltage() {
    return 0;
}

int32 UAGHardwareBPL::GetBatteryTemperature() {
    return 0;
}

FString UAGHardwareBPL::GetBatteryTechnology() {
    return TEXT("");
}

BatteryStatus UAGHardwareBPL::GetBatteryStatus() {
    return BatteryStatus::UnknownStatus;
}

int32 UAGHardwareBPL::GetBatteryScale() {
    return 0;
}

TEnumAsByte<BatteryPluggedState> UAGHardwareBPL::GetBatteryPluggedState() {
    return OnBattery;
}

int32 UAGHardwareBPL::GetBatteryLevel() {
    return 0;
}

BatteryHealth UAGHardwareBPL::GetBatteryHealth() {
    return BatteryHealth::UnknownHealth;
}

int32 UAGHardwareBPL::GetBatteryEnergyCounter() {
    return 0;
}

int32 UAGHardwareBPL::GetBatteryChargeCounter() {
    return 0;
}

int32 UAGHardwareBPL::GetBatteryCapacity() {
    return 0;
}

int32 UAGHardwareBPL::GetAverageBatteryCurrent() {
    return 0;
}

void UAGHardwareBPL::EnableFlashlight(bool Enable) {
}

int32 UAGHardwareBPL::ComputeRemainingChargeTime() {
    return 0;
}

bool UAGHardwareBPL::AreVibrationEffectsSupported() {
    return false;
}


