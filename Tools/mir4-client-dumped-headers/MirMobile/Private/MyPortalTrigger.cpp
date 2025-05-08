#include "MyPortalTrigger.h"

AMyPortalTrigger::AMyPortalTrigger(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->m_bMiniMapHide = false;
    this->m_AppearLength = 0.00f;
    this->m_PortalTriggerID = 0;
    this->m_CurrentStageID = 0;
    this->m_bHidePortal = false;
    this->m_bEnablePortal = false;
}




void AMyPortalTrigger::SetPortalData() {
}




void AMyPortalTrigger::NotifyEndOverlap() {
}

void AMyPortalTrigger::NotifyBeginOverlap() {
}


bool AMyPortalTrigger::IsOverlapPortal_Implementation() {
    return false;
}

void AMyPortalTrigger::EnterNextLevel() {
}


