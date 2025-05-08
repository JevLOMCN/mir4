#include "MM_PopUp_Costume_CollectionList.h"

UMM_PopUp_Costume_CollectionList::UMM_PopUp_Costume_CollectionList() {
    this->btn_close = NULL;
    this->Txt_Name = NULL;
    this->ScrollBox_CollectionList = NULL;
    this->m_MaxSlotCount = 0;
    this->m_CurrentSlotCount = 0;
    this->m_CostumeParts = COSTUME_PARTS::PARTS_NONE;
}

void UMM_PopUp_Costume_CollectionList::OnClickClose() {
}


