#include "MM_Occupation_Observer_KillLog.h"

UMM_Occupation_Observer_KillLog::UMM_Occupation_Observer_KillLog() {
    this->m_PanelMain = NULL;
    this->m_InitAsyncLoad = false;
    this->m_AddMessageLatency = 0.00f;
    this->CampType = KillLogCampType::None;
}


