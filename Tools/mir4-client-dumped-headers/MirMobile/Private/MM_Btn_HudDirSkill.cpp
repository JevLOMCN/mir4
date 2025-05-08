#include "MM_Btn_HudDirSkill.h"

UMM_Btn_HudDirSkill::UMM_Btn_HudDirSkill() {
    this->m_iEffectID_EndCooltime = 0;
    this->m_iEffectID_Use = 0;
    this->m_iEffectID_Smite = 0;
    this->m_iEffectID_ContentsOpen = 0;
    this->m_fRageGaugeInterpSpeed = 5.00f;
    this->AreaButton = NULL;
    this->LockIcon = NULL;
    this->SilenceIcon = NULL;
    this->SkillIcon = NULL;
    this->CoolTimeGauge = NULL;
    this->RageGauge = NULL;
    this->CoolTimeCountWarpBox = NULL;
    this->CoolTimeCount_1 = NULL;
    this->CoolTimeCount_10 = NULL;
    this->CoolTimeCount_100 = NULL;
    this->EffectPanel = NULL;
    this->SmiteEffectPanel = NULL;
    this->SmiteAnimation = NULL;
    this->ClickEffectPanel = NULL;
    this->ClickAnimation = NULL;
    this->CoolEndEffectPanel = NULL;
    this->CoolEndAnimation = NULL;
}


