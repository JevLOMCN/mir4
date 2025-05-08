#include "MM_Costume_SlideBar.h"

UMM_Costume_SlideBar::UMM_Costume_SlideBar() {
    this->SLIDER_MAX_SIZE = 90.00f;
    this->SliderCorrectionValue = 0.10f;
    this->SlideBar_Channel = ESLIDEBAR_TYPE::NONE;
    this->Btn_Minus = NULL;
    this->Btn_Plus = NULL;
    this->UIDrag_Slide = NULL;
    this->Txt_Value = NULL;
    this->m_SliderBG_Parent = NULL;
    this->m_SliderBG = NULL;
    this->m_SliderValue = 0;
    this->m_ControlPosX = 0.00f;
    this->m_ControlRatio = 0.00f;
    this->AddBtnValue = 0;
    this->AddValueUpdateTime = 0.10f;
    this->Btn_Pressed_Down = false;
    this->Btn_Pressed_Up = false;
    this->STR_PERCENT = 1034008;
}

void UMM_Costume_SlideBar::UpdateSliderValue(int32 SlideBarType, int32 SliderValue) {
}


void UMM_Costume_SlideBar::OnReleasedControlButton(FVector2D DragLoc) {
}

void UMM_Costume_SlideBar::OnPressPlusBtn() {
}

void UMM_Costume_SlideBar::OnPressMinusBtn() {
}

void UMM_Costume_SlideBar::OnDragControlButton(FVector2D DragX) {
}

void UMM_Costume_SlideBar::OnClickSlider(float posX) {
}

void UMM_Costume_SlideBar::OnClickReleaseBtn() {
}

void UMM_Costume_SlideBar::OnClickePlusBtn() {
}

void UMM_Costume_SlideBar::OnClicekMinusBtn() {
}


