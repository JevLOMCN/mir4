#include "TutorialGuidWidget.h"

UTutorialGuidWidget::UTutorialGuidWidget() {
    this->m_NonBGCircleEffectID = 0;
    this->m_BGCircleEffectID = 0;
    this->m_pFingerEffect = NULL;
    this->m_pCustomEffectWidgetPanel = NULL;
    this->m_pBox_Left = NULL;
    this->m_pBox_Top = NULL;
    this->m_pBtn_Target = NULL;
    this->m_pImg_BgLeft = NULL;
    this->m_pImg_BgTop = NULL;
    this->m_pImg_BgRight = NULL;
    this->m_pImg_BgBottom = NULL;
    this->m_pBtn_Left = NULL;
    this->m_pBtn_Top = NULL;
    this->m_pBtn_Right = NULL;
    this->m_pBtn_Bottom = NULL;
    this->m_pScl_Effect = NULL;
    this->m_pEffect_Target = NULL;
    this->m_pCustomEffectWidget = NULL;
    this->m_pImg_GuidBoxRect = NULL;
    this->m_pImg_TouchBlock = NULL;
    this->m_pTargetWidget = NULL;
    this->ani_effect = NULL;
    this->cp_skip = NULL;
    this->btn_skip = NULL;
}


void UTutorialGuidWidget::OnTouchBlockTimerEnd() {
}

void UTutorialGuidWidget::OnStepEndTimerEnd() {
}

void UTutorialGuidWidget::OnClickedTargetButton() {
}

void UTutorialGuidWidget::OnClickedSkip() {
}

void UTutorialGuidWidget::OnClickedBg() {
}


