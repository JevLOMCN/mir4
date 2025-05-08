#include "MM_Popup_OptionChange.h"

UMM_Popup_OptionChange::UMM_Popup_OptionChange() {
    this->m_fMaxSpeed = 0.00f;
    this->m_fMinSpeed = 0.00f;
    this->m_fMaxTime = 0.00f;
    this->m_fDecreaseTime = 0.00f;
    this->m_pCurve = NULL;
    this->m_fAutoTerm = 0.00f;
    this->Ani_Open = NULL;
    this->Ani_Close = NULL;
    this->Ani_Show_Up = NULL;
    this->Ani_Show_Up_1 = NULL;
    this->Btn_OptionList_Slot = NULL;
    this->Slot_Target = NULL;
    this->Txt_Target = NULL;
    this->OptionList_Ability = NULL;
    this->Txt_NowAbility = NULL;
    this->Ability_Now[0] = NULL;
    this->Ability_Now[1] = NULL;
    this->Ability_Now[2] = NULL;
    this->Ability_Now[3] = NULL;
    this->Txt_NewAbility = NULL;
    this->Ability_New[0] = NULL;
    this->Ability_New[1] = NULL;
    this->Ability_New[2] = NULL;
    this->Ability_New[3] = NULL;
    this->Ability_Now_Eigth[0] = NULL;
    this->Ability_Now_Eigth[1] = NULL;
    this->Ability_Now_Eigth[2] = NULL;
    this->Ability_Now_Eigth[3] = NULL;
    this->Ability_Now_Eigth[4] = NULL;
    this->Ability_Now_Eigth[5] = NULL;
    this->Ability_Now_Eigth[6] = NULL;
    this->Ability_Now_Eigth[7] = NULL;
    this->Ability_Now_Eigth[8] = NULL;
    this->Ability_New_Eigth[0] = NULL;
    this->Ability_New_Eigth[1] = NULL;
    this->Ability_New_Eigth[2] = NULL;
    this->Ability_New_Eigth[3] = NULL;
    this->Ability_New_Eigth[4] = NULL;
    this->Ability_New_Eigth[5] = NULL;
    this->Ability_New_Eigth[6] = NULL;
    this->Ability_New_Eigth[7] = NULL;
    this->Ability_New_Eigth[8] = NULL;
    this->m_PanelForFour = NULL;
    this->m_PanelForEight = NULL;
    this->Btn_Continue = NULL;
    this->Btn_Apply = NULL;
    this->Btn_Auto_Option = NULL;
    this->btn_close_1 = NULL;
    this->Btn_Apply_1 = NULL;
    this->Txt_Notice = NULL;
    this->btn_close = NULL;
    this->txt_money = NULL;
    this->Txt_Money1 = NULL;
    this->Effect_Panel = NULL;
    this->Image_Need_Item = NULL;
    this->Txt_Have_Count = NULL;
    this->Txt_Need_Count = NULL;
    this->Btn_Material0 = NULL;
    this->Btn_Material1 = NULL;
    this->Btn_Material2 = NULL;
    this->Txt_Auto_Count = NULL;
    this->Tooltip_Btn_Special = NULL;
    this->Image_Cost_Icon = NULL;
}

void UMM_Popup_OptionChange::TimeOutBlockScreen() {
}

void UMM_Popup_OptionChange::StopAutoOptionChangeForPause() {
}

void UMM_Popup_OptionChange::StopAutoOptionChange() {
}

void UMM_Popup_OptionChange::StopAndOpenAutoPopup() {
}

void UMM_Popup_OptionChange::StopAllAutoOptionChange() {
}

void UMM_Popup_OptionChange::RunOptionChange() {
}

void UMM_Popup_OptionChange::ResumeAutoOptionChange() {
}

void UMM_Popup_OptionChange::Request_DeleteNewOption() {
}

void UMM_Popup_OptionChange::Request_DecideOption() {
}

void UMM_Popup_OptionChange::Request_ContinueOptionAfterAsk() {
}

void UMM_Popup_OptionChange::Request_ContinueOption() {
}

float UMM_Popup_OptionChange::PlayCloseAni() {
    return 0.0f;
}

void UMM_Popup_OptionChange::OnClickMaterial2() {
}

void UMM_Popup_OptionChange::OnClickMaterial1() {
}

void UMM_Popup_OptionChange::OnClickMaterial0() {
}

void UMM_Popup_OptionChange::OnClickItemInfo(UMM_Slot_Base* _Slot) {
}

void UMM_Popup_OptionChange::OnClickItemDetailInfo() {
}

void UMM_Popup_OptionChange::OnClickCloseButton() {
}

void UMM_Popup_OptionChange::OnClickClose() {
}

void UMM_Popup_OptionChange::OnClickAutoOption() {
}


