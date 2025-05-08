#include "InvincibilityTrigger.h"
#include "ETriggerType.h"

AInvincibilityTrigger::AInvincibilityTrigger(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->m_TriggerType = ETriggerType::INVINCIBILITY;
    this->m_bActiveTriggerCondition = false;
    this->m_bInvincibility = false;
}


