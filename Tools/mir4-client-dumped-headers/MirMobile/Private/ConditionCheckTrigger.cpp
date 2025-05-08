#include "ConditionCheckTrigger.h"
#include "ETriggerType.h"

AConditionCheckTrigger::AConditionCheckTrigger(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->m_TriggerType = ETriggerType::CONDITIONCHECK;
    this->m_ConditionType = ECondtionTriggerType::HP;
    this->m_ConditionTargetType = EConditionTriggerTargetType::PC;
    this->m_ConditionTargetID = 0;
    this->m_ConditionValue = 0.00f;
}


