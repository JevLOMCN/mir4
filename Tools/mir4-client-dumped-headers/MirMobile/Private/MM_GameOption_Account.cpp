#include "MM_GameOption_Account.h"

UMM_GameOption_Account::UMM_GameOption_Account() {
    this->Txt_CharacterName = NULL;
    this->Txt_AccountName = NULL;
    this->Btn_EditNickName = NULL;
    this->Txt_CharID = NULL;
    this->Btn_Account_Apple = NULL;
    this->Txt_Account_Apple = NULL;
    this->Btn_Account_Google = NULL;
    this->Txt_Account_Google = NULL;
    this->Btn_Account_Facebook = NULL;
    this->Txt_Account_Facebook = NULL;
    this->Btn_Account_Steam = NULL;
    this->Txt_Account_Steam = NULL;
    this->Can_Slot_Steam = NULL;
    this->Slot_Guest = NULL;
    this->Txt_Account_Guest = NULL;
    this->Slot_GuestContinue = NULL;
    this->Btn_Account_GuestContinue = NULL;
    this->m_CB_Help = NULL;
    this->m_CB_Customer = NULL;
    this->m_CB_ServicePolicy = NULL;
    this->m_CB_PrivacyPolicy = NULL;
    this->m_CB_Withdraw = NULL;
    this->m_CB_Coupon = NULL;
    this->m_CB_Community = NULL;
    this->m_CB_OneStoreLogout = NULL;
    this->m_CB_ChangeCharacter = NULL;
    this->m_CB_Logout = NULL;
    this->m_CB_MistranslationReport = NULL;
    this->m_Txt_VersionValue = NULL;
    this->m_Txt_WhiteListVersionValue = NULL;
}

void UMM_GameOption_Account::OnLogout() {
}

void UMM_GameOption_Account::OnLinkIDPComplete(bool bSuccess, const FString& strResMsg) {
}

void UMM_GameOption_Account::OnEmergencyEscape() {
}

void UMM_GameOption_Account::OnClickWithdraw() {
}

void UMM_GameOption_Account::OnClickServicePolicy() {
}

void UMM_GameOption_Account::OnClickPrivacyPolicy() {
}

void UMM_GameOption_Account::OnClickOneStoreLogout() {
}

void UMM_GameOption_Account::OnClickMistranslationReport() {
}

void UMM_GameOption_Account::OnClickLogout() {
}

void UMM_GameOption_Account::OnClickHelp() {
}

void UMM_GameOption_Account::OnClickEditNickName() {
}

void UMM_GameOption_Account::OnClickCustomer() {
}

void UMM_GameOption_Account::OnClickCoupon() {
}

void UMM_GameOption_Account::OnClickCommunity() {
}

void UMM_GameOption_Account::OnClickChangeCharacter() {
}

void UMM_GameOption_Account::OnClickAccountSteam() {
}

void UMM_GameOption_Account::OnClickAccountGuestContinue() {
}

void UMM_GameOption_Account::OnClickAccountGoogle() {
}

void UMM_GameOption_Account::OnClickAccountFacebook() {
}

void UMM_GameOption_Account::OnClickAccountApple() {
}

void UMM_GameOption_Account::OnChangeCharacter() {
}


