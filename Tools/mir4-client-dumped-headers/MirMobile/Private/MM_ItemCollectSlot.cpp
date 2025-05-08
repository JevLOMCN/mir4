#include "MM_ItemCollectSlot.h"

UMM_ItemCollectSlot::UMM_ItemCollectSlot() {
    this->m_Txt_Repeat = NULL;
    this->m_Txt_Title = NULL;
    this->m_Txt_Effect = NULL;
    this->m_Txt_Term = NULL;
    this->m_Img_Select = NULL;
    this->m_Btn_Bg = NULL;
    this->m_Check_Fav = NULL;
    this->m_RepeatStrID = 1360102;
    this->m_FromToStrID = 1099075;
}

void UMM_ItemCollectSlot::OnClickSlot(UMM_Slot_Collect_Item* pSlot) {
}

void UMM_ItemCollectSlot::OnClickFavorites(bool Checked) {
}

void UMM_ItemCollectSlot::OnClickBG() {
}


