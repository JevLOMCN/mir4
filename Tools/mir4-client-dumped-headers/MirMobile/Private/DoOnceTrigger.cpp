#include "DoOnceTrigger.h"
#include "ETriggerType.h"

ADoOnceTrigger::ADoOnceTrigger(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->m_TriggerType = ETriggerType::DO_ONCE;
}


