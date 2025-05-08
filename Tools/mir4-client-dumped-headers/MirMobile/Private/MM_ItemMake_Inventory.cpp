#include "MM_ItemMake_Inventory.h"

UMM_ItemMake_Inventory::UMM_ItemMake_Inventory() {
    this->ScrollBox = NULL;
    this->m_MaxSlotCount = 0;
    this->m_CurrentSlotCount = 0;
    this->m_SelectedMakeTID = 0;
    this->MIN_SLOT = 40;
    this->MAX_LINE_SLOT = 10;
}

void UMM_ItemMake_Inventory::OnClickSlot(int32 MakeItemID) {
}


