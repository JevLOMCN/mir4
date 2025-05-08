#include "IGShare.h"

UIGShare::UIGShare() {
}

void UIGShare::ShareTextWithLink(const FString& Message, const FString& link, int32 posX, int32 posY, const FOnShareSuccessDelegate& onSuccessCallback, const FOnShareErrorDelegate& onErrorCallback) {
}

void UIGShare::ShareTextWithImageAndLink(const FString& Message, UTexture2D* Texture, const FString& link, int32 posX, int32 posY, const FOnShareSuccessDelegate& onSuccessCallback, const FOnShareErrorDelegate& onErrorCallback) {
}

void UIGShare::ShareTextWithImage(const FString& Message, UTexture2D* Texture, int32 posX, int32 posY, const FOnShareSuccessDelegate& onSuccessCallback, const FOnShareErrorDelegate& onErrorCallback) {
}

void UIGShare::ShareText(const FString& Message, int32 posX, int32 posY, const FOnShareSuccessDelegate& onSuccessCallback, const FOnShareErrorDelegate& onErrorCallback) {
}

void UIGShare::ShareLink(const FString& link, int32 posX, int32 posY, const FOnShareSuccessDelegate& onSuccessCallback, const FOnShareErrorDelegate& onErrorCallback) {
}

void UIGShare::ShareImage(UTexture2D* Texture, int32 posX, int32 posY, const FOnShareSuccessDelegate& onSuccessCallback, const FOnShareErrorDelegate& onErrorCallback) {
}

void UIGShare::SendSMSViaDefaultApp(const FString& phoneNumber, const FString& msgText) {
}

void UIGShare::SendSms(const FString& phoneNumber, const FString& msgText, const FOnShareSuccessDelegate& onSuccessCallback, const FOnShareErrorDelegate& onErrorCallback, const FOnShareCancelDelegate& onCancelCallback) {
}

void UIGShare::SendEmailViaDefaultApp(const FString& Subject, const FString& Body, TArray<FString> Recipients, TArray<FString> cc, TArray<FString> bcc) {
}

void UIGShare::SendEMail(const FString& Subject, const FString& Body, UTexture2D* Texture, TArray<FString> Recipients, TArray<FString> cc, TArray<FString> bcc, const FOnShareSuccessDelegate& onSuccessCallback, const FOnShareErrorDelegate& onErrorCallback, const FOnShareCancelDelegate& onCancelDelegate, const FOnSavedDraftDelegate& onSavedDraftCallback) {
}

bool UIGShare::CanSendSMS() {
    return false;
}

bool UIGShare::CanSendEmail() {
    return false;
}


