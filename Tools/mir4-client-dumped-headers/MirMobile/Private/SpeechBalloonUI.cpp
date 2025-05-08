#include "SpeechBalloonUI.h"

ASpeechBalloonUI::ASpeechBalloonUI(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->m_pSpeechBalloonWidget = NULL;
    this->m_pTargetMesh = NULL;
    this->m_pTarget = NULL;
}


