#include "MM_XsollaWebBrowser.h"

UMM_XsollaWebBrowser::UMM_XsollaWebBrowser() {
    this->m_Panel_Main = NULL;
    this->m_Web_Main = NULL;
    this->m_Btn_Close = NULL;
}

void UMM_XsollaWebBrowser::OnUrlChanged(const FText& URL) {
}

void UMM_XsollaWebBrowser::OnSocialAuthUrlReceived(const FString& URL) {
}

void UMM_XsollaWebBrowser::OnSocialAuthError(const FString& code, const FString& Description) {
}

void UMM_XsollaWebBrowser::OnClickUserCancel() {
}

void UMM_XsollaWebBrowser::OnClickClose() {
}

void UMM_XsollaWebBrowser::OnBeforePopup(const FString& URL, const FString& Frame) {
}

void UMM_XsollaWebBrowser::HandleOnLoadError() {
}

void UMM_XsollaWebBrowser::HandleOnLoadCompleted() {
}

void UMM_XsollaWebBrowser::ClearCache() {
}


