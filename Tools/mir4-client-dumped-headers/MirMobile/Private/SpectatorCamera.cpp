#include "SpectatorCamera.h"

ASpectatorCamera::ASpectatorCamera(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->m_MoveSpeed = 0.00f;
    this->m_WalkSpeed = 0.00f;
    this->m_RunSpeed = 0.00f;
    this->m_MouseSensitivity = 0.00f;
    this->m_MoveInterpSpeed = 0.00f;
    this->m_RotationInterpSpeed = 0.00f;
    this->m_pTargetActor = NULL;
}

void ASpectatorCamera::YawCamera(float AxisValue) {
}

void ASpectatorCamera::SetPresetData(int32 PresetIndex) {
}

void ASpectatorCamera::SetCameraTarget(AActor* pTargetActor) {
}

void ASpectatorCamera::PitchCamera(float AxisValue) {
}

void ASpectatorCamera::MoveUp(float AxisValue) {
}

void ASpectatorCamera::MoveRight(float AxisValue) {
}

void ASpectatorCamera::MoveForward(float AxisValue) {
}


