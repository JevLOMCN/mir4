#include "PhaseAreaTrigger.h"
#include "ETriggerType.h"

APhaseAreaTrigger::APhaseAreaTrigger(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->m_TriggerType = ETriggerType::PHASEAREA;
    this->m_bActiveTriggerCondition = false;
    this->m_Radius = 1000.00f;
    this->m_Height = 5.00f;
    this->m_BoxCollisionLength = 0;
}

void APhaseAreaTrigger::TestFunction() {
}



