#include "MM_Popup_Quest_Accept.h"

UMM_Popup_Quest_Accept::UMM_Popup_Quest_Accept() {
    this->m_RequestAcceptToStr = 1006450;
    this->m_RequestGiveupToStr = 1006452;
    this->m_DoYouAcceptRequestToStr = 1006466;
    this->m_DoYouGiveupRequestToStr = 1006467;
    this->m_DoYouAcceptNewRequestToStr = 1006465;
    this->m_ChangeRequestToStr = 1006521;
    this->m_OnGoingToStr = 1006522;
    this->m_NewToStr = 1006523;
    this->m_DoYouWantChangeToStr = 1006524;
    this->m_IfRequestChangeToStr = 1006525;
    this->m_PopupTitle = NULL;
    this->m_AcceptMsg = NULL;
    this->m_SubAcceptMsg = NULL;
    this->m_Txt_Ongoing = NULL;
    this->m_Txt_New = NULL;
    this->m_Slot_Ongoing = NULL;
    this->m_Slot_New = NULL;
    this->m_CloseBtn = NULL;
    this->m_ObtainBtn = NULL;
}

void UMM_Popup_Quest_Accept::OnClickGiveUpRequest() {
}

void UMM_Popup_Quest_Accept::OnClickClose() {
}

void UMM_Popup_Quest_Accept::OnClickAcceptRequest() {
}


