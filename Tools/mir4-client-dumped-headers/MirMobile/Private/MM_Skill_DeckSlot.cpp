#include "MM_Skill_DeckSlot.h"

UMM_Skill_DeckSlot::UMM_Skill_DeckSlot() {
    this->LearnSuccessEffectID = 1070213;
    this->levelUpEffectID = 1070204;
    this->SlotTouchEffectID = 1070215;
    this->SelectedSlotEffectID = 1070216;
    this->RegisterSkillEffectID = 1070218;
    this->UnRegisterSkillEffectID = 1070217;
    this->PassiveSkillEffectID = 1070029;
    this->m_Img_MainSkill = NULL;
    this->m_Img_SkillIcon = NULL;
    this->m_Img_Lock = NULL;
    this->m_Txt_SlotIndex = NULL;
    this->m_Grid_Effect = NULL;
    this->m_Grid_LevelUpEffect = NULL;
    this->m_Grid_AwakenEffect = NULL;
    this->m_Btn_Main = NULL;
    this->m_CB_Remove = NULL;
    this->m_CB_Detail = NULL;
    this->m_Grid_Set = NULL;
    this->m_Btn_Set = NULL;
    this->m_LearnSuccessEffect = NULL;
    this->m_LevelUpEffect = NULL;
    this->m_AwakenEffect = NULL;
    this->m_SlotTouchEffect = NULL;
    this->m_SelectedEffect = NULL;
    this->m_RegisterEffect = NULL;
    this->m_UnRegisterEffect = NULL;
    this->m_PassiveEffect = NULL;
    this->m_Img_LevelBG = NULL;
    this->m_Txt_Level = NULL;
}

void UMM_Skill_DeckSlot::OnClickSet() {
}

void UMM_Skill_DeckSlot::OnClickRemove() {
}

void UMM_Skill_DeckSlot::OnClickMain() {
}


