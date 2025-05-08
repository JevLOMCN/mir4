#include "Popup_DungeonReward.h"

UPopup_DungeonReward::UPopup_DungeonReward() {
    this->canVitory = NULL;
    this->panVitory = NULL;
    this->imgBossVictory = NULL;
    this->txtVictory = NULL;
    this->txtVictoryInfo = NULL;
    this->vtcVitory = NULL;
    this->canFailMain = NULL;
    this->canFail = NULL;
    this->imgBossFail = NULL;
    this->txtFail = NULL;
    this->txtFailInfo = NULL;
    this->txtReward = NULL;
    this->txtLeftTime = NULL;
    this->txtLeftTimeExplain = NULL;
    this->txtClearTime = NULL;
    this->txtClearTimeValue = NULL;
    this->txtFailLeftTime = NULL;
    this->txtFailLeftTimeExplain = NULL;
    this->txtDeadCount = NULL;
    this->canContents = NULL;
    this->wgtVitoryRewardInfo = NULL;
    this->wgtPartyRewardInfo = NULL;
    this->wgtFailRewardInfo = NULL;
    this->canBtn = NULL;
    this->btnPartyReward = NULL;
    this->btnConfirm = NULL;
    this->canFailBtn = NULL;
    this->btnFailConfirm = NULL;
    this->hrzSuppressionPointSucc = NULL;
    this->txtCurSuppressionPointSucc = NULL;
    this->txtPointChangeSucc = NULL;
    this->hrzSuppressionPointFail = NULL;
    this->txtCurSuppressionPointFail = NULL;
    this->txtPointChangeFail = NULL;
    this->m_pAni_Win = NULL;
    this->m_pAni_Defeat = NULL;
}

void UPopup_DungeonReward::OnClickPartyRewardInfo() {
}

void UPopup_DungeonReward::OnClickConfirm() {
}


