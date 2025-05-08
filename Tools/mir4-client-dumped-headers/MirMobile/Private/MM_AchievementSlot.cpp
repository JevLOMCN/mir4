#include "MM_AchievementSlot.h"

UMM_AchievementSlot::UMM_AchievementSlot() {
    this->ConditionInfo = NULL;
    this->Btn_Receive = NULL;
    this->m_AchievementID = 0;
    this->m_CompleteImg = NULL;
    this->m_PanelReward = NULL;
    this->m_PanelBtn = NULL;
    this->m_SelectBtn = NULL;
    this->m_FocusImg = NULL;
}

void UMM_AchievementSlot::OnClickSelectBtn() {
}

void UMM_AchievementSlot::OnClickReceiveBtn() {
}

void UMM_AchievementSlot::OnClickItemSlot(int64 iItemUID, int32 iItemTID, int32 iSlotIndex) {
}


