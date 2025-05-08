#include "MM_Popup_GuestContinue.h"

UMM_Popup_GuestContinue::UMM_Popup_GuestContinue() {
    this->m_Btn_Close = NULL;
    this->m_Btn_LoadAccount = NULL;
    this->m_Edit_Code = NULL;
    this->m_Edit_Password = NULL;
}

void UMM_Popup_GuestContinue::OnTextCommitted(const FText& text_, TEnumAsByte<ETextCommit::Type> commit_method_) {
}

void UMM_Popup_GuestContinue::OnGuestRestoreComplete(const bool Success, const FString& Message) {
}

void UMM_Popup_GuestContinue::OnCommitEditPassword(const FText& Text, TEnumAsByte<ETextCommit::Type> CommitMethod) {
}

void UMM_Popup_GuestContinue::OnCommitEditCode(const FText& Text, TEnumAsByte<ETextCommit::Type> CommitMethod) {
}

void UMM_Popup_GuestContinue::OnClickLoadAccount() {
}

void UMM_Popup_GuestContinue::OnClickClose() {
}


