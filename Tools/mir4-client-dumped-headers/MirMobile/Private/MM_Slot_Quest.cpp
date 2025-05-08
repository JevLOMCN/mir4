#include "MM_Slot_Quest.h"

UMM_Slot_Quest::UMM_Slot_Quest() {
    this->m_ReqRewardToStr = 0;
    this->m_AcceptToStr = 0;
    this->m_GiveUpToStr = 0;
    this->m_MoveToStr = 0;
    this->m_CompleteToStr = 0;
    this->m_FinishToStr = 0;
    this->m_CombatToStr = 0;
    this->m_MissionAcceptToStr = 0;
    this->m_MissionAcceptNumToStr = 0;
    this->m_QuestNormalToStr = 1006302;
    this->m_MissionTitleWithCountToStr = 1006433;
    this->m_EndToStr = 1006442;
    this->m_QuestRepeatToStr = 1006305;
    this->m_DoNotCommitToStr = 1006428;
    this->m_PartyToImg = 0;
    this->m_RepeatCountToStr = 1006437;
    this->m_RepeatCountCheckToStr = 1006455;
    this->m_Background = NULL;
    this->m_Img_Focus = NULL;
    this->m_Icon = NULL;
    this->m_PartyIcon = NULL;
    this->m_Type = NULL;
    this->m_QuestTitle = NULL;
    this->m_MissionTitle = NULL;
    this->m_CombatPoint = NULL;
    this->m_Accept = NULL;
    this->m_CompleteEffectImg = NULL;
    this->m_EndImg = NULL;
    this->m_GiveUp = NULL;
    this->m_EnableQuest = NULL;
    this->m_BtnGrid = NULL;
    this->m_BtnsGrid = NULL;
    this->m_Disable = NULL;
    this->m_Img_RepeatIcon = NULL;
    this->m_Txt_RepeatCount = NULL;
    this->m_Img_Repeat = NULL;
    this->m_Img_RepeatDisable = NULL;
    this->m_Check_RepeatToggle = NULL;
    this->m_Img_RecommendParty = NULL;
    this->m_MainPanel = NULL;
    this->m_Btn_Back = NULL;
    this->m_pCommonPartyMember = NULL;
    this->m_pFavoriteCheckBox = NULL;
}

void UMM_Slot_Quest::SetRepeatToggle(bool State) {
}

void UMM_Slot_Quest::SetFavoriteToggle(bool State) {
}

void UMM_Slot_Quest::Reward() {
}

void UMM_Slot_Quest::OnClickRewardSlot(UMM_Slot_Base* pSlotBase) {
}

void UMM_Slot_Quest::OnClickReqReward() {
}

void UMM_Slot_Quest::OnClickNotEnableRepeat() {
}

void UMM_Slot_Quest::OnClickMove() {
}

void UMM_Slot_Quest::OnClickGiveUp() {
}

void UMM_Slot_Quest::OnClickDisable() {
}

void UMM_Slot_Quest::OnClickCommit() {
}

void UMM_Slot_Quest::OnClickBack() {
}

void UMM_Slot_Quest::Move() {
}

void UMM_Slot_Quest::GiveUp() {
}

void UMM_Slot_Quest::Accept() {
}


