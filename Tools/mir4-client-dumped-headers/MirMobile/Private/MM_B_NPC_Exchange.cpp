#include "MM_B_NPC_Exchange.h"

UMM_B_NPC_Exchange::UMM_B_NPC_Exchange() {
    this->HorizonBtn = NULL;
    this->SubMenuTab = NULL;
    this->Toggle_MakeFilter = NULL;
    this->Txt_ListName = NULL;
    this->ScrollBoxItem = NULL;
    this->VerticalBox_Target = NULL;
    this->Grid_MaterialInfo = NULL;
    this->Grid_MaterialCost = NULL;
    this->Grid_MaterialExe = NULL;
    this->Txt_Empty = NULL;
    this->Img_Deco = NULL;
    this->MaterialInfo_From = NULL;
    this->MaterialInfo_To = NULL;
    this->Txt_Name_MaterialInfo_From = NULL;
    this->Txt_Name_MaterialInfo_To = NULL;
    this->ItemSlider = NULL;
    this->Btn_MakeItem = NULL;
    this->m_OpenAni = NULL;
    this->m_CloseAni = NULL;
    this->m_MaxSlotCount = 0;
    this->m_CurrentSlotCount = 0;
    this->m_CostType = 0;
    this->STRING_FILTER_EXCHANGE = 1026113;
}

float UMM_B_NPC_Exchange::PlayCloseAni() {
    return 0.0f;
}

void UMM_B_NPC_Exchange::OnClickTargetSlot(int64 ItemUID, int32 ItemTID, int32 EquipPosition) {
}

void UMM_B_NPC_Exchange::OnClickSubMenu(int32 Index, bool bLocked) {
}

void UMM_B_NPC_Exchange::OnClickMaterialItem(int64 uid, int32 TID, int32 EquipPosition) {
}

void UMM_B_NPC_Exchange::OnClickMaterialCost() {
}

void UMM_B_NPC_Exchange::OnClickMakeItem() {
}

void UMM_B_NPC_Exchange::OnClickInvenMaterialSlot(int32 SelectItemTID) {
}

void UMM_B_NPC_Exchange::OnClickFilter(bool Toggle) {
}

void UMM_B_NPC_Exchange::OnClickClose() {
}

void UMM_B_NPC_Exchange::OnChangeMakeCount(int64 MakeCount) {
}


