#include "MM_LoginManager.h"

UMM_LoginManager::UMM_LoginManager() {
    this->m_GoogleLoginSubSystem = NULL;
    this->m_AppleLoginSubSystem = NULL;
    this->m_FacebookLoginSubSystem = NULL;
    this->m_CustomLoginSubSystem = NULL;
    this->m_SteamLoginSubSystem = NULL;
    this->m_WSAuthModule = NULL;
    this->m_FirebaseMessagingHelper = NULL;
    this->m_HuaweiPushHelper = NULL;
}

void UMM_LoginManager::WithdrawPlatformAccount() {
}

void UMM_LoginManager::OnServiceAuthFail() {
}

void UMM_LoginManager::OnReqWithdraw() {
}

void UMM_LoginManager::OnReqCancelWithdraw() {
}


