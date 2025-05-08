#include "MM_Guild_Diplomacy.h"

UMM_Guild_Diplomacy::UMM_Guild_Diplomacy() {
    this->mTopSlotDiplomacy = NULL;
    this->mCBGotoGuildPeruse = NULL;
    this->mCTVrtTabSet = NULL;
    this->mSBList = NULL;
    this->mTxtRankTitle = NULL;
    this->mTxtGuildTitle = NULL;
    this->mTxtGuildLevelTitle = NULL;
    this->mTxtCombatPowerTitle = NULL;
    this->mTxtMemberTitle = NULL;
    this->mTxtStatusTitle = NULL;
    this->mPanelServer = NULL;
    this->mTxtServerTitle = NULL;
    this->mEmptyNotice = NULL;
    this->mTooltipBtn = NULL;
    this->mPanelDevLock = NULL;
    this->btn_refresh = NULL;
}

void UMM_Guild_Diplomacy::OnClickRefresh() {
}

void UMM_Guild_Diplomacy::OnClickOpenGuildPeruse() {
}

void UMM_Guild_Diplomacy::OnClickedVerticalTab(int32 Index, bool bLocked) {
}


