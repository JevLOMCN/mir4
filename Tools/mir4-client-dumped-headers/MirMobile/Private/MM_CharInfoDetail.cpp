#include "MM_CharInfoDetail.h"

UMM_CharInfoDetail::UMM_CharInfoDetail() {
    this->ScrollBox_Offset = 100;
    this->SkipTimer_ScrollBox = 0.50f;
    this->m_CloseBtn = NULL;
    this->m_ScrollBox = NULL;
    this->m_ScrollPanel_0 = NULL;
    this->m_ScrollPanel_1 = NULL;
    this->m_AniStart = NULL;
    this->m_AniEnd = NULL;
    this->m_pRefWidget = NULL;
    this->m_ScrollDots = NULL;
    this->ScrollBox_Offset_Old = 0;
    this->EventSkip = false;
}

void UMM_CharInfoDetail::OnScrollEvent(float fOffset) {
}

void UMM_CharInfoDetail::OnClickMain_Status(int32 StatusId, UMM_Option_Ability* pRefWidget) {
}

void UMM_CharInfoDetail::OnClickClose() {
}


