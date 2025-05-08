#include "OnlineSubsystemExtendedSteamWidget.h"

UOnlineSubsystemExtendedSteamWidget::UOnlineSubsystemExtendedSteamWidget() : UUserWidget(FObjectInitializer::Get()) {
    this->WebBrowser = NULL;
    this->m_Btn_Close = NULL;
}

void UOnlineSubsystemExtendedSteamWidget::OnClickClose() {
}

void UOnlineSubsystemExtendedSteamWidget::HandleOnUrlChanged(const FText& Text) {
}

void UOnlineSubsystemExtendedSteamWidget::EnableCustomStyle(bool bEnable) {
}


