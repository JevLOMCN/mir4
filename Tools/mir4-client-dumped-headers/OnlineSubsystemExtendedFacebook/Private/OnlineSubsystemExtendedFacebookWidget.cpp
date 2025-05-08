#include "OnlineSubsystemExtendedFacebookWidget.h"

UOnlineSubsystemExtendedFacebookWidget::UOnlineSubsystemExtendedFacebookWidget() : UUserWidget(FObjectInitializer::Get()) {
    this->WebBrowser = NULL;
    this->m_Btn_Close = NULL;
}

void UOnlineSubsystemExtendedFacebookWidget::OnClickClose() {
}

void UOnlineSubsystemExtendedFacebookWidget::OnClickBackButton() {
}

void UOnlineSubsystemExtendedFacebookWidget::HandleOnUrlChanged(const FText& Text) {
}

void UOnlineSubsystemExtendedFacebookWidget::EnableCustomStyle(bool bEnable) {
}


