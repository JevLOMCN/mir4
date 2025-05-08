#include "MonsterMoveTrigger.h"
#include "ETriggerType.h"

AMonsterMoveTrigger::AMonsterMoveTrigger(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->m_TriggerType = ETriggerType::MONSTER_MOVE;
    this->m_MonsterOrderID = 0;
}


