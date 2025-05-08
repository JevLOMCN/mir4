#include "MM_Popup_Party_Make.h"

UMM_Popup_Party_Make::UMM_Popup_Party_Make() {
    this->STRING_ID_GUILD_WAR_NOTICE = 1059686;
    this->STRING_ID_PARTY_MAKE = 1059150;
    this->STRING_ID_SQUAD_MAKE = 1059234;
    this->STRING_ID_GUILD_NOTICE = 1059674;
    this->m_Txt_Title = NULL;
    this->m_C_Btn_Close = NULL;
    this->m_Txt_ExplainTitle = NULL;
    this->m_Party_ExplainTextField = NULL;
    this->m_Canvas_Squad = NULL;
    this->m_Img_Level[0] = NULL;
    this->m_Img_Level[1] = NULL;
    this->m_Img_Level[2] = NULL;
    this->m_Img_Level[3] = NULL;
    this->m_Img_Level[4] = NULL;
    this->m_Img_Level[5] = NULL;
    this->m_Txt_DungeonName = NULL;
    this->m_CheckBox_Public = NULL;
    this->m_CheckBox_Private = NULL;
    this->m_CheckBox_Guild = NULL;
    this->m_CheckBox_Member5 = NULL;
    this->m_CheckBox_Member15 = NULL;
    this->m_Img_Lock = NULL;
    this->m_Img_Unlock = NULL;
    this->m_Txt_Password = NULL;
    this->m_Txt_CombatPoint = NULL;
    this->m_Btn_Password = NULL;
    this->m_Btn_CombatPoint = NULL;
    this->m_C_Btn_Create = NULL;
    this->m_Can_Option_Member_15 = NULL;
}

void UMM_Popup_Party_Make::ReturnPassword(const FString& strPassword) {
}

void UMM_Popup_Party_Make::ReturnCombatPoint(int64 iValue) {
}

void UMM_Popup_Party_Make::OnClickOpenPasswordKeypad() {
}

void UMM_Popup_Party_Make::OnClickOpenCombatPointKeypad() {
}

void UMM_Popup_Party_Make::OnClickMake() {
}

void UMM_Popup_Party_Make::OnClickClose() {
}

void UMM_Popup_Party_Make::OnClickCheckBoxPublic(bool bChecked) {
}

void UMM_Popup_Party_Make::OnClickCheckBoxPrivate(bool bChecked) {
}

void UMM_Popup_Party_Make::OnClickCheckBoxMember_5(bool bChecked) {
}

void UMM_Popup_Party_Make::OnClickCheckBoxMember_15(bool bChecked) {
}

void UMM_Popup_Party_Make::OnClickCheckBoxGuild(bool bChecked) {
}


