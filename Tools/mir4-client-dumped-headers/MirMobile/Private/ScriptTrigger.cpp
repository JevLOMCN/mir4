#include "ScriptTrigger.h"
#include "ETriggerType.h"

AScriptTrigger::AScriptTrigger(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->m_TriggerType = ETriggerType::SCRIPT;
}


