#include "GuardNpcSpawnTrigger.h"
#include "ETriggerType.h"

AGuardNpcSpawnTrigger::AGuardNpcSpawnTrigger(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->m_TriggerType = ETriggerType::GUARD_NPC_SPAWNER;
    this->m_FriendMonsterID = 0;
    this->m_MonsterOrderID = 0;
    this->m_pWayPoint = NULL;
    this->m_pGuardNpc = NULL;
}


