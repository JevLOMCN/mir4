#include "AppleLoginSubSystem.h"

UAppleLoginSubSystem::UAppleLoginSubSystem() {
    this->m_WindowFirebaseCredential = NULL;
}

void UAppleLoginSubSystem::RequestSignInForWithdrawCredentialComplete(bool IsSuccess, UFirebaseCredential* credential, const FString& ErrorMessage) {
}

void UAppleLoginSubSystem::RequestAppleCredentialComplete(bool IsSuccess, UFirebaseCredential* credential, const FString& ErrorMessage) {
}

void UAppleLoginSubSystem::OnExtendedAppleWithdrawLoginSuccess() {
}

void UAppleLoginSubSystem::OnExtendedAppleWithdrawLoginFail() {
}

void UAppleLoginSubSystem::OnExtendedAppleLoginSuccess() {
}

void UAppleLoginSubSystem::OnExtendedAppleLoginFail() {
}

void UAppleLoginSubSystem::AuthSignInWithCredentialComplete(UFirebaseUser* FirebaseUser, int32 ErrorCode, const FString& ErrorMessage) {
}

void UAppleLoginSubSystem::AuthSignInForWithdrawCredentialComplete(UFirebaseUser* FirebaseUser, int32 ErrorCode, const FString& ErrorMessage) {
}


