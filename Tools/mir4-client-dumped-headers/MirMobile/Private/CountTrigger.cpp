#include "CountTrigger.h"
#include "ETriggerType.h"

ACountTrigger::ACountTrigger(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->m_TriggerType = ETriggerType::COUNT;
    this->m_MaxCount = 0;
}


