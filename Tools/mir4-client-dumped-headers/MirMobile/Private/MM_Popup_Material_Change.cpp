#include "MM_Popup_Material_Change.h"

UMM_Popup_Material_Change::UMM_Popup_Material_Change() {
    this->Mat_Target_1 = NULL;
    this->Mat_Target_2 = NULL;
    this->RTxt_Target_Desc = NULL;
    this->ScrollBox = NULL;
    this->Mat_ListTarget_1 = NULL;
    this->btn_close = NULL;
    this->m_Btn_Ok = NULL;
    this->m_Btn_Cancel = NULL;
    this->m_Txt_Empty = NULL;
    this->MaterialCount = 1;
    this->m_MaxSlotCount = 0;
    this->m_CurrentSlotCount = 0;
    this->m_MaterialSlotIndex = 0;
    this->m_SelectSlotUID = 0;
    this->m_CheckedSlotUID = 0;
    this->m_SelectSlotTID = 0;
    this->NoMaterail = false;
    this->STR_MSG_DESC = 1026036;
    this->STR_MSG_DESC2 = 1026041;
    this->STR_MSG_TIER2OVER_DESC = 1026065;
    this->STR_MSG_TIER2OVER_DESC2 = 1026066;
}

void UMM_Popup_Material_Change::OnClickSlot(int64 uid, int32 TID, int32 EquipPosition) {
}

void UMM_Popup_Material_Change::OnClickPopup(int64 uid, int32 TID, int32 EquipPosition) {
}

void UMM_Popup_Material_Change::OnClickOk() {
}

void UMM_Popup_Material_Change::OnClickClose() {
}

void UMM_Popup_Material_Change::OnClickCancle() {
}


