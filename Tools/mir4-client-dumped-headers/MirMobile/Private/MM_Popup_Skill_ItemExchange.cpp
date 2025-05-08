#include "MM_Popup_Skill_ItemExchange.h"

UMM_Popup_Skill_ItemExchange::UMM_Popup_Skill_ItemExchange() {
    this->m_Txt_Title = NULL;
    this->m_TargetSmallSlot = NULL;
    this->m_RT_TargetSmallName = NULL;
    this->m_Prog_Curr = NULL;
    this->m_Prog_Next = NULL;
    this->m_ExchangeSlot = NULL;
    this->m_Txt_ExchangeName = NULL;
    this->m_Txt_ExchangeCount = NULL;
    this->m_TargetSlot = NULL;
    this->m_Txt_TargetName = NULL;
    this->m_Txt_TargetCount = NULL;
    this->m_Make_Slider = NULL;
    this->m_CB_Close = NULL;
    this->m_CB_Exchange = NULL;
    this->m_CB_Cancel = NULL;
}

void UMM_Popup_Skill_ItemExchange::OnClickExchange() {
}

void UMM_Popup_Skill_ItemExchange::OnClickClose() {
}

void UMM_Popup_Skill_ItemExchange::OnChangeMakeCount(int64 MakeCount) {
}


