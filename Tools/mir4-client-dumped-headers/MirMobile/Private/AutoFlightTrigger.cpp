#include "AutoFlightTrigger.h"

AAutoFlightTrigger::AAutoFlightTrigger(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->m_bForceJump = false;
    this->m_TriggerID = 0;
    this->m_TriggerGroup = EAutoFlightGroup::GROUP_A;
    this->m_Radius = 0.00f;
    this->m_bQuestTrigger = false;
}

void AAutoFlightTrigger::MyTestFunction() {
}


