#include "MM_Popup_MailWrite.h"

UMM_Popup_MailWrite::UMM_Popup_MailWrite() {
    this->STRING_RECEIVE_ID = 1014028;
    this->STRING_HINT_TITLE = 1014029;
    this->STRING_HINT_CONTENTS = 1014030;
    this->MAX_TITLE_STRING_LEN = 15;
    this->MAX_CONTENTS_STRING_LEN = 333;
    this->m_Txt_ReceiveName = NULL;
    this->m_EditableTxt_Title = NULL;
    this->m_EditableTxtBox_Contents = NULL;
    this->m_C_Btn_Close = NULL;
    this->m_C_Btn_MailAddressbook = NULL;
    this->m_C_Btn_Cancel = NULL;
    this->m_C_Btn_Send = NULL;
}

void UMM_Popup_MailWrite::OnEditableTxtTitleCommitted(const FText& Text, TEnumAsByte<ETextCommit::Type> CommitMethod) {
}

void UMM_Popup_MailWrite::OnEditableTxtContentsCommitted(const FText& Text, TEnumAsByte<ETextCommit::Type> CommitMethod) {
}

void UMM_Popup_MailWrite::OnClickSend() {
}

void UMM_Popup_MailWrite::OnClickOpenMaillAddressbook() {
}

void UMM_Popup_MailWrite::OnClickClose() {
}

void UMM_Popup_MailWrite::OnChangeEditableTxt_Title(const FText& Text) {
}

void UMM_Popup_MailWrite::OnChangeEditableTxt_Contents(const FText& Text) {
}


