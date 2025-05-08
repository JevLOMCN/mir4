#include "MM_Dungeon_Shop.h"

UMM_Dungeon_Shop::UMM_Dungeon_Shop() {
    this->m_Txt_GoodsRecord = NULL;
    this->m_Btn_Tooltip = NULL;
    this->m_ScrollBox = NULL;
    this->m_Txt_Title = NULL;
    this->m_TargetSlot = NULL;
    this->m_Txt_ItemDesc = NULL;
    this->m_Txt_ItemName = NULL;
    this->m_ItemMakeSlider = NULL;
    this->m_Img_CostIcon = NULL;
    this->m_Txt_Cost = NULL;
    this->m_CB_Buy = NULL;
}

void UMM_Dungeon_Shop::OnClickSlot(int32 iDungeonShopID, bool UpdateSlot) {
}

void UMM_Dungeon_Shop::OnClickBuy() {
}

void UMM_Dungeon_Shop::OnChangeCount(int64 iCount) {
}


