#include "MM_Popup_Party_Slot_Option_Item.h"

UMM_Popup_Party_Slot_Option_Item::UMM_Popup_Party_Slot_Option_Item() {
    this->SlotOption = ESlotClassOption::Slot_All;
    this->STRING_ID_EXPLAIN_ALL = 1059189;
    this->STRING_ID_EXPLAIN_LOCK = 1059193;
    this->arSTRING_ID_CLASS_NAME.AddDefaulted(5);
    this->arSTRING_ID_CLASS_EXPLAN.AddDefaulted(5);
    this->m_VrtBox_All = NULL;
    this->m_VrtBox_Class = NULL;
    this->m_VrtBox_Lock = NULL;
    this->m_Img_Class = NULL;
    this->m_Txt_ClassName = NULL;
    this->m_Txt_Explain = NULL;
    this->m_Btn_Main = NULL;
}

void UMM_Popup_Party_Slot_Option_Item::OnClickMain() {
}


