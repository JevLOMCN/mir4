#include "MM_Popup_NewAccount.h"

UMM_Popup_NewAccount::UMM_Popup_NewAccount() {
    this->m_fActionDelayForAnimation = 0.10f;
    this->m_Overlay_GoogleLogin = NULL;
    this->m_Overlay_AppleLogin = NULL;
    this->m_Overlay_FacebookLogin = NULL;
    this->m_Overlay_SteamLogin = NULL;
    this->m_Overlay_GuestLogin = NULL;
    this->m_Overlay_GuestContinue = NULL;
    this->m_Btn_GoogleLogin = NULL;
    this->m_Btn_AppleLogin = NULL;
    this->m_Btn_FacebookLogin = NULL;
    this->m_Btn_SteamLogin = NULL;
    this->m_Btn_GuestLogin = NULL;
    this->m_Btn_GuestContinue = NULL;
    this->m_Grid_Effect_GoogleLogin = NULL;
    this->m_Grid_Effect_AppleLogin = NULL;
    this->m_Grid_Effect_FaceBookLogin = NULL;
    this->m_Grid_Effect_SteamLogin = NULL;
    this->m_Grid_Effect_GuestLogin = NULL;
    this->m_Grid_Effect_GuestContinue = NULL;
    this->m_Ani_Click_Google = NULL;
    this->m_Ani_Click_Apple = NULL;
    this->m_Ani_Click_FaceBook = NULL;
    this->m_Ani_Click_Steam = NULL;
    this->m_Ani_Click_GuestLogin = NULL;
    this->m_Ani_Click_GuestContinue = NULL;
    this->m_Txt_Title = NULL;
    this->m_Txt_Msg = NULL;
    this->m_RTxt_Msg = NULL;
    this->m_CB_Close = NULL;
}

void UMM_Popup_NewAccount::OnReleasedSteamBtn() {
}

void UMM_Popup_NewAccount::OnReleasedGuestLoginBtn() {
}

void UMM_Popup_NewAccount::OnReleasedGuestContinueBtn() {
}

void UMM_Popup_NewAccount::OnReleasedGoogleBtn() {
}

void UMM_Popup_NewAccount::OnReleasedFaceBookBtn() {
}

void UMM_Popup_NewAccount::OnReleasedAppleBtn() {
}

void UMM_Popup_NewAccount::OnPressedSteamBtn() {
}

void UMM_Popup_NewAccount::OnPressedGuestLoginBtn() {
}

void UMM_Popup_NewAccount::OnPressedGuestContinueBtn() {
}

void UMM_Popup_NewAccount::OnPressedGoogleBtn() {
}

void UMM_Popup_NewAccount::OnPressedFaceBookBtn() {
}

void UMM_Popup_NewAccount::OnPressedAppleBtn() {
}

void UMM_Popup_NewAccount::OnClickClose() {
}


