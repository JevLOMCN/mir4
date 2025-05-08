#include "ScriptMonsterKillCountTrigger.h"
#include "ETriggerType.h"

AScriptMonsterKillCountTrigger::AScriptMonsterKillCountTrigger(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->m_TriggerType = ETriggerType::SCRIPT_MONSTER_KILL_CHECK;
}


