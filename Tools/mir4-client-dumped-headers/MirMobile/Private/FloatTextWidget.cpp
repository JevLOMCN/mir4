#include "FloatTextWidget.h"

UFloatTextWidget::UFloatTextWidget() {
    this->OverlapRandomOffsetMin = 50.00f;
    this->OverlapRandomOffsetMax = 100.00f;
    this->IconID_Critical = 0;
    this->IconID_Unbeatable = 0;
    this->IconID_ImmuneDamage = 0;
    this->IconID_Immortal = 0;
    this->IconID_Dodge = 0;
    this->IconID_Miss = 0;
    this->IconID_Defense = 0;
    this->IconID_Shield = 0;
    this->IconID_Absorb = 0;
    this->IconID_ProtectPVP = 0;
    this->IconID_Spirit = 0;
    this->IconID_SiegeGuard = 0;
    this->WidgetAnim_My_Damage = NULL;
    this->WidgetAnim_My_Smite = NULL;
    this->WidgetAnim_My_Critical = NULL;
    this->WidgetAnim_My_TextFont = NULL;
    this->WidgetAnim_My_Gain = NULL;
    this->WidgetAnim_My_Lost = NULL;
    this->WidgetAnim_Other_Damage = NULL;
    this->WidgetAnim_Other_Smite = NULL;
    this->WidgetAnim_Other_Critical = NULL;
    this->WidgetAnim_Other_TextFont = NULL;
    this->WidgetAnim_Other_Gain = NULL;
    this->WidgetAnim_Other_Lost = NULL;
    this->m_pImg_100000 = NULL;
    this->m_pImg_10000 = NULL;
    this->m_pImg_1000 = NULL;
    this->m_pImg_100 = NULL;
    this->m_pImg_10 = NULL;
    this->m_pImg_1 = NULL;
    this->m_pImg_Txt = NULL;
    this->m_pImg_PlusMinus = NULL;
    this->m_pImg_Blood = NULL;
    this->BaseGridPanel = NULL;
}

void UFloatTextWidget::OnAnimEnd() {
}


