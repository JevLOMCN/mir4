#include "MonsterKillTrigger.h"
#include "ETriggerType.h"

AMonsterKillTrigger::AMonsterKillTrigger(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->m_TriggerType = ETriggerType::MONSTER_KILL;
    this->m_bActiveTriggerCondition = false;
    this->m_bInstantKill = false;
    this->m_MonsterOrderID = 0;
}


