#include "MM_PKModeSlot.h"

UMM_PKModeSlot::UMM_PKModeSlot() {
    this->m_Btn_Base = NULL;
    this->m_Image_Mode = NULL;
    this->m_TextBlock_Mode = NULL;
    this->m_Image_Selected = NULL;
    this->m_ModeType = EPKModeType::Peace;
    this->m_IsSelected = false;
}

void UMM_PKModeSlot::OnSelected() {
}


