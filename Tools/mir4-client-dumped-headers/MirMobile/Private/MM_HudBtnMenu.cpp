#include "MM_HudBtnMenu.h"

UMM_HudBtnMenu::UMM_HudBtnMenu() {
    this->m_iMenuNameFontSize = 12;
    this->m_AniPress = NULL;
    this->m_iEffectID_Touched = 0;
    this->m_iEffectID_ContentsOpen = 0;
    this->m_iBackgroundEffectID = 1020307;
    this->m_bBlockTutorial = false;
    this->m_bUseIndicatorCount = false;
    this->m_pImgMenuIcon = NULL;
    this->m_pBtnMenu = NULL;
    this->m_pGridIndicator = NULL;
    this->m_Img_Indicator = NULL;
    this->m_Txt_Indicator = NULL;
    this->m_pGridEffect = NULL;
    this->m_pContentsOpenEffect = NULL;
    this->m_BGEffectPanel = NULL;
    this->m_pBGEffect = NULL;
    this->m_pTextBlockMenuName = NULL;
}

void UMM_HudBtnMenu::OnReleasedButtonMenu() {
}

void UMM_HudBtnMenu::OnPressedButtonMenu() {
}

void UMM_HudBtnMenu::OnClickButtonMenu() {
}


