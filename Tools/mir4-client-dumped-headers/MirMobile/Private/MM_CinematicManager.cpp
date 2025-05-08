#include "MM_CinematicManager.h"

UMM_CinematicManager::UMM_CinematicManager() {
    this->m_pCutsceneDialogue = NULL;
    this->m_pLevelSequencePlayer = NULL;
    this->m_pLevelSequenceActor = NULL;
    this->m_pCallbackObject = NULL;
}

void UMM_CinematicManager::OnPlaySequence() {
}

void UMM_CinematicManager::OnFinishedSequence() {
}


