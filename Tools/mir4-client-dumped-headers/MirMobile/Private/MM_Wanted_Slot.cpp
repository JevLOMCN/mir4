#include "MM_Wanted_Slot.h"

UMM_Wanted_Slot::UMM_Wanted_Slot() {
    this->m_Img_CharacterClass = NULL;
    this->m_Txt_CharacterName = NULL;
    this->m_Txt_CombatPoint = NULL;
    this->m_GuildIcon = NULL;
    this->m_Txt_GuildName = NULL;
    this->m_Txt_StackCount = NULL;
    this->m_Img_RewardCost = NULL;
    this->m_Txt_RewardCost = NULL;
    this->m_Img_FamePoint = NULL;
    this->m_Txt_FamePoint = NULL;
    this->m_WidgetSwitcher_Chase = NULL;
    this->m_Btn_Chase = NULL;
    this->m_Txt_RemainTime = NULL;
    this->m_Img_Disable = NULL;
    this->m_Txt_Complete = NULL;
    this->m_Txt_Expired = NULL;
}

void UMM_Wanted_Slot::UpdateSlotState() {
}

void UMM_Wanted_Slot::OnClickChase() {
}

FTimespan UMM_Wanted_Slot::GetRemainTime() {
    return FTimespan{};
}

void UMM_Wanted_Slot::ClickChase() {
}


