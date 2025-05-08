#include "MM_Xdraco_SealingInfo.h"

UMM_Xdraco_SealingInfo::UMM_Xdraco_SealingInfo() {
    this->m_pSlot_SealingItem = NULL;
    this->Grid_NeedCost1 = NULL;
    this->Img_NeedCost1 = NULL;
    this->Txt_NeedCost1 = NULL;
    this->m_pBtn_NeedCost1 = NULL;
    this->m_pBtnMain_NeedCost1 = NULL;
    this->Grid_NeedCost2 = NULL;
    this->Img_NeedCost2 = NULL;
    this->Txt_NeedCost2 = NULL;
    this->m_pBtn_NeedCost2 = NULL;
    this->m_pBtnMain_NeedCost2 = NULL;
    this->m_CostType_1 = 0;
    this->m_CostType_2 = 0;
    this->m_pPanel_Bottom = NULL;
    this->m_pBtn_Make = NULL;
    this->m_pDecoEffectPanel = NULL;
    this->m_pPanel_Effect_Basic = NULL;
    this->m_iMakeItemID = 0;
    this->Panel_Notice_MinReserve = NULL;
    this->Txt_Notice_MinReserve = NULL;
    this->RTxt_Notice_MinReserve = NULL;
}

void UMM_Xdraco_SealingInfo::OnClickSealingItem(int64 _UID, int32 _TID, int32 _Pos) {
}

void UMM_Xdraco_SealingInfo::OnClickMaterialItemSlot(UMM_Slot_Base* pSlot) {
}

void UMM_Xdraco_SealingInfo::OnClickMake() {
}

void UMM_Xdraco_SealingInfo::OnClickGetItemInfo_2() {
}

void UMM_Xdraco_SealingInfo::OnClickGetItemInfo_1() {
}


