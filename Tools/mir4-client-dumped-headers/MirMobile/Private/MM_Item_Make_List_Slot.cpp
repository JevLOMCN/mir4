#include "MM_Item_Make_List_Slot.h"

UMM_Item_Make_List_Slot::UMM_Item_Make_List_Slot() {
    this->m_pSelectSlotEffect = NULL;
    this->Slot_Main = NULL;
    this->Txt_Name = NULL;
    this->Grid_ReqLevel = NULL;
    this->Txt_ReqLevel_Title = NULL;
    this->Txt_ReqLevel = NULL;
    this->Img_Select = NULL;
    this->Btn_Slot = NULL;
    this->m_MakeTID = 0;
    this->Panel_Lock = NULL;
    this->m_Effect_Panel = NULL;
    this->SLOT_EFFECT_INDEX = 1100001;
    this->STR_ID_PACKAGECOUNT = 1026032;
    this->STR_ID_REQLEVEL_TITLE = 1026030;
    this->STR_ID_REQLEVEL = 1091001;
    this->Img_Equiped = NULL;
    this->STR_ID_STACKCOUNT = 1026112;
    this->ItemTID = 0;
}

void UMM_Item_Make_List_Slot::OnClikedSlot() {
}


