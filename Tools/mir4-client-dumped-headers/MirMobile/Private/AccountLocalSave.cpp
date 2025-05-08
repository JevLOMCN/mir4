#include "AccountLocalSave.h"

UAccountLocalSave::UAccountLocalSave() {
    this->m_CustomizingAutoSaveFlag = true;
    this->m_nMiniGameBestScore = 0;
    this->m_bIsFinishVoiceDownload = false;
    this->m_FrontBannerInitDay = 0;
    this->m_bIsFrontBannerSkip = false;
    this->m_eLanguage = ELanguage::KOR;
    this->m_bInitLanguage = false;
    this->m_eRegionCode = ERegionCode::ASIA;
    this->m_strRegionCode = TEXT("NONE");
    this->m_bInitRegionCode = false;
    this->m_strRecommendRegionCode = TEXT("ASIA1");
}


