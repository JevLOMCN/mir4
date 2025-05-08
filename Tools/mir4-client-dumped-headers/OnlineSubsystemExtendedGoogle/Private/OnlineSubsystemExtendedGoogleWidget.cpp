#include "OnlineSubsystemExtendedGoogleWidget.h"

UOnlineSubsystemExtendedGoogleWidget::UOnlineSubsystemExtendedGoogleWidget() : UUserWidget(FObjectInitializer::Get()) {
    this->WebBrowser = NULL;
    this->m_Btn_Close = NULL;
}

void UOnlineSubsystemExtendedGoogleWidget::OnClickClose() {
}

void UOnlineSubsystemExtendedGoogleWidget::HandleOnUrlChanged(const FText& Text) {
}

void UOnlineSubsystemExtendedGoogleWidget::EnableCustomStyle(bool bEnable) {
}


