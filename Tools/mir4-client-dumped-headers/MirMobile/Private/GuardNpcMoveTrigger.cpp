#include "GuardNpcMoveTrigger.h"
#include "ETriggerType.h"

AGuardNpcMoveTrigger::AGuardNpcMoveTrigger(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->m_TriggerType = ETriggerType::GUARD_NPC_MOVE;
    this->m_bActiveTriggerCondition = false;
    this->m_pGuardNpcTrigger = NULL;
    this->m_pWayPoint = NULL;
    this->m_pGuardNpc = NULL;
}


