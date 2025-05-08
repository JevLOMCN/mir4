#include "GoogleLoginSubSystem.h"

UGoogleLoginSubSystem::UGoogleLoginSubSystem() {
    this->m_WindowFirebaseCredential = NULL;
    this->m_GoogleCredential = NULL;
}

void UGoogleLoginSubSystem::RequestGoogleCredentialComplete(bool IsSuccess, UFirebaseCredential* credential) {
}

void UGoogleLoginSubSystem::OnExtendedGoogleLoginSuccess() {
}

void UGoogleLoginSubSystem::OnExtendedGoogleLoginFail() {
}

void UGoogleLoginSubSystem::AuthSignInWithCredentialComplete(UFirebaseUser* FirebaseUser, int32 ErrorCode, const FString& ErrorMessage) {
}


