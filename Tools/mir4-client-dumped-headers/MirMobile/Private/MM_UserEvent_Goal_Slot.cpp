#include "MM_UserEvent_Goal_Slot.h"

UMM_UserEvent_Goal_Slot::UMM_UserEvent_Goal_Slot() {
    this->m_Txt_RelationTitle = NULL;
    this->m_RTxt_LevelUpTitle = NULL;
    this->m_Txt_Description = NULL;
    this->m_Img_CompleteBg = NULL;
    this->m_Img_CompleteMark = NULL;
    this->m_Img_Lock = NULL;
    this->m_RewardItemSlot[0] = NULL;
    this->m_RewardItemSlot[1] = NULL;
    this->m_C_Btn_Progress = NULL;
    this->m_C_Btn_Complete = NULL;
    this->m_Can_Relation = NULL;
    this->m_Can_LevelUp = NULL;
}

void UMM_UserEvent_Goal_Slot::OnClickTakeReward() {
}

void UMM_UserEvent_Goal_Slot::OnClickSlot(UMM_Slot_Base* pSlot) {
}

void UMM_UserEvent_Goal_Slot::OnClickProgress() {
}


