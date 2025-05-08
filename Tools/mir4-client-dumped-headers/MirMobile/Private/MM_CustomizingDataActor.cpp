#include "MM_CustomizingDataActor.h"

AMM_CustomizingDataActor::AMM_CustomizingDataActor(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->m_pDefaultMesh = NULL;
    this->m_pHairMesh = NULL;
    this->m_pBodyMesh = NULL;
    this->m_pPoseableMesh = NULL;
    this->m_HeadRotationSpeed = 0.00f;
    this->m_HeadRotationReturnSpeed = 0.00f;
    this->m_EyeRotationSpeed = 0.00f;
    this->m_pUIBackGroundActor = NULL;
}

void AMM_CustomizingDataActor::SetControlData(const FString& strKey, float SlideValue) {
}

void AMM_CustomizingDataActor::SaveSetting() {
}

void AMM_CustomizingDataActor::SaveCustomizingValueData() {
}

void AMM_CustomizingDataActor::SaveBoneData() {
}

void AMM_CustomizingDataActor::LoadCustomizingValueData() {
}

void AMM_CustomizingDataActor::LoadBoneData() {
}

TArray<FFinalBoneOffset> AMM_CustomizingDataActor::GetTotalBoneOffset() {
    return TArray<FFinalBoneOffset>();
}




USkeletalMesh* AMM_CustomizingDataActor::DuplicateSkeletalMesh(USkeletalMesh* SkeletalMesh) {
    return NULL;
}

void AMM_CustomizingDataActor::ApplyCustomBone() {
}


