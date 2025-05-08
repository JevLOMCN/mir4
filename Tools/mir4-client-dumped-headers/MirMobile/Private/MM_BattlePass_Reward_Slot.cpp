#include "MM_BattlePass_Reward_Slot.h"

UMM_BattlePass_Reward_Slot::UMM_BattlePass_Reward_Slot() {
    this->m_Img_Closed = NULL;
    this->m_Img_Opened = NULL;
    this->m_Img_Open_Cur = NULL;
    this->m_Img_Line = NULL;
    this->m_ProgressBar = NULL;
    this->m_Txt_Num = NULL;
    this->m_Reward_ItemSlot[0] = NULL;
    this->m_Reward_ItemSlot[1] = NULL;
    this->m_Reward_ItemSlot[2] = NULL;
}

void UMM_BattlePass_Reward_Slot::OnClickSlot(UMM_Slot_Base* pSlot) {
}


