#include "MM_QuickItemActionMsg.h"

UMM_QuickItemActionMsg::UMM_QuickItemActionMsg() {
    this->m_fShowTime = 10.00f;
    this->m_fAniSpeed = 1.50f;
    this->m_iAutoEquipLevel = 20;
    this->m_iAutoTransferLevel = 20;
    this->m_AniStart = NULL;
    this->m_AniEnd = NULL;
    this->m_ItemSlot = NULL;
    this->m_RTxt_Message = NULL;
    this->m_Txt_CombatPoint = NULL;
    this->m_ProgressTime = NULL;
    this->m_Txt_Timer = NULL;
    this->m_Txt_Auto = NULL;
    this->m_Btn_Main = NULL;
}

void UMM_QuickItemActionMsg::OnClickMain() {
}


