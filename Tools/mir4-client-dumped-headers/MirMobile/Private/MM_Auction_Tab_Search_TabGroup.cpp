#include "MM_Auction_Tab_Search_TabGroup.h"

UMM_Auction_Tab_Search_TabGroup::UMM_Auction_Tab_Search_TabGroup() {
    this->m_pBtnItemSearch = NULL;
    this->m_pTxtFindEmpty = NULL;
    this->m_pEditItemSearch = NULL;
    this->m_pBtnRefresh = NULL;
    this->m_pBtnReset = NULL;
    this->m_pComboList_Job = NULL;
    this->m_pComboList_Grade = NULL;
    this->m_pSearchEnchant = NULL;
}

void UMM_Auction_Tab_Search_TabGroup::OnSearch(bool bIsSearchDelay, bool bRefreshSearchList) {
}

void UMM_Auction_Tab_Search_TabGroup::OnReset() {
}

void UMM_Auction_Tab_Search_TabGroup::OnRefresh() {
}

void UMM_Auction_Tab_Search_TabGroup::OnCommitSearch(const FText& Text, TEnumAsByte<ETextCommit::Type> CommitMethod) {
}

void UMM_Auction_Tab_Search_TabGroup::OnClickTab(int32 iGroupSlotID) {
}

void UMM_Auction_Tab_Search_TabGroup::OnChangeSlot(int32 iSlotID) {
}

void UMM_Auction_Tab_Search_TabGroup::OnChangeSearch(const FText& Text) {
}


