#include "MM_Costume_Inventory_Tab.h"

UMM_Costume_Inventory_Tab::UMM_Costume_Inventory_Tab() {
    this->CostumeType = ECostumeType::Costume;
    this->CostumeParts = COSTUME_PARTS::PARTS_NONE;
    this->DefaultIconId = 0;
    this->SelectIconId = 0;
    this->Img_Symbol = NULL;
    this->Img_Symbol_Select = NULL;
    this->m_Img_Indicator = NULL;
    this->txt_count = NULL;
    this->Btn_Tab = NULL;
    this->m_PanEffect = NULL;
}

void UMM_Costume_Inventory_Tab::OnReleasedTab() {
}

void UMM_Costume_Inventory_Tab::OnClickInventoryTab() {
}


