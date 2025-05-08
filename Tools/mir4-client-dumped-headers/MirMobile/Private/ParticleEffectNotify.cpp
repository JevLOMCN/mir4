#include "ParticleEffectNotify.h"

UParticleEffectNotify::UParticleEffectNotify() {
    this->m_bUseMainPC = false;
    this->UseElement = false;
    this->TestElementType = ePEElement_NORMAL;
    this->m_bUseColor = false;
    this->PSTemplate = NULL;
    this->SkeletalEffect = NULL;
    this->SkeletalEffecthAnimation = NULL;
    this->Attached = false;
    this->m_bUseSkelVert = false;
}


