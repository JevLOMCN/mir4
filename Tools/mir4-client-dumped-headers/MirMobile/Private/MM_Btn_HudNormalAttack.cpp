#include "MM_Btn_HudNormalAttack.h"

UMM_Btn_HudNormalAttack::UMM_Btn_HudNormalAttack() {
    this->m_pImg_NormalAttackIcon = NULL;
    this->m_pBtn_Attack = NULL;
    this->m_pAnim_Click = NULL;
    this->m_iEffectID_Continue = 0;
    this->m_iEffectID_Touched = 0;
    this->m_pGridEffect = NULL;
    this->m_pContinueEffect = NULL;
}

void UMM_Btn_HudNormalAttack::OnReleasedNormalAtk() {
}

void UMM_Btn_HudNormalAttack::OnPressedNormalAtk() {
}


