#include "MM_ItemSmeltWidget.h"

UMM_ItemSmeltWidget::UMM_ItemSmeltWidget() {
    this->m_Panel_Smelt = NULL;
    this->m_Effect_Grid = NULL;
    this->m_Panel_SmeltTarget = NULL;
    this->Can_GoToItemMake = NULL;
    this->m_Panel_SmeltInven = NULL;
    this->m_InvenForge = NULL;
    this->m_Btn_GoToItemMake = NULL;
    this->Grid_Unselect = NULL;
    this->Grid_Select = NULL;
    this->Grid_Material = NULL;
    this->Panel_Safety = NULL;
    this->Slot_Target = NULL;
    this->Tag_Target = NULL;
    this->Pan_SuccessPrecnet = NULL;
    this->Txt_SuccessPercentTitle = NULL;
    this->Txt_SuccessPercent = NULL;
    this->Txt_Safety = NULL;
    this->Stat_Smelt = NULL;
    this->Stat_Combat = NULL;
    this->Slot_Material = NULL;
    this->Slot_MaterialCost = NULL;
    this->txt_cost = NULL;
    this->img_cost = NULL;
    this->Btn_Smelt = NULL;
    this->Btn_AutoSmelt = NULL;
    this->Txt_GuideTitle = NULL;
    this->Txt_Guide = NULL;
    this->Txt_Notice = NULL;
    this->Grid_AllSelectEffect = NULL;
    this->Grid_AuraEffect = NULL;
    this->Grid_AllSelectEffect_Red = NULL;
    this->Grid_AuraEffect_Red = NULL;
    this->m_Img_PercentBar = NULL;
    this->m_Grid_SubMaterial = NULL;
    this->m_Slot_SubMaterial = NULL;
    this->m_Slot_SubMatDisable = NULL;
    this->m_Check_SubMaterial = NULL;
    this->m_Grid_AddRatio = NULL;
    this->m_Txt_AddRatio = NULL;
    this->SelectItemUID = 0;
    this->m_Effect_SubMat_Unchek = NULL;
    this->m_AuToSmeltStrID = 1004330;
}

void UMM_ItemSmeltWidget::OnClickUnmountTarget() {
}

void UMM_ItemSmeltWidget::OnClickUmmountMaterial() {
}

void UMM_ItemSmeltWidget::OnClickMain() {
}

void UMM_ItemSmeltWidget::OnClickComformSubCheckBox() {
}

void UMM_ItemSmeltWidget::OnClickAutoSmelt() {
}

void UMM_ItemSmeltWidget::OnClickAddSubMaterial(int64 ItemUID, int32 ItemTID, int32 iEquipPos) {
}

void UMM_ItemSmeltWidget::OnClickAddSubCheckBox(bool Checked) {
}

void UMM_ItemSmeltWidget::OnClick_ItemMake() {
}


