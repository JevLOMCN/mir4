#include "MonsterGroupTrigger.h"
#include "ETriggerType.h"

AMonsterGroupTrigger::AMonsterGroupTrigger(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->m_TriggerType = ETriggerType::MONSTER_GROUP;
    this->m_bRegen = false;
    this->m_RegenDelay = 0.00f;
    this->m_bLinkGroup = false;
    this->m_pKillCount = NULL;
}


