#include "MM_Item_Make_Special_Popup.h"

UMM_Item_Make_Special_Popup::UMM_Item_Make_Special_Popup() {
    this->m_Txt_None = NULL;
    this->m_Item_Name = NULL;
    this->m_Regist_Complete_Btn = NULL;
    this->m_Close_Btn = NULL;
    this->m_ScrollBox = NULL;
    this->mMakeItemID = 0;
    this->SPECIAL_MATERIAL_TITLE_NAME = 1026018;
    this->SPECIAL_MATERIAL_WEAPON = 1026019;
    this->SPECIAL_MATERIAL_ARMOR = 1026020;
    this->SPECIAL_MATERIAL_ACCESSORY = 1026021;
}

void UMM_Item_Make_Special_Popup::OnClickRegistComplete() {
}

void UMM_Item_Make_Special_Popup::OnClickMaterialItem(UMM_Slot_Base* pSlot) {
}

void UMM_Item_Make_Special_Popup::OnClickInvenSlot(UMM_Slot_Base* SlotWidget) {
}

void UMM_Item_Make_Special_Popup::OnClickClose() {
}


