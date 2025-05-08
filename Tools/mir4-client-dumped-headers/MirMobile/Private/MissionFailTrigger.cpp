#include "MissionFailTrigger.h"
#include "ETriggerType.h"

AMissionFailTrigger::AMissionFailTrigger(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->m_TriggerType = ETriggerType::MISSION_FAIL;
    this->m_bActiveTriggerCondition = false;
}


