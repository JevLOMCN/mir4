#include "MonsterKillCountTrigger.h"
#include "ETriggerType.h"

AMonsterKillCountTrigger::AMonsterKillCountTrigger(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->m_TriggerType = ETriggerType::MONSTER_KILL_CHECK;
    this->m_pCheckMonsterGroup = NULL;
}


