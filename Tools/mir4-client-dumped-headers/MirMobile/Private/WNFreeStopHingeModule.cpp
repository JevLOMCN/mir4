#include "WNFreeStopHingeModule.h"

UWNFreeStopHingeModule::UWNFreeStopHingeModule() {
    this->DeviceStateListener = NULL;
    this->UpdateFlag = false;
    this->LerpAlpha = 0.00f;
    this->CurrentDeviceState = EPostureDeviceState::POSTURE_UNKNOWN;
    this->Current_UI_State = EPostureDeviceState::POSTURE_UNKNOWN;
}

void UWNFreeStopHingeModule::OnChangedDeviceState(EPostureDeviceState InDeviceState) {
}


