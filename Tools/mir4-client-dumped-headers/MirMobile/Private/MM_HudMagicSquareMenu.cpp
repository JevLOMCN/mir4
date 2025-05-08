#include "MM_HudMagicSquareMenu.h"

UMM_HudMagicSquareMenu::UMM_HudMagicSquareMenu() {
    this->m_iStringID_BtnExit = 0;
    this->m_iStringID_BtnCancel = 0;
    this->m_iStringID_ExitMessage = 0;
    this->m_iStringID_TimerNotiTitle = 0;
    this->m_iStringID_TimerNotiMessage = 0;
    this->m_iStringID_Move = 0;
    this->m_iNextMoveEffectID = 0;
    this->m_pLimitTimerWidget = NULL;
    this->canNextMove = NULL;
    this->canExit = NULL;
    this->canDrop = NULL;
    this->canInfo = NULL;
    this->m_pBtn_NextMove = NULL;
    this->m_pBtn_Exit = NULL;
    this->m_pTextChangeTimer = NULL;
    this->m_pBtn_Info = NULL;
    this->m_pBtn_Drop = NULL;
    this->m_pGridEffect = NULL;
    this->m_pEffectNextMove = NULL;
    this->btnAddTime = NULL;
    this->aniRotation = NULL;
    this->canServerVisit = NULL;
    this->txtFixLeftLime = NULL;
    this->txtLeftTime = NULL;
    this->txtLifeCount = NULL;
    this->btnChargeLife = NULL;
}

void UMM_HudMagicSquareMenu::OnClickNextMove() {
}

void UMM_HudMagicSquareMenu::OnClickInfo() {
}

void UMM_HudMagicSquareMenu::OnClickExtentTime() {
}

void UMM_HudMagicSquareMenu::OnClickExit() {
}

void UMM_HudMagicSquareMenu::OnClickDropList() {
}

void UMM_HudMagicSquareMenu::OnChargeLife() {
}


