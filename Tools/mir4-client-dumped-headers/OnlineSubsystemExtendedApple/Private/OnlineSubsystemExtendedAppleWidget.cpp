#include "OnlineSubsystemExtendedAppleWidget.h"

UOnlineSubsystemExtendedAppleWidget::UOnlineSubsystemExtendedAppleWidget() : UUserWidget(FObjectInitializer::Get()) {
    this->WebBrowser = NULL;
    this->m_Btn_Close = NULL;
}

void UOnlineSubsystemExtendedAppleWidget::OnClickClose() {
}

void UOnlineSubsystemExtendedAppleWidget::HandleOnUrlChanged(const FText& Text) {
}

void UOnlineSubsystemExtendedAppleWidget::EnableCustomStyle(bool bEnable) {
}


