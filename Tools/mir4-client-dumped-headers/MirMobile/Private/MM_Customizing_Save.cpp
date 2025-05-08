#include "MM_Customizing_Save.h"

UMM_Customizing_Save::UMM_Customizing_Save() {
    this->m_SaveSlotList = NULL;
    this->m_SaveButton = NULL;
    this->m_OkButton = NULL;
    this->m_AutoCheckBox = NULL;
    this->m_EmptyNotice = NULL;
}

void UMM_Customizing_Save::UpdateSaveList() {
}

bool UMM_Customizing_Save::UpdateCheckSaveSlot(int32 _Slot) {
    return false;
}

void UMM_Customizing_Save::UpdateAutoSaveBox() {
}

void UMM_Customizing_Save::RevertCustomizing() {
}

void UMM_Customizing_Save::OnClickSaveSlot(int32 _Slot) {
}

void UMM_Customizing_Save::OnClickSaveButton() {
}

void UMM_Customizing_Save::OnClickOkButton() {
}

void UMM_Customizing_Save::OnClickAutoCheckBox(bool _Check) {
}

TArray<UMM_Customizing_SaveSlot*> UMM_Customizing_Save::CreateSaveSlot_Implementation(int32 Count) {
    return TArray<UMM_Customizing_SaveSlot*>();
}

void UMM_Customizing_Save::ApplyCustomizing() {
}


