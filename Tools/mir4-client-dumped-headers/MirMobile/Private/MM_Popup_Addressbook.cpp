#include "MM_Popup_Addressbook.h"

UMM_Popup_Addressbook::UMM_Popup_Addressbook() {
    this->STRING_SEARCH_HINT_ID = 1059206;
    this->m_EditableTxt_NickName = NULL;
    this->m_C_Btn_Close = NULL;
    this->m_C_Btn_Search = NULL;
    this->m_ListView_AddressList = NULL;
    this->m_C_Empty_Notice = NULL;
    this->m_TabSlot[0] = NULL;
    this->m_TabSlot[1] = NULL;
    this->m_CheckBoxAllSelect = NULL;
    this->m_RTxt_Count = NULL;
    this->m_C_Btn_Select = NULL;
}

void UMM_Popup_Addressbook::OnTextCommitted(const FText& text_, TEnumAsByte<ETextCommit::Type> commit_method_) {
}

void UMM_Popup_Addressbook::OnClickSelect() {
}

void UMM_Popup_Addressbook::OnClickSearchUser() {
}

void UMM_Popup_Addressbook::OnClickClose() {
}

void UMM_Popup_Addressbook::OnCheckBoxAllSelect(bool bChecked) {
}


