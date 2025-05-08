#include "MM_ClassSelect_Slot.h"

UMM_ClassSelect_Slot::UMM_ClassSelect_Slot() {
    this->m_ClassID = 0;
    this->m_ClassSelectIconVisible = ESlateVisibility::Visible;
    this->m_pClassFaceImage = NULL;
    this->m_pLockImage = NULL;
    this->m_ClassNameText = NULL;
    this->m_ClassSelectBtn = NULL;
}

void UMM_ClassSelect_Slot::OnSelectEffectSlot(int32 ClassID) {
}

void UMM_ClassSelect_Slot::OnClickClassSlot() {
}


