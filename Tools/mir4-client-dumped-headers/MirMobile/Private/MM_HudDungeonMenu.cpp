#include "MM_HudDungeonMenu.h"

UMM_HudDungeonMenu::UMM_HudDungeonMenu() {
    this->m_iStringID_BtnCancel = 0;
    this->m_iStringID_BtnExit = 0;
    this->m_iStringID_ExitDungeon = 0;
    this->m_iStringID_ExitSecretDungeon_Item = 0;
    this->m_iStringID_ExitSecretDungeon_Quest = 0;
    this->m_pAniDoingEffect = NULL;
    this->m_pAniAttentionEffect = NULL;
    this->m_pCan_Tracker = NULL;
    this->m_pText_Title = NULL;
    this->m_pText_Mission = NULL;
    this->m_pBtn_Tracker = NULL;
    this->m_pLimitTimerWidget = NULL;
    this->m_pBtn_DropInfo = NULL;
    this->m_pBtn_Exit = NULL;
    this->m_imgBtn_DropInfo = NULL;
    this->m_imgBtn_Exit = NULL;
    this->m_pCanDoingEffect = NULL;
    this->m_pCanAttentionEffect = NULL;
    this->canDropInfo = NULL;
    this->canExit = NULL;
}

void UMM_HudDungeonMenu::OnClickTracker() {
}

void UMM_HudDungeonMenu::OnClickExit() {
}

void UMM_HudDungeonMenu::OnClickDropInfo() {
}


