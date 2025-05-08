#include "MM_PopUp_Quest_Obtain.h"

UMM_PopUp_Quest_Obtain::UMM_PopUp_Quest_Obtain() {
    this->m_ObtainMissionToStr = 1006403;
    this->m_ObtainRequestToStr = 1006450;
    this->m_MissionRewardToStr = 1006402;
    this->m_RequestRewardToStr = 1006451;
    this->m_MissionCompleteToStr = 1006405;
    this->m_CloseToStr = 101017;
    this->m_CancleMissionToStr = 1006404;
    this->m_CancleRequestToStr = 1006452;
    this->m_Title = NULL;
    this->m_Mission = NULL;
    this->m_CancleBtn = NULL;
    this->m_CloseBtn = NULL;
    this->m_ObtainBtn = NULL;
    this->m_PopupTitle = NULL;
    this->m_PopupReward = NULL;
    this->m_OpenAni = NULL;
    this->m_CloseAni = NULL;
    this->m_Info = NULL;
}

float UMM_PopUp_Quest_Obtain::PlayCloseAni() {
    return 0.0f;
}

void UMM_PopUp_Quest_Obtain::OnClickTalkRequestObtain() {
}

void UMM_PopUp_Quest_Obtain::OnClickRequestAccept() {
}

void UMM_PopUp_Quest_Obtain::OnClickClose() {
}

void UMM_PopUp_Quest_Obtain::OnClickCancelQuest() {
}


