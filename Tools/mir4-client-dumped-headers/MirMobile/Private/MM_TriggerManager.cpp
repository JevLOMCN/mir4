#include "MM_TriggerManager.h"

AMM_TriggerManager::AMM_TriggerManager(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->m_bTest = false;
    this->m_pTriggerTable = NULL;
}

void AMM_TriggerManager::InitTriggerManager(int32 TriggerGroupID) {
}


