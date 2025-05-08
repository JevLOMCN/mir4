#include "MM_Popup_Guild_ShopRecord.h"

UMM_Popup_Guild_ShopRecord::UMM_Popup_Guild_ShopRecord() {
    this->m_CB_Close = NULL;
    this->m_CheckBoxRegist = NULL;
    this->m_CheckBoxBuy = NULL;
    this->m_Txt_RecordTitle = NULL;
    this->m_Txt_RegistTitle = NULL;
    this->m_Txt_BuyTitle = NULL;
    this->m_ScrollBox = NULL;
    this->m_Empty_Notice = NULL;
    this->m_AniStart = NULL;
    this->m_AniEnd = NULL;
}

float UMM_Popup_Guild_ShopRecord::PlayEndAnimation() {
    return 0.0f;
}

void UMM_Popup_Guild_ShopRecord::OnClickRegist(bool bChecked) {
}

void UMM_Popup_Guild_ShopRecord::OnClickClose() {
}

void UMM_Popup_Guild_ShopRecord::OnClickBuy(bool bChecked) {
}


