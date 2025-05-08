#include "MM_Auction_Slot_Material.h"

UMM_Auction_Slot_Material::UMM_Auction_Slot_Material() {
    this->m_pSlotItem = NULL;
    this->m_pTxtName = NULL;
    this->m_pTxtEachPrice = NULL;
    this->m_pTxtTotalPrice = NULL;
    this->m_pTxtRemainTime = NULL;
    this->m_pBtnItem = NULL;
    this->m_pBtnClick = NULL;
    this->m_pCanvasEachPrice = NULL;
    this->m_pCanvasPrice = NULL;
    this->m_pImgHyphen = NULL;
}

void UMM_Auction_Slot_Material::OnSlotClick() {
}

void UMM_Auction_Slot_Material::OnClickItemSlot(int64 iUID, int32 iTID, int32 iEquipPos) {
}


