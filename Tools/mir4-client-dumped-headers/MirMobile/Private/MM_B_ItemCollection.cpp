#include "MM_B_ItemCollection.h"

UMM_B_ItemCollection::UMM_B_ItemCollection() {
    this->m_CollectionID = 0;
    this->m_Set_Horizon = NULL;
    this->m_Set_Vertical = NULL;
    this->m_TierFilter = NULL;
    this->m_Btn_Search = NULL;
    this->m_Btn_CancelSearch = NULL;
    this->m_InputTxt_Search = NULL;
    this->m_Notice_NoResult = NULL;
    this->m_Combo_Filter = NULL;
    this->m_SearchSmeltTab = NULL;
    this->m_ListView_CollectionList = NULL;
    this->m_Switer_Infos = NULL;
    this->m_Collection_Progress = NULL;
    this->m_Collection_Effects = NULL;
    this->m_Collection_ItemInfo = NULL;
    this->m_Btn_Info = NULL;
    this->m_SuccessRegistStrID = 1099007;
    this->m_WarningInsertTextStr = 1099009;
    this->m_WarningOverInsertTextStr = 1099052;
    this->m_HasNoResultStr = 1099041;
    this->m_HasNoFilterStr = 1099047;
    this->m_InsertSearchStr = 1099048;
    this->m_InfoToolTipID = 78;
}

void UMM_B_ItemCollection::OnCommitEdit(const FText& Text, TEnumAsByte<ETextCommit::Type> CommitMethod) {
}

void UMM_B_ItemCollection::OnComboBoxChanged(const FString& strSelectItem) {
}

void UMM_B_ItemCollection::OnClickTierSlot(int32 iIndex, bool bSlotUpdate) {
}

void UMM_B_ItemCollection::OnClickTab(int32 iGroupSlotID) {
}

void UMM_B_ItemCollection::OnClickSearch() {
}

void UMM_B_ItemCollection::OnClickCollectType(int32 SlotIndex, bool IsLocked) {
}

void UMM_B_ItemCollection::OnClickCollectGroup(int32 SlotIndex, bool IsLocked) {
}

void UMM_B_ItemCollection::OnClickCancelSearch() {
}

void UMM_B_ItemCollection::OnChangeSlot(int32 iSlotID) {
}

bool UMM_B_ItemCollection::IsCollectAble(int32 CollectionId) const {
    return false;
}


