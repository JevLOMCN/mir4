#include "MM_PopUp_ItemInfo.h"

UMM_PopUp_ItemInfo::UMM_PopUp_ItemInfo() {
    this->m_pAnim_Start = NULL;
    this->m_pAnim_End = NULL;
    this->PANEL_SIDE = PANEL_SIDE::NONE;
    this->m_PanelLeft = NULL;
    this->m_ItemInfoList = NULL;
    this->m_ItemInfo_ROption = NULL;
    this->m_Panel_ROption = NULL;
    this->m_ScrollInfo_ROption = NULL;
    this->m_SellBtn = NULL;
    this->m_EquipBtn = NULL;
    this->m_UserLockBtn = NULL;
    this->m_CloseBtn = NULL;
    this->m_NameTxt = NULL;
    this->m_SmeltingLv = NULL;
    this->m_GridTier = NULL;
    this->m_GridGrade = NULL;
    this->m_TierImage = NULL;
    this->m_Grade = NULL;
    this->m_Grid_UnTrade = NULL;
    this->m_pTxtTrade = NULL;
    this->m_Grid_XDraco = NULL;
    this->m_pTxtXDraco = NULL;
    this->STRID_Warnning = 102003;
    this->STRID_BtnCancel = 101002;
    this->STRID_BtnSell = 101019;
    this->STRID_TransferItemSaleWarring = 1007189;
    this->STRID_MATERIAL_POPUP = 1026206;
    this->STRID_UIMAKEITEM = 1026207;
    this->STRID_GO_NPC = 1026208;
    this->STRID_GO_UISHOP = 1026209;
    this->STRID_CONTENTSNOTOPEN = 1006132;
    this->STRID_MSG_UNTRADABLE = 2310032;
}

void UMM_PopUp_ItemInfo::OnSaleOK() {
}

void UMM_PopUp_ItemInfo::OnSaleCancel() {
}

void UMM_PopUp_ItemInfo::OnClickShowROption() {
}

void UMM_PopUp_ItemInfo::OnClickPackageInfo() {
}

void UMM_PopUp_ItemInfo::OnClickCloseROption() {
}

void UMM_PopUp_ItemInfo::OnClick_UserLock() {
}

void UMM_PopUp_ItemInfo::OnClick_Sell() {
}

void UMM_PopUp_ItemInfo::OnClick_Equip() {
}


