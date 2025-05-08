#include "MM_HudPotionSlot.h"

UMM_HudPotionSlot::UMM_HudPotionSlot() {
    this->m_iEffectID_UsePotion = 0;
    this->m_iEffectID_EndCooltime = 0;
    this->m_fPressedSelectTime = 3.00f;
    this->m_TextCount = NULL;
    this->m_pImgIcon = NULL;
    this->NotAutoUseItemStringID = 1049020;
    this->m_pCanSlot = NULL;
    this->m_Txt_CoolTime = NULL;
    this->m_pImgPotionCool = NULL;
    this->m_pGridEffect = NULL;
    this->m_pBtnPotionArea = NULL;
    this->m_Img_Empty = NULL;
    this->m_Img_Effect_Auto = NULL;
    this->m_Can_AutoState = NULL;
    this->m_pAnim_AutoOn = NULL;
    this->m_pAnim_AutoOff = NULL;
    this->m_Can_AniAuto = NULL;
    this->m_Can_AniManual = NULL;
    this->m_Effect_Use = NULL;
    this->m_pCanRemove = NULL;
    this->m_pBtnRemove = NULL;
}

void UMM_HudPotionSlot::OnReleasePotion() {
}

void UMM_HudPotionSlot::OnPressedPotion() {
}

void UMM_HudPotionSlot::OnClickRemoveSlotButton() {
}


