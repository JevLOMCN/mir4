#include "PcWarpTrigger.h"
#include "ETriggerType.h"

APcWarpTrigger::APcWarpTrigger(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->m_TriggerType = ETriggerType::PCWARP;
    this->m_bActiveTriggerCondition = false;
}


