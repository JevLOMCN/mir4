#include "CliffMoveTrigger.h"

ACliffMoveTrigger::ACliffMoveTrigger(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->m_pSplineActor = NULL;
    this->m_bRightVector = false;
}


