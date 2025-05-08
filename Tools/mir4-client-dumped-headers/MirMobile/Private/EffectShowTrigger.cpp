#include "EffectShowTrigger.h"
#include "ETriggerType.h"

AEffectShowTrigger::AEffectShowTrigger(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->m_TriggerType = ETriggerType::EFFECTSHOW;
    this->m_bActiveTriggerCondition = false;
    this->m_bDefaultShow = false;
    this->m_EffectID = 0;
}



UObject* AEffectShowTrigger::GetEffectSystem(const FString& strPath) {
    return NULL;
}


