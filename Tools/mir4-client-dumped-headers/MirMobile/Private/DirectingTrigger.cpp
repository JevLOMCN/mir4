#include "DirectingTrigger.h"
#include "ETriggerType.h"

ADirectingTrigger::ADirectingTrigger(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->m_TriggerType = ETriggerType::DIRECTING;
    this->m_SequencePlayID = 0;
    this->m_DirectingState = EDirectingTriggerType::SMALL_TALK;
}


void ADirectingTrigger::OnFinishDirecting() {
}


