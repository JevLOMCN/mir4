#include "MirScaleBox.h"

UMirScaleBox::UMirScaleBox() {
    this->m_fUserSpecifiedScaleOnFold = 1.00f;
    this->m_pDeviceStateListener = NULL;
}

void UMirScaleBox::OnChangedDeviceState(EPostureDeviceState eDeviceState) {
}


