#include "MM_HudAlramHelperList.h"

UMM_HudAlramHelperList::UMM_HudAlramHelperList() {
    this->m_iAlarmEffectID = 1070026;
    this->m_fAlramSlotSize = 70.00f;
    this->m_fAlramListSize = 250.00f;
    this->m_fNoticeShowTime = 10.00f;
    this->m_fAlramListShowTime = 180.00f;
    this->m_AlarmPanel = NULL;
    this->m_ScrollBox = NULL;
    this->m_Grid_Notice = NULL;
    this->m_Txt_Notice = NULL;
    this->m_AnitNotice = NULL;
}

void UMM_HudAlramHelperList::OnClickMain() {
}


