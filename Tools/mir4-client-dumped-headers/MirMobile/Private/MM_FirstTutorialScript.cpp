#include "MM_FirstTutorialScript.h"

AMM_FirstTutorialScript::AMM_FirstTutorialScript(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->FirstQuestID = 100000000;
    this->VirtualJoyStickTutorialQuestID = 100000010;
    this->QuestTrackerTutorialQuestID = 100000020;
    this->NpcQuestMarkTutorialQuestID = 100000030;
    this->HudHideTutorialQuestID = 100000035;
    this->BattleTutorialPhaseID = 10025;
    this->m_TutorialState = EFirstTutorialType::NONE;
}

void AMM_FirstTutorialScript::TestFunction4() {
}

void AMM_FirstTutorialScript::TestFunction3() {
}

void AMM_FirstTutorialScript::TestFunction2() {
}

void AMM_FirstTutorialScript::TestFunction1() {
}



