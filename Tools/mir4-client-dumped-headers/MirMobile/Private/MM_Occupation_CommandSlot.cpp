#include "MM_Occupation_CommandSlot.h"

UMM_Occupation_CommandSlot::UMM_Occupation_CommandSlot() {
    this->CommandSlotType = EOccupationCommandSlotType::NONE;
    this->m_UIDrag = NULL;
    this->m_Img_Mark = NULL;
    this->m_Txt_Command = NULL;
    this->m_Img_Disabled = NULL;
    this->m_DisableSpacer = NULL;
    this->m_Btn_Edit = NULL;
    this->m_Btn_Apply = NULL;
    this->m_Btn_Cancel = NULL;
}

void UMM_Occupation_CommandSlot::OnStartControlButton(FVector2D DragLoc) {
}

void UMM_Occupation_CommandSlot::OnReleasedControlButton(FVector2D DragLoc) {
}

void UMM_Occupation_CommandSlot::OnDragControlButton(FVector2D DragLoc) {
}

void UMM_Occupation_CommandSlot::OnClickButtonMarkIcon() {
}

void UMM_Occupation_CommandSlot::OnClickButtonEdit() {
}

void UMM_Occupation_CommandSlot::OnClickButtonCancel() {
}

void UMM_Occupation_CommandSlot::OnClickButtonApply() {
}


