#include "IGDeviceInfo.h"

UIGDeviceInfo::UIGDeviceInfo() {
}

void UIGDeviceInfo::SetProximityMonitoringEnabled(bool Enabled) {
}

void UIGDeviceInfo::SetBatteryMonitoringEnabled(bool Enabled) {
}

bool UIGDeviceInfo::ProximityState() {
    return false;
}

bool UIGDeviceInfo::IsProximityMonitoringEnabled() {
    return false;
}

bool UIGDeviceInfo::IsMultitaskingSupported() {
    return false;
}

bool UIGDeviceInfo::IsBatteryMonitoringEnabled() {
    return false;
}

FString UIGDeviceInfo::GetUUID() {
    return TEXT("");
}

TEnumAsByte<UserInterfaceIdiom> UIGDeviceInfo::GetUserInterfaceIdiom() {
    return Unspecified;
}

FString UIGDeviceInfo::GetSystemVersion() {
    return TEXT("");
}

FString UIGDeviceInfo::GetSystemName() {
    return TEXT("");
}

FString UIGDeviceInfo::GetName() {
    return TEXT("");
}

FString UIGDeviceInfo::GetModel() {
    return TEXT("");
}

FString UIGDeviceInfo::GetLocalizedModel() {
    return TEXT("");
}

BatteryState UIGDeviceInfo::GetBatteryState() {
    return BatteryState::Unknown;
}

float UIGDeviceInfo::GetBatteryLevel() {
    return 0.0f;
}


