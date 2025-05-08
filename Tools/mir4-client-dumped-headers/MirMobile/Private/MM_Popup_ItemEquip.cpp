#include "MM_Popup_ItemEquip.h"

UMM_Popup_ItemEquip::UMM_Popup_ItemEquip() {
    this->Slot_FromItem = NULL;
    this->Slot_ToItem = NULL;
    this->BattlePointSlot = NULL;
    this->Txt_FromItemName = NULL;
    this->Txt_ToItemName = NULL;
    this->RichTxt_InfoMessage = NULL;
    this->btn_close = NULL;
    this->Btn_Cancel = NULL;
    this->btn_equip = NULL;
    this->m_Txt_BattlePointName = NULL;
    this->m_Txt_BattlePoint = NULL;
    this->m_Img_Deco_Arrow = NULL;
    this->m_Txt_AfterValue = NULL;
    this->m_ComparePoint = NULL;
    this->m_Img_Option_Grade = NULL;
    this->LEVEL_COUNT_EFFECT = 1010200;
    this->TARGET_SLOT_LOOP_EFFECT = 1010201;
}

void UMM_Popup_ItemEquip::OnClickEquip() {
}

void UMM_Popup_ItemEquip::OnClickCancel() {
}


