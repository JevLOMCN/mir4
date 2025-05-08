#include "MM_PhotoModeWidget.h"

UMM_PhotoModeWidget::UMM_PhotoModeWidget() {
    this->m_pPhotoModeCharacter = NULL;
    this->m_pPhotoModeData = NULL;
    this->m_pPopup_ScreenShotOption = NULL;
    this->m_pPopup_ScreenShotOption_CancelBtn = NULL;
    this->m_pPopup_ScreenShotOption_SaveBtn = NULL;
}




TArray<UWidget*> UMM_PhotoModeWidget::ShowSubButton(int32 ButtonLength, TArray<UWidget*> ButtonArray) {
    return TArray<UWidget*>();
}







void UMM_PhotoModeWidget::OnCompleteScreenCapture() {
}


void UMM_PhotoModeWidget::OnClickSubButton(EPhotoModeType PhotoModeState, int32 SlotIndex) {
}

void UMM_PhotoModeWidget::OnClickScreenCapture() {
}

void UMM_PhotoModeWidget::OnClickOptionSave(bool bSave) {
}

void UMM_PhotoModeWidget::OnClickMainButton(EPhotoModeType ClickPhotoModeState, bool bChecked) {
}

void UMM_PhotoModeWidget::OnClickCameraReset() {
}

void UMM_PhotoModeWidget::OnCheckeOption(EPhotoModeOptionType CheckOption, bool bChecked) {
}

void UMM_PhotoModeWidget::OnChangedSliderValue(float SliderValue) {
}

void UMM_PhotoModeWidget::OnCameraMoveButton(EPhotoModeCameraMoveButton ClickButton, bool bPressed) {
}






