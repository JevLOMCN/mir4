#include "MM_B_Shop_ListElement.h"

UMM_B_Shop_ListElement::UMM_B_Shop_ListElement() {
    this->m_BaseWidget = NULL;
    this->m_BG = NULL;
    this->m_ItemSlot = NULL;
    this->m_TextName = NULL;
    this->m_TextLimit = NULL;
    this->m_Goods = NULL;
    this->m_BtnBuy = NULL;
    this->m_ShopItemID = 0;
    this->txt_count = NULL;
    this->canvas_limit = NULL;
    this->STR_UNLIMITED = 1017022;
    this->STR_LIMITED = 1017001;
}

void UMM_B_Shop_ListElement::OnClickBuy() {
}


