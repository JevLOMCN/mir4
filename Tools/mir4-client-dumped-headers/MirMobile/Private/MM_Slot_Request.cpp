#include "MM_Slot_Request.h"

UMM_Slot_Request::UMM_Slot_Request() {
    this->m_ReqRewardToStr = 0;
    this->m_AcceptToStr = 0;
    this->m_GiveUpToStr = 0;
    this->m_MoveToStr = 0;
    this->m_CompleteToStr = 0;
    this->m_CombatToStr = 0;
    this->m_MissionAcceptToStr = 0;
    this->m_MissionAcceptNumToStr = 0;
    this->m_QuestNormalToStr = 1006302;
    this->m_MissionTitleWithCountToStr = 1006433;
    this->m_EndToStr = 1006442;
    this->m_QuestRepeatToStr = 1006305;
    this->m_DoNotCommitToStr = 1006428;
    this->m_OnGoingToStr = 101018;
    this->m_RequestOnlyOneMsg = 1006458;
    this->m_HideCompleteStageToStr = 1006514;
    this->m_PartyToImg = 0;
    this->m_RepeatCountToStr = 1006437;
    this->m_RepeatCountCheckToStr = 1006455;
    this->m_DoNotMoveToStr = 1006535;
    this->m_CheckHintToStr = 1006534;
    this->m_DoNotOpenStageStr = 1006543;
    this->m_DoNotOpenHidenStageStr = 1006546;
    this->CHECK_STAGE_TYPE_STRING_ID = 1006506;
    this->m_DoNotUseInThisStage = 1058508;
    this->m_Img_Focus = NULL;
    this->m_Icon = NULL;
    this->m_QuestTitle = NULL;
    this->m_Title = NULL;
    this->m_CombatPoint = NULL;
    this->m_Accept = NULL;
    this->m_CompleteEffectImg = NULL;
    this->m_EndImg = NULL;
    this->m_GiveUp = NULL;
    this->m_EnableQuest = NULL;
    this->m_BtnGrid = NULL;
    this->m_BtnsGrid = NULL;
    this->m_Disable = NULL;
    this->m_Txt_StageName = NULL;
    this->m_Btn_Hint = NULL;
    this->m_Txt_Hint = NULL;
    this->m_Btn_Story = NULL;
    this->m_Txt_Story = NULL;
    this->m_Lock = NULL;
    this->m_Btn_Back = NULL;
    this->m_Btn_Lock = NULL;
    this->m_pCommonPartyMember = NULL;
}

void UMM_Slot_Request::OnMoveToNpc() {
}

void UMM_Slot_Request::OnMove() {
}

void UMM_Slot_Request::OnClickStory() {
}

void UMM_Slot_Request::OnClickSlot() {
}

void UMM_Slot_Request::OnClickRewardSlot(UMM_Slot_Base* pSlotBase) {
}

void UMM_Slot_Request::OnClickReqReward() {
}

void UMM_Slot_Request::OnClickMoveToNpc() {
}

void UMM_Slot_Request::OnClickMove() {
}

void UMM_Slot_Request::OnClickLock() {
}

void UMM_Slot_Request::OnClickHint() {
}

void UMM_Slot_Request::OnClickGiveUp() {
}

void UMM_Slot_Request::OnClickDoNotMoveToNpc() {
}

void UMM_Slot_Request::OnClickDisable() {
}

void UMM_Slot_Request::OnClickCommit() {
}


