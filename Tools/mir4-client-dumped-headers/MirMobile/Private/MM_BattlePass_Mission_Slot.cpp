#include "MM_BattlePass_Mission_Slot.h"

UMM_BattlePass_Mission_Slot::UMM_BattlePass_Mission_Slot() {
    this->OVERLAY_OPACITY = 0.40f;
    this->m_Img_IcnMission = NULL;
    this->m_Txt_Title = NULL;
    this->m_Txt_Desc = NULL;
    this->m_Txt_Prog = NULL;
    this->m_Img_IcnPoint = NULL;
    this->m_Txt_Point = NULL;
    this->m_C_Btn_Immedi = NULL;
    this->m_C_Btn_GoToContents = NULL;
    this->m_C_Btn_Receive = NULL;
    this->m_Img_CompleteEffect = NULL;
    this->m_Img_Complete = NULL;
    this->m_Btn_Main = NULL;
    this->m_Img_Indicator = NULL;
    this->m_Overlay = NULL;
}

void UMM_BattlePass_Mission_Slot::OnClickImmediateComplete() {
}

void UMM_BattlePass_Mission_Slot::OnClickGotoContent() {
}

void UMM_BattlePass_Mission_Slot::OnClickComplete() {
}


