#include "MM_PhotoModeAnimInstance.h"

UMM_PhotoModeAnimInstance::UMM_PhotoModeAnimInstance() {
    this->m_pOutGameLookAtData = NULL;
    this->m_LookAtAlpha = 0.00f;
    this->m_NeckTransformAlpha = 0.00f;
    this->m_HeadTransformAlpha = 0.00f;
    this->m_AnimIndex = 0;
}

bool UMM_PhotoModeAnimInstance::IsEquarAnimIndex(int32 AnimIndex) {
    return false;
}


