#include "MM_New_Force_Upgrade.h"

UMM_New_Force_Upgrade::UMM_New_Force_Upgrade() {
    this->m_Force_CurDetail = NULL;
    this->m_arAbilityListSlot[0] = NULL;
    this->m_arAbilityListSlot[1] = NULL;
    this->m_arAbilityListSlot[2] = NULL;
    this->m_arAbilityListSlot[3] = NULL;
    this->m_Panel_Mats = NULL;
    this->m_C_RTxt_CharLevel = NULL;
    this->m_Btn_Advence = NULL;
    this->m_Panel_Skip = NULL;
    this->m_Slot_Skip = NULL;
    this->m_Txt_SkipDesc = NULL;
    this->m_Txt_SkipRemainTime = NULL;
    this->m_Btn_Skip = NULL;
    this->m_Panel_Cure = NULL;
    this->m_C_Slot_CureMat = NULL;
    this->m_C_Txt_FailedInfo = NULL;
    this->m_C_Txt_FailedTime = NULL;
    this->m_C_CB_Cure = NULL;
}

void UMM_New_Force_Upgrade::OnClickUpgrade() {
}

void UMM_New_Force_Upgrade::OnClickSkip() {
}

void UMM_New_Force_Upgrade::OnClickCure() {
}

void UMM_New_Force_Upgrade::OnClick_MatSlot(int64 ItemUID, int32 ItemTID, int32 EquipPosition) {
}


