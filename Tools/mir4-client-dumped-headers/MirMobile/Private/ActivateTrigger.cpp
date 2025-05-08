#include "ActivateTrigger.h"

AActivateTrigger::AActivateTrigger(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->m_TriggerIndex = 0;
    this->m_TriggerType = ETriggerType::NONE;
    this->m_bActiveTriggerCondition = true;
    this->m_bActivated = false;
    this->m_pTriggerManager = NULL;
}

FString AActivateTrigger::Debug_GetTriggerState() {
    return TEXT("");
}


