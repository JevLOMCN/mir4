#include "EndPlayTrigger.h"
#include "ETriggerType.h"

AEndPlayTrigger::AEndPlayTrigger(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->m_TriggerType = ETriggerType::ENDPLAY;
    this->m_DelayTime = 0.00f;
}


