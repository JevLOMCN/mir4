#include "MiniGame_ManagerActor.h"

AMiniGame_ManagerActor::AMiniGame_ManagerActor(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->m_MiniGameData = NULL;
    this->m_BackgroundActor = NULL;
    this->m_NextBackgroundActor = NULL;
    this->m_PlayerActor = NULL;
    this->m_MiniGameWidget = NULL;
    this->m_bBpTickFlag = false;
    this->m_fCameraProductionFlag = false;
    this->m_fProductionCameraPos = 0.00f;
    this->m_fProductionPlayerPos = 0.00f;
    this->m_fPatchEndDelay = 5.00f;
}






void AMiniGame_ManagerActor::PlayMiniGameSound(EMiniGameSoundType eSoundType) {
}


