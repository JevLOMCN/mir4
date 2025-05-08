#include "MM_Btn_HudSkill.h"

UMM_Btn_HudSkill::UMM_Btn_HudSkill() {
    this->m_iEffectID_EndCooltime = 0;
    this->m_iEffectID_DechChange = 0;
    this->m_iEffectID_ContentsOpen = 0;
    this->m_iEffectID_Use = 0;
    this->m_iEffectID_DurationSkill = 1070029;
    this->m_iEffectID_ChangeDeck = 1070219;
    this->AreaButton = NULL;
    this->LockIcon = NULL;
    this->SilenceIcon = NULL;
    this->SkillIcon = NULL;
    this->CoolTimeGauge = NULL;
    this->CoolTimeCountWarpBox = NULL;
    this->CoolTimeCount_1 = NULL;
    this->CoolTimeCount_10 = NULL;
    this->CoolTimeCount_100 = NULL;
    this->WaitTimeGauge = NULL;
    this->ManualStatePanel = NULL;
    this->AutoStateAniPanel = NULL;
    this->AutoOnEffect = NULL;
    this->AutoOnAnimation = NULL;
    this->AutoOffAnimation = NULL;
    this->AutoAnimationPanel = NULL;
    this->ManualAnimationPanel = NULL;
    this->EffectPanel = NULL;
    this->SmiteEffectPanel = NULL;
    this->SmiteAnimation = NULL;
    this->ClickEffectPanel = NULL;
    this->ClickAnimation = NULL;
    this->DeckChangeEffectPanel = NULL;
    this->DeckChangeAnimation = NULL;
    this->CoolEndEffectPanel = NULL;
    this->CoolEndAnimation = NULL;
}

void UMM_Btn_HudSkill::OnFinishedClickEffect() {
}


