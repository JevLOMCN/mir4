#include "MM_ContentsGetItemMsg.h"

UMM_ContentsGetItemMsg::UMM_ContentsGetItemMsg() {
    this->m_eWidgetType = EContentsGetItemMsgType::Single_Item;
    this->m_fSettingTime_NextMessage = 1.00f;
    this->m_fSettingTime_NextMessage_MakeItem = 0.00f;
    this->m_fSettingTime_TitleEffect = 0.50f;
    this->m_fSettingTime_StartDisplaySlot = 0.25f;
    this->m_fSettingTime_NextSlot = 0.25f;
    this->m_fSettingTime_SlotOpacity = 0.50f;
    this->m_fSettingTime_SlotEffect = 0.25f;
    this->m_AniStart_Single_Item = NULL;
    this->m_AniStart_Single_Cost = NULL;
    this->m_AniStart_Multiple = NULL;
    this->m_AniStart_Special = NULL;
    this->m_AniStart_MakeSuccess_Item = NULL;
    this->m_AniStart_MakeSuccessBonus_Item = NULL;
    this->m_AniStart_MakeFail_Item = NULL;
    this->m_AniEnd = NULL;
    this->m_Btn_Main = NULL;
    this->m_ItemSlot_Title = NULL;
    this->m_RTxt_TitleMain = NULL;
    this->m_Img_Polish_One = NULL;
    this->m_Img_Polish_All = NULL;
    this->m_Hrz_TitleInfoDeco = NULL;
    this->m_RTxt_TitleSub = NULL;
    this->m_RTxt_AddedOptionName = NULL;
    this->m_RTxt_AddedOptionValue = NULL;
    this->m_arItemSlot[0] = NULL;
    this->m_arItemSlot[1] = NULL;
    this->m_arItemSlot[2] = NULL;
    this->m_arItemSlot[3] = NULL;
    this->m_arItemSlot[4] = NULL;
    this->m_arItemSlot[5] = NULL;
    this->m_arItemSlot[6] = NULL;
    this->m_arItemSlot[7] = NULL;
    this->m_arItemSlot[8] = NULL;
    this->m_arItemSlot[9] = NULL;
    this->m_arItemSlot_GridSlot[0] = NULL;
    this->m_arItemSlot_GridSlot[1] = NULL;
    this->m_arItemSlot_GridSlot[2] = NULL;
    this->m_arItemSlot_GridSlot[3] = NULL;
    this->m_arItemSlot_GridSlot[4] = NULL;
    this->m_arItemSlot_GridSlot[5] = NULL;
    this->m_arItemSlot_GridSlot[6] = NULL;
    this->m_arItemSlot_GridSlot[7] = NULL;
    this->m_arItemSlot_GridSlot[8] = NULL;
    this->m_arItemSlot_GridSlot[9] = NULL;
    this->m_arItemSlot_EffectPanel[0] = NULL;
    this->m_arItemSlot_EffectPanel[1] = NULL;
    this->m_arItemSlot_EffectPanel[2] = NULL;
    this->m_arItemSlot_EffectPanel[3] = NULL;
    this->m_arItemSlot_EffectPanel[4] = NULL;
    this->m_arItemSlot_EffectPanel[5] = NULL;
    this->m_arItemSlot_EffectPanel[6] = NULL;
    this->m_arItemSlot_EffectPanel[7] = NULL;
    this->m_arItemSlot_EffectPanel[8] = NULL;
    this->m_arItemSlot_EffectPanel[9] = NULL;
}


void UMM_ContentsGetItemMsg::ShowTitleEffect() {
}

void UMM_ContentsGetItemMsg::ShowSlotEffect() {
}

void UMM_ContentsGetItemMsg::OnClickMain() {
}


