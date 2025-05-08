#include "MM_B_SynthesisResult.h"

UMM_B_SynthesisResult::UMM_B_SynthesisResult() {
    this->STRING_ID_BTN_OPENALL = 2004801;
    this->STRING_ID_BTN_CLOSE = 2004802;
    this->STRING_TITLE_SYNTHESIS = 2004806;
    this->STRING_TITLE_CHANGE = 1068504;
    this->STRING_ID_GRADE_EPIC = 2004912;
    this->STRING_ID_GRADE_LEGEND = 2004913;
    this->NORMAL_CARD_APPEAR_DELAY = 0.07f;
    this->HERO_CARD_APPEAR_DELAY = 1.50f;
    this->m_pTitleTxt = NULL;
    this->m_pBtnOk = NULL;
    this->m_pStartAni = NULL;
    this->m_pEndAni = NULL;
    this->m_RTxt_AddPoint[0] = NULL;
    this->m_RTxt_AddPoint[1] = NULL;
}

void UMM_B_SynthesisResult::OnOk() {
}


