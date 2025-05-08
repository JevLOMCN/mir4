#include "FirebaseUser.h"

UFirebaseUser::UFirebaseUser() {
}

UFirebaseFutureVoid* UFirebaseUser::UpdateUserProfileLastResult() {
    return NULL;
}

UFirebaseFutureVoid* UFirebaseUser::UpdateUserProfile(const FUserProfile& profile) {
    return NULL;
}

UFirebaseFutureUser* UFirebaseUser::UpdatePhoneNumberCredentialLastResult() {
    return NULL;
}

UFirebaseFutureUser* UFirebaseUser::UpdatePhoneNumberCredential(UFirebaseCredential* crdenntial) {
    return NULL;
}

UFirebaseFutureVoid* UFirebaseUser::UpdatePasswordLastResult() {
    return NULL;
}

UFirebaseFutureVoid* UFirebaseUser::UpdatePassword(const FString& passwd) {
    return NULL;
}

UFirebaseFutureVoid* UFirebaseUser::UpdateEmailLastResult() {
    return NULL;
}

UFirebaseFutureVoid* UFirebaseUser::UpdateEmail(const FString& email) {
    return NULL;
}

UFirebaseFutureUser* UFirebaseUser::Unlink(const FString& provider) {
    return NULL;
}

UFirebaseFutureVoid* UFirebaseUser::SendEmailVerificationLastResult() {
    return NULL;
}

UFirebaseFutureVoid* UFirebaseUser::SendEmailVerification() {
    return NULL;
}

UFirebaseFutureVoid* UFirebaseUser::ReloadLastResult() {
    return NULL;
}

UFirebaseFutureVoid* UFirebaseUser::Reload() {
    return NULL;
}

UFirebaseFutureVoid* UFirebaseUser::ReauthenticateLastResult() {
    return NULL;
}

UFirebaseFutureSignInResult* UFirebaseUser::ReauthenticateAndRetrieveDataLastResult() {
    return NULL;
}

UFirebaseFutureSignInResult* UFirebaseUser::ReauthenticateAndRetrieveData(UFirebaseCredential* crdenntial) {
    return NULL;
}

UFirebaseFutureVoid* UFirebaseUser::Reauthenticate(UFirebaseCredential* crdenntial) {
    return NULL;
}

TArray<UFirebaseUserInfoInterface*> UFirebaseUser::provider_data() {
    return TArray<UFirebaseUserInfoInterface*>();
}

FUserMetadata UFirebaseUser::metadata() {
    return FUserMetadata{};
}

UFirebaseFutureUser* UFirebaseUser::LinkWithCredentialLastResult() {
    return NULL;
}

UFirebaseFutureUser* UFirebaseUser::LinkWithCredential(UFirebaseCredential* crdenntial) {
    return NULL;
}

UFirebaseFutureSignInResult* UFirebaseUser::LinkAndRetrieveDataWithCredentialLastResult() {
    return NULL;
}

UFirebaseFutureSignInResult* UFirebaseUser::LinkAndRetrieveDataWithCredential(UFirebaseCredential* crdenntial) {
    return NULL;
}

bool UFirebaseUser::is_email_verified() {
    return false;
}

bool UFirebaseUser::is_anonymous() {
    return false;
}

UFirebaseFutureString* UFirebaseUser::GetTokenLastResult() {
    return NULL;
}

UFirebaseFutureString* UFirebaseUser::GetToken(bool forceRefresh) {
    return NULL;
}

UFirebaseFutureVoid* UFirebaseUser::DeleteLastResult() {
    return NULL;
}

UFirebaseFutureVoid* UFirebaseUser::Delete() {
    return NULL;
}


