#include "GroupMeditationTrigger.h"

AGroupMeditationTrigger::AGroupMeditationTrigger(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->m_CircleRange = 0.00f;
    this->m_pSphereCollision = NULL;
}


