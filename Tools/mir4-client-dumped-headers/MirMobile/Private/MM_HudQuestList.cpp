#include "MM_HudQuestList.h"

UMM_HudQuestList::UMM_HudQuestList() {
    this->m_fCheckQuestSelectedTime = 3.00f;
    this->m_pHudQuestSlotWidget = NULL;
    this->m_fTrackerSlotSizeY = 70.00f;
    this->m_pMainQuestSlot = NULL;
    this->m_pAutoSubQuestSlot = NULL;
    this->m_pQuestScrollBox = NULL;
    this->m_pMainGuideIcon = NULL;
    this->m_pMainGuideBG = NULL;
    this->m_pGuideAni = NULL;
}


