#include "TriggerInfoExtractor.h"

ATriggerInfoExtractor::ATriggerInfoExtractor(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->m_bTestStart = false;
    this->m_bDeleteTrigger = false;
    this->m_FontScale = 1.00f;
}

void ATriggerInfoExtractor::SaveData() {
}

void ATriggerInfoExtractor::LoadData() {
}



