#include "CinematicDialogue.h"

ACinematicDialogue::ACinematicDialogue(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->m_pDialogueCameraPreset = NULL;
    this->m_bTest = false;
    this->m_TestDirectingID = 0;
    this->m_pLevelSequenceActor = NULL;
    this->m_pLevelSequencePlayer = NULL;
    this->m_pCutsceneCamera = NULL;
    this->m_pDialogueWidget = NULL;
    this->m_pCallbackObject = NULL;
}

void ACinematicDialogue::TestDialogueStart() {
}

void ACinematicDialogue::SetCameraPlacmentForNextTick() {
}

void ACinematicDialogue::FlipDialogueText() {
}

void ACinematicDialogue::EndCinematicDialogue() {
}


