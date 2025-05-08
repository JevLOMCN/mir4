#include "QuestStatusCheckTrigger.h"
#include "ETriggerType.h"

AQuestStatusCheckTrigger::AQuestStatusCheckTrigger(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->m_TriggerType = ETriggerType::QUEST_STATUS_CHECK;
    this->m_QuestID = 0;
    this->m_SubQuestIndex = 0;
}


