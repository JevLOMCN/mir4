#include "TownAlarmTrigger.h"

ATownAlarmTrigger::ATownAlarmTrigger(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->IsBox = false;
    this->m_CircleRange = 100.00f;
    this->m_AreaID = 0;
    this->m_pSphereCollision = NULL;
    this->m_pBoxCollision = NULL;
}


void ATownAlarmTrigger::ActivateTrigger(int32 AreaId) {
}


