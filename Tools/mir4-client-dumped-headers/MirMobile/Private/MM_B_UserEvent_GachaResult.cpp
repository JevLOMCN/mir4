#include "MM_B_UserEvent_GachaResult.h"

UMM_B_UserEvent_GachaResult::UMM_B_UserEvent_GachaResult() {
    this->STRING_ID_BTN_OPENALL = 2004801;
    this->STRING_ID_BTN_CLOSE = 2004802;
    this->STRING_ID_GRADE_EPIC = 2004912;
    this->STRING_ID_GRADE_LEGEND = 2004913;
    this->NORMAL_CARD_APPEAR_DELAY = 0.07f;
    this->HERO_CARD_APPEAR_DELAY = 1.50f;
    this->m_pTitleTxt = NULL;
    this->m_pBtnOk = NULL;
    this->m_Btn_OpenAll = NULL;
    this->m_pStartAni = NULL;
    this->m_pEndAni = NULL;
}

void UMM_B_UserEvent_GachaResult::OnOpenAll() {
}

void UMM_B_UserEvent_GachaResult::OnOk() {
}


