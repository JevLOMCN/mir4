#include "MobilePatchingLibrary.h"

UMobilePatchingLibrary::UMobilePatchingLibrary() {
}

void UMobilePatchingLibrary::RequestContent(const FString& RemoteManifestURL, const FString& CloudURL, const FString& InstallDirectory, FOnRequestContentSucceeded OnSucceeded, FOnRequestContentFailed OnFailed) {
}

bool UMobilePatchingLibrary::HasActiveWiFiConnection() {
    return false;
}

TArray<FString> UMobilePatchingLibrary::GetSupportedPlatformNames() {
    return TArray<FString>();
}

UMobileInstalledContent* UMobilePatchingLibrary::GetInstalledContent(const FString& InstallDirectory) {
    return NULL;
}

FString UMobilePatchingLibrary::GetActiveDeviceProfileName() {
    return TEXT("");
}


