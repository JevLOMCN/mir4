#include "CharLocalSave.h"

UCharLocalSave::UCharLocalSave() {
    this->m_iCharUID = 0;
    this->m_ePKModeType = EPKModeType::Peace;
    this->m_ePrePKModeType = EPKModeType::Peace;
    this->m_iHPPotionID = 0;
    this->m_iMPPotionID = 0;
    this->m_UIShopBannerInitDay = 0;
    this->m_bIsUIShopBannerSkip = false;
    this->m_GachaGoodsDay = 0;
    this->m_bIsSuccessGacha = false;
    this->m_bIsSkipGacha = false;
    this->m_UIGachaDay = 0;
    this->m_bIsSkipUIGacha = false;
    this->m_GuildDevelopDay = 0;
    this->m_bIsSuceessGuildDevelop = false;
    this->m_bIsSkipGuildDevelop = false;
    this->m_bIsSkipSicknessRecovery = false;
    this->m_bIsSkipTranscendProbability = false;
    this->IsSkipTranscendProbabilityDay = 0;
    this->m_AdsCoolTimeTicks = 0;
    this->m_bIsPopupAdsRewardSkip = false;
    this->m_PopupAdsRewardInitDay = 0;
    this->m_IsSkipUseSmeltSubMaterial = 0;
    this->m_iVehicleIndicator = 0;
}


