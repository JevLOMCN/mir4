#include "MM_B_Login.h"

UMM_B_Login::UMM_B_Login() {
    this->m_bAbleTick = false;
    this->m_fProgressSpeed = 1.00f;
    this->m_fShowLoginInfoTime = 0.00f;
    this->m_Grid_TouchNotice = NULL;
    this->m_Txt_ServerName = NULL;
    this->m_Txt_Peace = NULL;
    this->m_Txt_ServerState = NULL;
    this->m_Btn_ServerChange = NULL;
    this->m_Txt_Version = NULL;
    this->m_Txt_LoadingPercent = NULL;
    this->m_Can_Logout = NULL;
    this->m_Img_LogoutIcon = NULL;
    this->m_Btn_Logout = NULL;
    this->m_Can_Option = NULL;
    this->m_Btn_Option = NULL;
    this->m_Overlay_GameStart = NULL;
    this->m_Btn_GameStart = NULL;
    this->m_Btn_Screen = NULL;
    this->m_VolumeController = NULL;
    this->m_Btn_AccountPopup = NULL;
    this->m_Btn_BlockScreen = NULL;
}

void UMM_B_Login::ShowPopupAccountLinking() {
}

void UMM_B_Login::SetAble_ScreenBtn(bool bAble) {
}

void UMM_B_Login::OnClickServerChange() {
}

void UMM_B_Login::OnClickScreen() {
}

void UMM_B_Login::OnClickOption() {
}

void UMM_B_Login::OnClickLogout() {
}

void UMM_B_Login::OnClickGameStart() {
}

void UMM_B_Login::OnClickAccountPopup() {
}

void UMM_B_Login::DisplayEnd_ShowLoginInfo() {
}

void UMM_B_Login::DisplayEnd_ShowLoading() {
}

void UMM_B_Login::DisplayEnd_OpenWidget() {
}

void UMM_B_Login::DisplayEnd_EndLoading() {
}








