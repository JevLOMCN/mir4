#include "MM_GameOption_Slider.h"

UMM_GameOption_Slider::UMM_GameOption_Slider() {
    this->m_eType = EGameOptionSliderType::Default;
    this->m_eTitleLocation = EGameOptionSliderTitleLocation::None;
    this->m_bUseSliderButton = false;
    this->m_iPercent = 0;
    this->m_Txt_Title_0 = NULL;
    this->m_Txt_Title_1 = NULL;
    this->m_Slider = NULL;
    this->m_Txt_SliderPercent = NULL;
    this->m_CB_SliderUp = NULL;
    this->m_CB_SliderDown = NULL;
    this->m_pProgressBar = NULL;
}

void UMM_GameOption_Slider::OnDragSliderEnd() {
}

void UMM_GameOption_Slider::OnDragSlider(float fRatio) {
}

void UMM_GameOption_Slider::OnClickSliderUp() {
}

void UMM_GameOption_Slider::OnClickSliderDown() {
}


