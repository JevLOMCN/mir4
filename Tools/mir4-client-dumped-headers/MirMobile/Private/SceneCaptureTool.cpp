#include "SceneCaptureTool.h"

USceneCaptureTool::USceneCaptureTool() {
    this->Slider_CameraRotator = NULL;
    this->Slider_DirLight = NULL;
    this->ComboBox_ChangePC = NULL;
    this->ComboBox_ChangeUI = NULL;
    this->Btn_Reset_01 = NULL;
    this->Btn_Reset_02 = NULL;
    this->Btn_Reset_03 = NULL;
    this->Btn_Save_01 = NULL;
    this->Btn_Save_02 = NULL;
    this->Btn_Save_03 = NULL;
    this->Txt_Location = NULL;
    this->Txt_Rotator = NULL;
    this->Txt_FOV = NULL;
    this->Txt_Sensitivity = NULL;
    this->Slider_Opacity = NULL;
    this->Txt_Opacity = NULL;
}

void USceneCaptureTool::OnSaveCamera03() {
}

void USceneCaptureTool::OnSaveCamera02() {
}

void USceneCaptureTool::OnSaveCamera01() {
}

void USceneCaptureTool::OnResetCamera03() {
}

void USceneCaptureTool::OnResetCamera02() {
}

void USceneCaptureTool::OnResetCamera01() {
}

void USceneCaptureTool::OnChangedWidgetOpacity(float Value) {
}

void USceneCaptureTool::OnChangedSceneCameraRotation(FRotator Rotator) {
}

void USceneCaptureTool::OnChangedDirLightRotation(FRotator Rotator) {
}

void USceneCaptureTool::OnChangedComboxUI(const FString& SelectedItem, TEnumAsByte<ESelectInfo::Type> SelectionType) {
}

void USceneCaptureTool::OnChangedComboxPC(const FString& SelectedItem, TEnumAsByte<ESelectInfo::Type> SelectionType) {
}

void USceneCaptureTool::MoveUp(float Value) {
}

void USceneCaptureTool::MoveRight(float Value) {
}

void USceneCaptureTool::MoveForward(float Value) {
}

void USceneCaptureTool::AddCameraPitchInput(float Value) {
}

void USceneCaptureTool::AddCameraFOVInput(float Value) {
}


