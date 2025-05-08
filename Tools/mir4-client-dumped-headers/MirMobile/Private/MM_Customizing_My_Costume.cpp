#include "MM_Customizing_My_Costume.h"

UMM_Customizing_My_Costume::UMM_Customizing_My_Costume() {
    this->m_ListBox = NULL;
    this->m_Empty_Title = NULL;
}

void UMM_Customizing_My_Costume::OnClickCostumeItemEvent(int32 ListIndex) {
}

TArray<UMM_Customizing_ListItem*> UMM_Customizing_My_Costume::CreateCostumeItem_Implementation(int32 Count) {
    return TArray<UMM_Customizing_ListItem*>();
}


