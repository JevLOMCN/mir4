#include "MM_CustomizingAnimInstance.h"

UMM_CustomizingAnimInstance::UMM_CustomizingAnimInstance() {
    this->m_HeadOffsetPitch = 0.00f;
    this->m_HeadOffsetYaw = 0.00f;
    this->m_HeadOffsetRoll = 0.00f;
    this->m_EyePitch = -5.00f;
    this->m_EyeOffset = 10.00f;
    this->m_HeadRotateAngle = 0.00f;
    this->m_NeckYawLimit = 45.00f;
    this->m_NeckPitchLimit = 45.00f;
    this->m_HeadYawLimit = 45.00f;
    this->m_HeadPitchLimit = 60.00f;
    this->m_EyeYawLimit = 20.00f;
    this->m_EyePitchLimit = 20.00f;
    this->m_EyeCenter = 0.00f;
    this->m_bCustomingPoseFlag = false;
    this->m_nCustomingPoseIndex = 0;
    this->m_CurrentBoneTransformAlpha = 0.00f;
    this->MainState = 0;
}

void UMM_CustomizingAnimInstance::SetStiffnessAndDampingData(float Stiffness01, float Stiffness02, float Stiffness03, float Stiffness04, float Stiffness05, float Damping01, float Damping02, float Damping03, float Damping04, float Damping05) {
}


void UMM_CustomizingAnimInstance::SetMainState(int32 NewMainState) {
}

void UMM_CustomizingAnimInstance::SetCameraUpdateFlag(bool bUpdate) {
}

void UMM_CustomizingAnimInstance::SetActorHiddenInGame(bool bNewHidden) {
}

void UMM_CustomizingAnimInstance::OnLookAtAlpha(bool bOnLookAt, bool bImmediately, float InterpSpeed) {
}


