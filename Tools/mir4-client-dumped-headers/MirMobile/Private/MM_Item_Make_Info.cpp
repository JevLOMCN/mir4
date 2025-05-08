#include "MM_Item_Make_Info.h"

UMM_Item_Make_Info::UMM_Item_Make_Info() {
    this->LackOfMoneyStrID = 1026006;
    this->LackOfMaterialStrID = 1026007;
    this->Slot_MakeItem = NULL;
    this->Slot_LuckyItem = NULL;
    this->Pro_MakeBar = NULL;
    this->Grid_NeedCost1 = NULL;
    this->Grid_NeedCost2 = NULL;
    this->Img_NeedCost1 = NULL;
    this->Txt_NeedCost1 = NULL;
    this->BtnMain_NeedCost1 = NULL;
    this->Txt_NeedCost1_1 = NULL;
    this->Img_NeedCost2 = NULL;
    this->Txt_NeedCost2 = NULL;
    this->BtnMain_NeedCost2 = NULL;
    this->Panel_Bottom = NULL;
    this->Btn_HistoryBack = NULL;
    this->Txt_HistoryBackTitle = NULL;
    this->Btn_Make = NULL;
    this->DecoEffectPanel = NULL;
    this->m_Ani_GreatSuccess = NULL;
    this->m_AniTime_GreatSuccess = 0.00f;
    this->mMakeItemID = 0;
    this->Panel_Effect_Basic = NULL;
    this->Panel_Effect_Red = NULL;
    this->Deco_Effect_Red = NULL;
    this->Panel_SuccessInfo = NULL;
    this->Txt_SuccessPercent = NULL;
    this->Panel_Lucky = NULL;
    this->m_CostType_1 = 0;
    this->m_CostType_2 = 0;
    this->Panel_Period = NULL;
    this->Panel_ResetCount = NULL;
    this->Panel_ResetInfo = NULL;
    this->Panel_ResetSchedule = NULL;
    this->Txt_PeriodTime = NULL;
    this->Txt_Title_Reset = NULL;
    this->Txt_ResetCount = NULL;
    this->Txt_MakeAndTryCount = NULL;
    this->Txt_ResetSchedule = NULL;
    this->Panel_Notice_NOMake = NULL;
    this->C_Board_Notice = NULL;
    this->Panel_Notice_MinReserve = NULL;
    this->Txt_Notice_MinReserve = NULL;
    this->RTxt_Notice_MinReserve = NULL;
}

void UMM_Item_Make_Info::OnFinishAnimation() {
}

void UMM_Item_Make_Info::OnClickMaterialItemSlot(UMM_Slot_Base* pSlot) {
}

void UMM_Item_Make_Info::OnClickMakeItem(int64 _UID, int32 _TID, int32 _Pos) {
}

void UMM_Item_Make_Info::OnClickMake() {
}

void UMM_Item_Make_Info::OnClickLuckyItem(int64 _UID, int32 _TID, int32 _Pos) {
}

void UMM_Item_Make_Info::OnClickHistoryBack() {
}

void UMM_Item_Make_Info::OnClickGetItemInfo_2() {
}

void UMM_Item_Make_Info::OnClickGetItemInfo_1() {
}

void UMM_Item_Make_Info::OnChangeMakeCount(int64 MakeCount) {
}


