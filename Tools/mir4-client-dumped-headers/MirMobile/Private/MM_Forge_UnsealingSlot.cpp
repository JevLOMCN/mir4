#include "MM_Forge_UnsealingSlot.h"

UMM_Forge_UnsealingSlot::UMM_Forge_UnsealingSlot() {
    this->m_Img_Selected = NULL;
    this->m_Can_NotRegistered = NULL;
    this->m_Img_NotRegisteredSlotLocked = NULL;
    this->m_Img_NotRegisteredSlotPlus = NULL;
    this->m_Can_Registered = NULL;
    this->m_Slot_Item = NULL;
    this->m_Txt_ItemName = NULL;
    this->m_Txt_SupportCount = NULL;
    this->m_Txt_ItemGrade = NULL;
    this->m_Prg_Time = NULL;
    this->m_Prg_SupportTime = NULL;
    this->m_Txt_Time = NULL;
    this->m_CB_UnmountItem = NULL;
    this->m_CB_Get = NULL;
    this->m_UnsealingCompleteEffect_01 = NULL;
    this->m_UnsealingCompleteEffect_02 = NULL;
    this->m_pEffectUnsealEmpty = NULL;
    this->m_pHrzCost = NULL;
    this->m_pTxtCost = NULL;
}

void UMM_Forge_UnsealingSlot::OnClickUnmountItem() {
}

void UMM_Forge_UnsealingSlot::OnClickGet() {
}


