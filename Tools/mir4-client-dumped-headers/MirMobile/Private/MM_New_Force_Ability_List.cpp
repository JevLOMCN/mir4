#include "MM_New_Force_Ability_List.h"

UMM_New_Force_Ability_List::UMM_New_Force_Ability_List() {
    this->m_arAbilityListSlot[0] = NULL;
    this->m_arAbilityListSlot[1] = NULL;
    this->m_arAbilityListSlot[2] = NULL;
    this->m_arAbilityListSlot[3] = NULL;
    this->m_Force_Detail = NULL;
    this->m_Img_Mat_Freme = NULL;
    this->m_Img_Mat_Bg = NULL;
    this->m_Panel_Success = NULL;
    this->m_C_Txt_Success = NULL;
    this->m_C_Txt_SuccessValue = NULL;
    this->m_C_Txt_Fail = NULL;
    this->m_C_Txt_FailValue = NULL;
    this->m_TxtMaxMsg = NULL;
    this->m_C_CB_LevelUp = NULL;
    this->m_Panel_Failed = NULL;
    this->m_C_Txt_FailedInfo = NULL;
    this->m_C_Txt_FailedTime = NULL;
    this->m_C_Slot_CureMat = NULL;
    this->m_C_CB_Cure = NULL;
}

void UMM_New_Force_Ability_List::OnClickLevelUp() {
}

void UMM_New_Force_Ability_List::OnClickCure() {
}

void UMM_New_Force_Ability_List::OnClick_MatSlot(int64 ItemUID, int32 ItemTID, int32 EquipPosition) {
}


