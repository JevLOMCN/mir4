#include "MirButton.h"

UMirButton::UMirButton() {
    this->IsFocusable = false;
    this->m_eStyle = EStyle_MirButton::CustomStyle;
    this->m_fLockTime = 0.30f;
    this->m_PRESSING_TIME = 0.20f;
}

void UMirButton::OnUnlock() {
}

void UMirButton::OnReleasedEvent() {
}

void UMirButton::OnPressing() {
}

void UMirButton::OnPressedEvent() {
}

void UMirButton::OnClickedEvent() {
}


