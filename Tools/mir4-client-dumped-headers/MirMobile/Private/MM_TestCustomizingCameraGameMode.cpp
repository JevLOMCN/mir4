#include "MM_TestCustomizingCameraGameMode.h"

AMM_TestCustomizingCameraGameMode::AMM_TestCustomizingCameraGameMode(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->m_SubCategory = 0;
}

void AMM_TestCustomizingCameraGameMode::SetZoomValue(float ZoomValue) {
}

void AMM_TestCustomizingCameraGameMode::SaveData() {
}


void AMM_TestCustomizingCameraGameMode::LoadData() {
}

void AMM_TestCustomizingCameraGameMode::LinkCamera(const FString& CameraName) {
}

void AMM_TestCustomizingCameraGameMode::GetCameraValue(const FString& CameraName, bool& bSucess, FVector& CamLoc, FRotator& CamRot, float& CamFOV, float& CharacterYaw) {
}

void AMM_TestCustomizingCameraGameMode::DeleteCamera(const FString& CameraName) {
}

void AMM_TestCustomizingCameraGameMode::AddCameraValue(const FString& CameraName, FVector CamLoc, FRotator CamRot, float CamFOV, float CharacterYaw) {
}


