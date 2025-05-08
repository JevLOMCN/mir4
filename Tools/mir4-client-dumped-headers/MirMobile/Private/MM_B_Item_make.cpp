#include "MM_B_Item_make.h"

UMM_B_Item_make::UMM_B_Item_make() {
    this->Panel_InventoryRect = NULL;
    this->PopUp_Material_Change = NULL;
    this->InventoryRect = NULL;
    this->SubMenuTab = NULL;
    this->MainMenuTab = NULL;
    this->MainMenuTab_5Fill = NULL;
    this->HorizonBtn = NULL;
    this->ItemMakeInfo = NULL;
    this->Toggle_MakeFilter = NULL;
    this->EmptyPanel = NULL;
    this->m_Notice_Sub = NULL;
    this->Txt_EmptyMessage = NULL;
    this->m_Btn_GoToForgeSmelt = NULL;
    this->m_Canvas_GoToForgeSmelt = NULL;
    this->m_Panel_Fail = NULL;
    this->m_Btn_Fail = NULL;
    this->STRING_EMPTY_MESSAGE = 1026008;
    this->STRING_FILTER_MAKE = 1026012;
}

void UMM_B_Item_make::ToggleMakeFilter(bool IsChecked) {
}

void UMM_B_Item_make::OnClickSubMenu(int32 idx, bool bLocked) {
}

void UMM_B_Item_make::OnClickMainMenu(int32 idx, bool bLocked) {
}

void UMM_B_Item_make::OnClickListSlot(UMM_Item_Make_List_Slot* _Slot) {
}

void UMM_B_Item_make::OnClick_ForgeSmelt() {
}

void UMM_B_Item_make::OnClick_FailReward() {
}


