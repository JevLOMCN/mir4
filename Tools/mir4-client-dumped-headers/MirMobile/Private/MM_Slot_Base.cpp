#include "MM_Slot_Base.h"

UMM_Slot_Base::UMM_Slot_Base() {
    this->SlotBackgroundType = ESlotBackgroundType::NONE;
    this->SlotEmptyType = ESlotEmptyType::DEFAULT_BG;
    this->Skip_Event = false;
    this->Skip_Pressing = false;
    this->m_ImgBg = NULL;
    this->m_ImgIcon = NULL;
    this->m_BtnMain = NULL;
    this->m_PanEffect = NULL;
    this->m_ItemTID = 0;
    this->m_EquipPosition = 0;
    this->m_iGuildShopTID = 0;
    this->m_iSmeltingLevel = 0;
    this->m_iTranscendStep = 0;
    this->m_SlotIndex = -1;
}

void UMM_Slot_Base::OnClickMain_Released() {
}

void UMM_Slot_Base::OnClickMain_Pressing() {
}

void UMM_Slot_Base::OnClickMain() {
}


