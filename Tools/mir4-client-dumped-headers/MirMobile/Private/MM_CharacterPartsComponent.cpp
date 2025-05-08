#include "MM_CharacterPartsComponent.h"

UMM_CharacterPartsComponent::UMM_CharacterPartsComponent(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->m_pMainAnimInstance = NULL;
    this->bDoneUseMaterialUpdate = true;
    this->bUseAttachParentBound = false;
    this->bComponentUseFixedSkelBounds = false;
    this->bCustomBoundsExtension = false;
    this->bIgnoreOcclusionVolume = false;
    this->m_fBurstFresnel_Exponenth = 1.00f;
    this->m_fBurstFresnel_BaseReflect = 0.10f;
    this->m_fBurstFresnel_power = 2.50f;
    this->m_fHitFresnel_Exponenth = 2.00f;
    this->m_fHitFresnel_BaseReflect = 0.10f;
    this->m_fConstFlashTime = 0.15f;
    this->m_fConstGuardHitFlashTime = 0.00f;
    this->DieEffectTime = 2.00f;
    this->Dissolve = 1.00f;
    this->EmissiveBurn = 5.00f;
    this->m_CustomMaterialInstance = NULL;
}


