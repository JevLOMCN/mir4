#include "MM_SoundManagerActor.h"

AMM_SoundManagerActor::AMM_SoundManagerActor(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->m_Time1 = 2.00f;
    this->m_Time2 = 2.00f;
    this->m_pMirSoundData = NULL;
    this->m_pBGMAudio = NULL;
    this->m_pBGMSound = NULL;
    this->m_pDialogueAudio = NULL;
    this->m_DialogueConcurrency = NULL;
    this->Mix_MasterSound = NULL;
}


void AMM_SoundManagerActor::FinishedPlaySound(UAudioComponent* pFinishedComponent) {
}

void AMM_SoundManagerActor::FinishedDialogueSound(UAudioComponent* pFinishedComponent) {
}


