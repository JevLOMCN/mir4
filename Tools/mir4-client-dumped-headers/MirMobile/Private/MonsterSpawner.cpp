#include "MonsterSpawner.h"
#include "ETriggerType.h"

AMonsterSpawner::AMonsterSpawner(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->m_TriggerType = ETriggerType::OTHER;
    this->m_bActiveTriggerCondition = false;
    this->m_MonsterID = 0;
    this->m_MonsterOrderID = 0;
    this->m_MonsterGroup = NULL;
    this->m_prevMonsterGroup = NULL;
    this->m_pMonster = NULL;
}


