#include "MM_Popup_AccountSelect.h"

UMM_Popup_AccountSelect::UMM_Popup_AccountSelect() {
    this->m_AniStart = NULL;
    this->m_AniEnd = NULL;
    this->m_Edit_Account = NULL;
    this->m_CB_Login = NULL;
    this->Btn_GuestLogin = NULL;
    this->Btn_GoogleLogin = NULL;
}

void UMM_Popup_AccountSelect::OnCommitEditText(const FText& Text, TEnumAsByte<ETextCommit::Type> CommitMethod) {
}

void UMM_Popup_AccountSelect::OnClickLogin() {
}

void UMM_Popup_AccountSelect::OnClickGuestLogin() {
}

void UMM_Popup_AccountSelect::OnClickGoogleLogin() {
}

void UMM_Popup_AccountSelect::LoginSvnID(FText LoginIDText) {
}


