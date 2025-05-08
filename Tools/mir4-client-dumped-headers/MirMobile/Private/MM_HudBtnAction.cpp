#include "MM_HudBtnAction.h"

UMM_HudBtnAction::UMM_HudBtnAction() {
    this->m_OnRoundCoolTime = false;
    this->m_AniPress = NULL;
    this->m_iEffectID_Open = 0;
    this->m_iEffectID_Continue = 0;
    this->m_iEffectID_EndCooltime = 0;
    this->m_iEffectID_UseOK = 0;
    this->m_iEffectID_Touched = 0;
    this->m_pImgActionBG = NULL;
    this->m_pImgAction = NULL;
    this->m_pImgCooltime = NULL;
    this->m_pBtnAction = NULL;
    this->m_pGridEffect = NULL;
    this->m_pContinueEffect = NULL;
    this->m_pEndCooltimeEffect = NULL;
    this->m_pImg_RoundCooltime = NULL;
    this->m_pGrd_RoundCooltime = NULL;
}

void UMM_HudBtnAction::OnReleasedButtonMenu() {
}

void UMM_HudBtnAction::OnPressedButtonMenu() {
}

void UMM_HudBtnAction::OnClickButtonMenu() {
}


