#include "MM_CustomizingScreenShot.h"

UMM_CustomizingScreenShot::UMM_CustomizingScreenShot() {
    this->m_pPhotoModeCharacter = NULL;
    this->m_pPhotoModeData = NULL;
    this->pCustomizingActor = NULL;
    this->pCustomizingLevelActor = NULL;
}




TArray<UWidget*> UMM_CustomizingScreenShot::ShowSubButton(int32 ButtonLength, TArray<UWidget*> ButtonArray) {
    return TArray<UWidget*>();
}







void UMM_CustomizingScreenShot::ScreenShotCaptured(int32 ScreenWidth, int32 ScreenHeight, const TArray<FColor>& ScreenColors) {
}

void UMM_CustomizingScreenShot::OnCompleteScreenCapture() {
}


void UMM_CustomizingScreenShot::OnClickSubButton(EPhotoModeType PhotoModeState, int32 SlotIndex) {
}

void UMM_CustomizingScreenShot::OnClickScreenCapture() {
}

void UMM_CustomizingScreenShot::OnClickOptionSave(bool bSave) {
}

void UMM_CustomizingScreenShot::OnClickMainButton(EPhotoModeType ClickPhotoModeState, bool bChecked) {
}


void UMM_CustomizingScreenShot::OnClickCameraReset() {
}

void UMM_CustomizingScreenShot::OnCheckeOption(EPhotoModeOptionType CheckOption, bool bChecked) {
}

void UMM_CustomizingScreenShot::OnChangedSliderValue(float SliderValue) {
}

void UMM_CustomizingScreenShot::OnCameraMoveButton(EPhotoModeCameraMoveButton ClickButton, bool bPressed) {
}






