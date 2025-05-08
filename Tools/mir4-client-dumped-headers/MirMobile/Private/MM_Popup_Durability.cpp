#include "MM_Popup_Durability.h"

UMM_Popup_Durability::UMM_Popup_Durability() {
    this->m_AniStart = NULL;
    this->m_AniEnd = NULL;
    this->Slot_Equip = NULL;
    this->Slot_Material = NULL;
    this->Btn_Cancel = NULL;
    this->Btn_Accept = NULL;
    this->btn_close = NULL;
    this->Txt_Durability = NULL;
    this->Txt_Material_Count = NULL;
    this->Grid_NeedCost1 = NULL;
    this->Grid_NeedCost2 = NULL;
    this->Img_NeedCost1 = NULL;
    this->Txt_NeedCost1 = NULL;
    this->BtnMain_NeedCost1 = NULL;
    this->Img_NeedCost2 = NULL;
    this->Txt_NeedCost2 = NULL;
    this->BtnMain_NeedCost2 = NULL;
    this->m_CostType_1 = 0;
    this->m_CostType_2 = 0;
}

float UMM_Popup_Durability::PlayStartAnimation() {
    return 0.0f;
}

float UMM_Popup_Durability::PlayEndAnimation() {
    return 0.0f;
}

void UMM_Popup_Durability::OnClickOk() {
}

void UMM_Popup_Durability::OnClickGetItemInfo_2() {
}

void UMM_Popup_Durability::OnClickGetItemInfo_1() {
}

void UMM_Popup_Durability::OnClickClose() {
}

void UMM_Popup_Durability::OnClickCancel() {
}


