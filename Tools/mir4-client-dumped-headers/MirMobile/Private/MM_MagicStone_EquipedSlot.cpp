#include "MM_MagicStone_EquipedSlot.h"

UMM_MagicStone_EquipedSlot::UMM_MagicStone_EquipedSlot() {
    this->m_ImgJewelLock = NULL;
    this->m_ImgPlus = NULL;
    this->m_Imgindicator = NULL;
    this->m_ImgDisabled = NULL;
    this->txt_grade = NULL;
    this->txt_smelting = NULL;
    this->m_BtnUnmount = NULL;
    this->m_ActiveSlot = false;
    this->m_JewelSlotIndex = 0;
    this->img_guide = NULL;
    this->animation_guide = NULL;
}

void UMM_MagicStone_EquipedSlot::OnClickUnmountButton() {
}


