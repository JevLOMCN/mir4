#include "MM_UserEvent_Painting.h"

UMM_UserEvent_Painting::UMM_UserEvent_Painting() {
    this->iSTR_ID_FIRST_REWARD = 1090014;
    this->iSTR_ID_NORMAL_REWARD = 1090015;
    this->m_Txt_Name = NULL;
    this->m_Img_Thumb = NULL;
    this->m_WebBanner = NULL;
    this->m_Txt_Season_Schedule = NULL;
    this->m_Txt_RewardType = NULL;
    this->m_Txt_ProgressCount = NULL;
    this->m_RewardItemSlot = NULL;
    this->m_ProgressBar = NULL;
    this->m_C_Btn_Get = NULL;
    this->m_Img_Indicator_Reward = NULL;
    this->m_Img_Indicator_Exchange = NULL;
    this->m_TxtLimit = NULL;
    this->m_Btn_Exchange = NULL;
}

void UMM_UserEvent_Painting::OnClickSlot(UMM_Slot_Base* pSlot) {
}

void UMM_UserEvent_Painting::OnClickOpenPopupExchange() {
}

void UMM_UserEvent_Painting::OnClickGetReward() {
}


