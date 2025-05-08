#include "MM_Slot_CostumeCollection.h"

UMM_Slot_CostumeCollection::UMM_Slot_CostumeCollection() {
    this->Img_Icon = NULL;
    this->Txt_Name = NULL;
    this->btn_equip = NULL;
    this->m_CostumeId = 0;
    this->m_CostumePart = COSTUME_PARTS::PARTS_NONE;
    this->STR_ID_EQUIP = 2310016;
    this->STR_ID_UNEQUIP = 1041199;
    this->STRING_MSG_UNEQUIP_DEFAULT_COSTUME = 1047023;
    this->m_DefaultBtn = NULL;
    this->m_DefaultBtnPanel = NULL;
}

void UMM_Slot_CostumeCollection::OnClickSlot() {
}

void UMM_Slot_CostumeCollection::OnClickDefaultSlot() {
}


