#include "MM_WidgetManager.h"

UMM_WidgetManager::UMM_WidgetManager() {
    this->m_pWidgetMaster = NULL;
    this->m_pHeroCamera = NULL;
    this->m_iPreloadedClassID = 0;
    this->m_bPreloadedLoginState = false;
    this->m_bLoadCompleteLoginState = false;
    this->m_pLoadingImage = NULL;
}


