#include "MM_Popup_CollectItemRegist.h"

UMM_Popup_CollectItemRegist::UMM_Popup_CollectItemRegist() {
    this->m_Txt_Title = NULL;
    this->m_Btn_Close = NULL;
    this->m_Txt_Registerable = NULL;
    this->m_ListView_CollectionItemList = NULL;
    this->m_Txt_Warning = NULL;
    this->m_Txt_Register = NULL;
    this->m_Btn_Cancel = NULL;
    this->m_Btn_Ok = NULL;
    this->m_RegistStrID = 1099022;
    this->m_RegistWarningStrID = 1099024;
    this->m_CanYouRegistStrID = 1099025;
    this->m_CheckStrID = 1099026;
    this->m_CancelStrID = 1099027;
    this->m_PleaseSelectStrID = 1099028;
    this->m_CollectInfoStr = 1099039;
    this->m_ReleaseLockToRegistStr = 1800007;
}

void UMM_Popup_CollectItemRegist::OnClickRegist() {
}

void UMM_Popup_CollectItemRegist::OnClickCollectSlot(UMM_Slot_Collect_Item* pSlot) {
}

void UMM_Popup_CollectItemRegist::OnClickClose() {
}

void UMM_Popup_CollectItemRegist::OnClickCancel() {
}


