#include "FacebookLoginSubSystem.h"

UFacebookLoginSubSystem::UFacebookLoginSubSystem() {
    this->m_WindowFirebaseCredential = NULL;
}

void UFacebookLoginSubSystem::RequestFacebookCredentialComplete(bool IsSuccess, UFirebaseCredential* credential) {
}

void UFacebookLoginSubSystem::OnExtendedFacebookLoginSuccess() {
}

void UFacebookLoginSubSystem::OnExtendedFacebookLoginFail() {
}

void UFacebookLoginSubSystem::AuthSignInWithCredentialComplete(UFirebaseUser* FirebaseUser, int32 ErrorCode, const FString& ErrorMessage) {
}


