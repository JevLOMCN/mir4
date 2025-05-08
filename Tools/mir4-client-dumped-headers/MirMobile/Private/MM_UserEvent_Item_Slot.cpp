#include "MM_UserEvent_Item_Slot.h"

UMM_UserEvent_Item_Slot::UMM_UserEvent_Item_Slot() {
    this->m_Img_GradeBgEffect = NULL;
    this->m_ImgDisabled = NULL;
    this->m_ImgSeleted = NULL;
    this->m_ImgCurrSelected = NULL;
    this->m_TxtCount = NULL;
    this->m_Txt_Day = NULL;
    this->m_Img_Indicator = NULL;
    this->m_Grid_SelectEffect = NULL;
    this->m_AniSelect = NULL;
    this->m_TxtOtherClass = NULL;
}

void UMM_UserEvent_Item_Slot::OnClickSlot(UMM_Slot_Base* pSlot) {
}

void UMM_UserEvent_Item_Slot::OnAbsentStepBuy(bool IsLackCost, int32 CostType) {
}


