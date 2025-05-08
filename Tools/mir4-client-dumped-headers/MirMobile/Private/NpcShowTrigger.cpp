#include "NpcShowTrigger.h"
#include "ETriggerType.h"

ANpcShowTrigger::ANpcShowTrigger(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->m_TriggerType = ETriggerType::NPCSHOW;
    this->m_bActiveTriggerCondition = false;
    this->m_NpcShowID = 0;
    this->m_pNpc = NULL;
}


