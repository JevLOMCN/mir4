#include "MM_HudQuestSlot.h"

UMM_HudQuestSlot::UMM_HudQuestSlot() {
    this->m_iEffectID_Doing_Tracker = 0;
    this->m_iEffectID_Doing_Icon = 0;
    this->m_iEffectID_Touched = 0;
    this->m_iEffectID_Complate = 0;
    this->m_iEffectID_Complate_Tracker = 0;
    this->m_iEffectID_Attention = 0;
    this->m_CompleteSoundID = 2204006;
    this->m_iMSTRID_Complete = 1012060;
    this->m_iMSTRID_Count = 1012059;
    this->m_iMSTRID_NoControl = 1011004;
    this->m_iMSTRID_Reward = 1210125;
    this->m_pAniReward01 = NULL;
    this->m_pAniReward02 = NULL;
    this->m_pAniReward03 = NULL;
    this->m_fOtherStageStateIconAlpha = 0.50f;
    this->m_pAniQuestUpdate = NULL;
    this->m_pBtnCancel = NULL;
    this->m_pTextQuestTitle = NULL;
    this->m_pGridEffect = NULL;
    this->m_pEffectSelected = NULL;
    this->m_pImgQuestStateIcon = NULL;
    this->m_pBtnTracker = NULL;
    this->m_pGridEffect_Reward = NULL;
    this->m_pTextState = NULL;
    this->m_pTextSubTitle = NULL;
    this->m_pSpacerRight = NULL;
    this->m_pCanRewardSlot = NULL;
    this->m_pEffectUpdate = NULL;
    this->m_pGridEffectStateIcon = NULL;
    this->m_pEffectDoingIcon = NULL;
    this->m_pEffectComplateIcon = NULL;
    this->m_pEffectAttentionIcon = NULL;
}

void UMM_HudQuestSlot::OnQuest() {
}

void UMM_HudQuestSlot::OnClickQuest() {
}

void UMM_HudQuestSlot::OnClickCancelQuest() {
}


