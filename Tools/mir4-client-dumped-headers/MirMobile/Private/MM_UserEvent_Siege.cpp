#include "MM_UserEvent_Siege.h"

UMM_UserEvent_Siege::UMM_UserEvent_Siege() {
    this->m_Txt_Name = NULL;
    this->m_Txt_EndTimeName = NULL;
    this->m_Txt_EndTime = NULL;
    this->m_Img_Thumb = NULL;
    this->m_WebBanner = NULL;
    this->m_Can_KeyPad = NULL;
    this->m_Img_CostItemIcon = NULL;
    this->m_Txt_ItemName = NULL;
    this->m_Txt_ItemCount = NULL;
    this->m_ItemMakeSlider = NULL;
    this->m_Overlay_Result = NULL;
    this->m_Txt_Result = NULL;
    this->m_Txt_Remain_Cheer_Count = NULL;
    this->m_Txt_CheerMessage = NULL;
    this->m_Btn_SiegeInfo = NULL;
    this->m_SiegeSlot_Home = NULL;
    this->m_SiegeSlot_Away = NULL;
    this->m_Img_Home_Win = NULL;
    this->m_Img_Away_Win = NULL;
}

void UMM_UserEvent_Siege::OnUseItemCount(int64 iNum) {
}

void UMM_UserEvent_Siege::OnBtnSiegeInfo() {
}


