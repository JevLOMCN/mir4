#include "MM_Popup_AutoSmelt.h"

UMM_Popup_AutoSmelt::UMM_Popup_AutoSmelt() {
    this->m_Txt_Title = NULL;
    this->m_Txt_SubTitle = NULL;
    this->m_BtnClose = NULL;
    this->m_NumInput = NULL;
    this->m_Btn_Init = NULL;
    this->m_Btn_ClosePopup = NULL;
    this->m_Btn_Ok = NULL;
    this->m_InvenSmelt = NULL;
    this->m_AutoSmeltTitleStrID = 1004598;
    this->m_AutoSmeltSubTitleStrID = 1004346;
    this->m_CancelStrID = 101002;
    this->m_AutoSmeltOKStrID = 1004278;
    this->m_AutoSmeltCancelStrID = 1004349;
    this->m_AllCostDescStrID = 101018;
    this->m_AddSmeltItemStrID = 1004351;
    this->m_StopSmeltStrID = 1004350;
    this->m_EffectPlayTime = 0.76f;
    this->m_DestroyTime = 1.20f;
    this->m_DestroyStartTime = 0.80f;
    this->m_Panel_Notice = NULL;
    this->m_Board_Notice = NULL;
    this->m_Panel_Main = NULL;
    this->m_Panel_ColstTotal = NULL;
    this->m_Txt_AllCostDesc = NULL;
    this->m_Panel_Material = NULL;
    this->m_Img_Material = NULL;
    this->m_Txt_Material = NULL;
    this->m_Panel_Cost = NULL;
    this->m_Img_Cost = NULL;
    this->m_Txt_Cost = NULL;
    this->m_Panel_BlackIron = NULL;
    this->m_Img_BlackIron = NULL;
    this->m_Txt_BlackIron = NULL;
    this->m_Panel_NumSet = NULL;
    this->m_Img_NumBlock = NULL;
    this->m_Panel_SmeltEnd = NULL;
    this->m_Txt_SmeltEnd = NULL;
    this->m_Panel_Effect = NULL;
    this->m_Hrz_Close = NULL;
    this->m_Hrz_Smelt = NULL;
}

void UMM_Popup_AutoSmelt::SendAutoSmeltItems() {
}

void UMM_Popup_AutoSmelt::OnClickStopAutoSmelt() {
}

void UMM_Popup_AutoSmelt::OnClickInvenSlot(int64 iUID, int32 iTID, int32 iEquipPos) {
}

void UMM_Popup_AutoSmelt::OnClickInit() {
}

void UMM_Popup_AutoSmelt::OnClickClose() {
}

void UMM_Popup_AutoSmelt::OnClickAutoSmelt() {
}

void UMM_Popup_AutoSmelt::OnChangeSmeltLV(int64 SmeltLV) {
}


