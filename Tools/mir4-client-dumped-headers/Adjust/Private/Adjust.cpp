#include "Adjust.h"

UAdjust::UAdjust() {
}

void UAdjust::UpdateConversionValue(int32 ConversionValue) {
}

void UAdjust::TrackEvent(const FAdjustEvent& Event) {
}

void UAdjust::TrackAdRevenue(const FString& Source, const FString& Payload) {
}

void UAdjust::SetPushToken(const FString& PushToken) {
}

void UAdjust::SetOfflineMode(bool Offline) {
}

void UAdjust::SetEnabled(bool Enable) {
}

void UAdjust::SendFirstPackages() {
}

void UAdjust::ResetSessionPartnerParameters() {
}

void UAdjust::ResetSessionCallbackParameters() {
}

void UAdjust::RequestTrackingAuthorizationWithCompletionHandler() {
}

void UAdjust::RemoveSessionPartnerParameter(const FString& Key) {
}

void UAdjust::RemoveSessionCallbackParameter(const FString& Key) {
}

bool UAdjust::IsEnabled() {
    return false;
}

void UAdjust::Initialize(const FAdjustConfig& Config) {
}

FString UAdjust::GetSdkVersion() {
    return TEXT("");
}

FString UAdjust::GetIdfa() {
    return TEXT("");
}

void UAdjust::GetGoogleAdId() {
}

FAdjustAttribution UAdjust::GetAttribution() {
    return FAdjustAttribution{};
}

int32 UAdjust::GetAppTrackingAuthorizationStatus() {
    return 0;
}

FString UAdjust::GetAmazonAdId() {
    return TEXT("");
}

FString UAdjust::GetAdid() {
    return TEXT("");
}

void UAdjust::GdprForgetMe() {
}

void UAdjust::DisableThirdPartySharing() {
}

void UAdjust::AppWillOpenUrl(const FString& URL) {
}

void UAdjust::AddSessionPartnerParameter(const FString& Key, const FString& Value) {
}

void UAdjust::AddSessionCallbackParameter(const FString& Key, const FString& Value) {
}


