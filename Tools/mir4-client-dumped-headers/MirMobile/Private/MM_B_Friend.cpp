#include "MM_B_Friend.h"

UMM_B_Friend::UMM_B_Friend() {
    this->m_C_Tab = NULL;
    this->m_Friend_Bottom = NULL;
    this->m_Friend_List = NULL;
    this->m_C_Empty_Notice = NULL;
    this->m_Canvas_Search = NULL;
    this->m_C_Btn_Find = NULL;
    this->m_EditableText_Find = NULL;
    this->m_SortListBtn = NULL;
}

void UMM_B_Friend::OnTextSearchUserCommitted(const FText& Text, TEnumAsByte<ETextCommit::Type> CommitMethod) {
}

void UMM_B_Friend::OnClickSearchUser() {
}

void UMM_B_Friend::OnChangeTextSearchUser(const FText& Text) {
}

void UMM_B_Friend::OnChangeTab(int32 iIndex, bool bLocked) {
}


