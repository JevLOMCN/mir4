#include "MM_B_HudRightMenu.h"

UMM_B_HudRightMenu::UMM_B_HudRightMenu() {
    this->m_iStringID_ExitPhase = 0;
    this->m_iStringID_BtnCancel = 0;
    this->m_iStringID_BtnExit = 0;
    this->m_iStringID_ExitDungeon = 0;
    this->m_pQuestList = NULL;
    this->m_pBtnGiveUp = NULL;
    this->m_pPhaseExitMenuWidget = NULL;
    this->m_pBtnFoldQuest = NULL;
    this->m_pConquerServerPanel = NULL;
    this->m_pConquerExitBtn = NULL;
    this->m_pConquerRemainTimeTxt = NULL;
    this->m_pConquerRemainLifeItemTxt = NULL;
    this->m_pConquerUseLifeItemBtn = NULL;
    this->m_canConquerGetItem = NULL;
    this->m_pBtnConquerGetItem = NULL;
    this->m_AniFoldQuest = NULL;
}

void UMM_B_HudRightMenu::OnExitCurWorld() {
}

void UMM_B_HudRightMenu::OnClickUseLifeItem() {
}

void UMM_B_HudRightMenu::OnClickFoldQuest() {
}

void UMM_B_HudRightMenu::OnClickedWorldOut() {
}

void UMM_B_HudRightMenu::OnClickedPhaseExitPopupExit() {
}

void UMM_B_HudRightMenu::OnClickConquerServerExit() {
}

void UMM_B_HudRightMenu::OnClickConquerGetItemInfo() {
}


