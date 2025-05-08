#include "MM_PopUp_ItemInfo_Costume.h"

UMM_PopUp_ItemInfo_Costume::UMM_PopUp_ItemInfo_Costume() {
    this->m_Grid_Item_Info = NULL;
    this->Slot_Main = NULL;
    this->Txt_Name = NULL;
    this->txt_date = NULL;
    this->Btn_Main = NULL;
    this->btn_close = NULL;
    this->Img_Icon_Cost = NULL;
    this->Txt_Name_CostValue = NULL;
    this->m_CostumeParts = COSTUME_PARTS::PARTS_NONE;
    this->m_CostumeId = 0;
}

void UMM_PopUp_ItemInfo_Costume::OnClickClose() {
}


