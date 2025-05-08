#include "CinematicAnimInstance.h"

UCinematicAnimInstance::UCinematicAnimInstance() {
    this->m_FirstAnimationLength = 0.00f;
    this->m_SecondAnimationLength = 0.00f;
    this->m_FirstAniLoop = false;
    this->m_SecondAniLoop = false;
    this->m_bChangeFirstAnim = false;
    this->m_PlayAniState = EPlayAniType::NONE;
    this->m_Speed = 0.00f;
    this->m_LookAtAlpha = 0.00f;
    this->m_pFirstSequence = NULL;
    this->m_pSecondSequence = NULL;
}

UAnimSequenceBase* UCinematicAnimInstance::GetSecondAnim() {
    return NULL;
}

UAnimSequenceBase* UCinematicAnimInstance::GetFirstAnim() {
    return NULL;
}


