#include "HiddenPathManagerActor.h"

AHiddenPathManagerActor::AHiddenPathManagerActor(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->m_pPortalTrigger1 = NULL;
    this->m_pPortalTrigger2 = NULL;
    this->m_pTownAlarmTrigger1 = NULL;
    this->m_HiddenPathType = 0;
}

void AHiddenPathManagerActor::ExportSafeAreaJson() {
}


