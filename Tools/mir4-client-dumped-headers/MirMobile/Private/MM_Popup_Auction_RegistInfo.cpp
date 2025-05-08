#include "MM_Popup_Auction_RegistInfo.h"

UMM_Popup_Auction_RegistInfo::UMM_Popup_Auction_RegistInfo() {
    this->m_pItemInfo = NULL;
    this->m_pTxtAvrPrice = NULL;
    this->m_pTxtResultPrice = NULL;
    this->m_pSliderSellCount = NULL;
    this->m_pSliderSellPrice = NULL;
    this->m_pBtnClose = NULL;
    this->m_pBtnCancle = NULL;
    this->m_pBtnOk = NULL;
}

void UMM_Popup_Auction_RegistInfo::OnSliderSellPrice(int64 iSellPrice) {
}

void UMM_Popup_Auction_RegistInfo::OnSliderSellCount(int64 iSellCount) {
}

void UMM_Popup_Auction_RegistInfo::OnSliderMax(bool BMax) {
}

void UMM_Popup_Auction_RegistInfo::OnClickOk() {
}

void UMM_Popup_Auction_RegistInfo::OnClickClose() {
}

void UMM_Popup_Auction_RegistInfo::OnClickCancle() {
}


