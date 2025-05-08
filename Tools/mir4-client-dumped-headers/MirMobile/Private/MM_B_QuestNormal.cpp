#include "MM_B_QuestNormal.h"

UMM_B_QuestNormal::UMM_B_QuestNormal() {
    this->m_PreceedingToStr = 0;
    this->m_HaveNoQuestToStr = 1006426;
    this->m_MissionRewardToStr = 1006402;
    this->m_HaveNoQuestInLocalToStr = 1006431;
    this->m_NormalToStr = 1006302;
    this->m_WatchingAllQuestToStr = 1006432;
    this->m_MaxRepeatCountToStr = 1006411;
    this->m_RepeatCountToStr = 1006436;
    this->m_VerticalSet = NULL;
    this->m_HorizontalSet = NULL;
    this->m_ListView_QuestList = NULL;
    this->m_CheckCompleteQuest = NULL;
    this->m_CompleteQuest = NULL;
    this->m_Msg = NULL;
    this->m_Txt_Repeat = NULL;
    this->m_Auto_Active = NULL;
    this->m_Auto_DeActive = NULL;
    this->m_AutoRun_Btn = NULL;
    this->m_ReceiveAll_Btn = NULL;
    this->m_pBtnCommToolTip = NULL;
}

void UMM_B_QuestNormal::OnClickStageType(int32 SlotIndex, bool bLocked) {
}

void UMM_B_QuestNormal::OnClickStage(int32 SlotIndex, bool bLocked) {
}

void UMM_B_QuestNormal::OnClickReceiveAll() {
}

void UMM_B_QuestNormal::OnClickCheckBox(bool Checked) {
}

void UMM_B_QuestNormal::OnClickAutoRun() {
}


