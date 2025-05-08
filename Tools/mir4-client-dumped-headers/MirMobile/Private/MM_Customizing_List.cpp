#include "MM_Customizing_List.h"

UMM_Customizing_List::UMM_Customizing_List() {
    this->m_pListBox = NULL;
    this->m_pComponentTitle = NULL;
}

void UMM_Customizing_List::UpdateListSelectData(int32 ListIndex) {
}

void UMM_Customizing_List::OnClickSubCategoryEvent(int32 SubCategoryIndex) {
}

void UMM_Customizing_List::OnClickListItemEvent(int32 ListIndex) {
}

TArray<UMM_Customizing_ListItem*> UMM_Customizing_List::CreateListItem_Implementation(int32 Count) {
    return TArray<UMM_Customizing_ListItem*>();
}


