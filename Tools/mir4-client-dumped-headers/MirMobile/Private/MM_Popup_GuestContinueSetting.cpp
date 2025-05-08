#include "MM_Popup_GuestContinueSetting.h"

UMM_Popup_GuestContinueSetting::UMM_Popup_GuestContinueSetting() {
    this->m_Btn_Confirm = NULL;
    this->m_Btn_Close = NULL;
    this->m_Btn_LinkIDCopy = NULL;
    this->m_Txt_LinkID = NULL;
    this->m_Edit_Password = NULL;
    this->m_Txt_Password_Empty = NULL;
    this->m_Txt_Password_Complete = NULL;
}

void UMM_Popup_GuestContinueSetting::UpdatePasswordTextState() {
}

void UMM_Popup_GuestContinueSetting::OnPasswordSettingComplete(bool Success, const FString& Message) {
}

void UMM_Popup_GuestContinueSetting::OnCommitEditPassword(const FText& Text, TEnumAsByte<ETextCommit::Type> CommitMethod) {
}

void UMM_Popup_GuestContinueSetting::OnClickConfirm() {
}

void UMM_Popup_GuestContinueSetting::OnClickCodeCopy() {
}

void UMM_Popup_GuestContinueSetting::OnClickClose() {
}

void UMM_Popup_GuestContinueSetting::OnChangeEditPassword(const FText& Text) {
}


