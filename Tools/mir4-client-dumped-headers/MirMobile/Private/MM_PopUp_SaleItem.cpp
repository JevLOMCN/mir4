#include "MM_PopUp_SaleItem.h"

UMM_PopUp_SaleItem::UMM_PopUp_SaleItem() {
    this->m_SlotMat = NULL;
    this->m_ItemName = NULL;
    this->m_NumInput = NULL;
    this->m_CancleBtn = NULL;
    this->m_SaleBtn = NULL;
    this->m_Text_Title = NULL;
    this->btn_close = NULL;
    this->STR_MSG_ITEMEXTEND_TITLE = 1007219;
    this->STR_MSG_ITEMEXTEND_NORMAL = 1007220;
    this->STR_MSG_ITEMEXTEND_MAX = 1007221;
    this->STR_MSG_ITEMEXTEND_COUNT = 1007222;
}

void UMM_PopUp_SaleItem::OnClickSale() {
}

void UMM_PopUp_SaleItem::OnClickItemExtend() {
}

void UMM_PopUp_SaleItem::OnClickCancle() {
}

void UMM_PopUp_SaleItem::OnChangeCount(int64 iChangeValue) {
}


