#include "TimerTrigger.h"
#include "ETriggerType.h"

ATimerTrigger::ATimerTrigger(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->m_TriggerType = ETriggerType::TIMER;
    this->m_Time = 0.00f;
    this->m_bShowLimitTimeWidget = false;
}


