#include "TriggerWayPoint.h"
#include "ETriggerType.h"

ATriggerWayPoint::ATriggerWayPoint(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->m_TriggerType = ETriggerType::OTHER;
    this->m_bActiveTriggerCondition = false;
    this->Next = NULL;
    this->prev = NULL;
}


