#include "MM_MyCharinfo.h"

UMM_MyCharinfo::UMM_MyCharinfo() {
    this->m_DetailStatBtn = NULL;
    this->CombatPoint = NULL;
    this->m_OptionNum[0] = NULL;
    this->m_OptionNum[1] = NULL;
    this->m_OptionNum[2] = NULL;
    this->m_OptionNum[3] = NULL;
    this->m_OptionNum[4] = NULL;
    this->m_OptionNum[5] = NULL;
    this->m_CharInfo = NULL;
    this->m_EquipSlot[0] = NULL;
    this->m_EquipSlot[1] = NULL;
    this->m_EquipSlot[2] = NULL;
    this->m_EquipSlot[3] = NULL;
    this->m_EquipSlot[4] = NULL;
    this->m_EquipSlot[5] = NULL;
    this->m_EquipSlot[6] = NULL;
    this->m_EquipSlot[7] = NULL;
    this->m_EquipSlot[8] = NULL;
    this->m_EquipSlot[9] = NULL;
    this->m_Grid_Option = NULL;
    this->m_Grid_TargetCostume = NULL;
    this->CostumePartsViewerWidget = NULL;
    this->m_CanvasEquipParts = NULL;
    this->m_CheckBoxSwitch = NULL;
    this->m_CanvesTerm = NULL;
    this->m_TermItemBtn = NULL;
    this->m_Img_TermItem_Indicator = NULL;
    this->Panel_Detail = NULL;
    this->STR_SWITCH_ON = 1034126;
    this->STR_SWITCH_OFF = 1034127;
    this->m_Can_GoToItemMake = NULL;
    this->m_Btn_GoToItemMake = NULL;
}

void UMM_MyCharinfo::OnClickSwitch() {
}

void UMM_MyCharinfo::OnClickEquipSlot(int64 iUID, int32 iTID, int32 iEquipPosition) {
}

void UMM_MyCharinfo::OnClickDetailStatus() {
}

void UMM_MyCharinfo::OnClick_TermItem() {
}

void UMM_MyCharinfo::OnClick_ItemMake() {
}


