#include "OnlineSubsystemExtendedGoogleBlueprintLibrary.h"

UOnlineSubsystemExtendedGoogleBlueprintLibrary::UOnlineSubsystemExtendedGoogleBlueprintLibrary() {
}

void UOnlineSubsystemExtendedGoogleBlueprintLibrary::ResetActiveWidget() {
}

FString UOnlineSubsystemExtendedGoogleBlueprintLibrary::GetUsername() {
    return TEXT("");
}

FString UOnlineSubsystemExtendedGoogleBlueprintLibrary::GetUserId() {
    return TEXT("");
}

FGoogleProfile UOnlineSubsystemExtendedGoogleBlueprintLibrary::GetCachedGoogleUserInfo(const FString& UserID) {
    return FGoogleProfile{};
}

bool UOnlineSubsystemExtendedGoogleBlueprintLibrary::GetAllCachedGoogleUsersInfo(TArray<FGoogleProfile>& Users) {
    return false;
}

FString UOnlineSubsystemExtendedGoogleBlueprintLibrary::GetAccessToken() {
    return TEXT("");
}

bool UOnlineSubsystemExtendedGoogleBlueprintLibrary::CheckIfPlayerLoggedIn() {
    return false;
}

void UOnlineSubsystemExtendedGoogleBlueprintLibrary::ChangeActiveWidget(UCanvasPanel* ActiveWidget) {
}


