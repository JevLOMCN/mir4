#include "BeginPlayTrigger.h"
#include "ETriggerType.h"

ABeginPlayTrigger::ABeginPlayTrigger(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->m_TriggerType = ETriggerType::BEGINPLAY;
}


