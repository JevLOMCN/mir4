#include "MM_Customizing_Slider_ControlBar.h"

UMM_Customizing_Slider_ControlBar::UMM_Customizing_Slider_ControlBar() {
    this->SLIDER_MAX_SIZE = 90.00f;
    this->SliderCorrectionValue = 0.10f;
    this->m_MinusBtn = NULL;
    this->m_PlusBtn = NULL;
    this->m_ValueSlider = NULL;
    this->m_DataInfoText = NULL;
    this->Img_KeypadOn = NULL;
    this->Img_KeypadOff = NULL;
    this->m_CustomizingType = 0;
    this->m_SliderValue = 0;
    this->m_pDragButton = NULL;
    this->m_SliderBG_Parent = NULL;
    this->m_SliderBG = NULL;
    this->m_ControlPosX = 0.00f;
    this->m_ControlRatio = 0.00f;
    this->SumDeltaTime = 0.00f;
    this->SaveSec = 0.00f;
    this->AddBtnValue = 0;
    this->AddValueUpdateTime = 0.10f;
    this->Btn_Pressed_Down = false;
    this->Btn_Pressed_Up = false;
}

void UMM_Customizing_Slider_ControlBar::UpdateSliderValue(int32 SliderValue) {
}


void UMM_Customizing_Slider_ControlBar::OnReleasedControlButton(FVector2D DragLoc) {
}

void UMM_Customizing_Slider_ControlBar::OnPressPlusBtn() {
}

void UMM_Customizing_Slider_ControlBar::OnPressMinusBtn() {
}

void UMM_Customizing_Slider_ControlBar::OnDragControlButton(FVector2D DragX) {
}

void UMM_Customizing_Slider_ControlBar::OnClickSlider(float posX) {
}

void UMM_Customizing_Slider_ControlBar::OnClickReleaseBtn() {
}

void UMM_Customizing_Slider_ControlBar::OnClickePlusBtn() {
}

void UMM_Customizing_Slider_ControlBar::OnClicekMinusBtn() {
}


