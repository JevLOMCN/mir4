#include "OnlineSubsystemExtendedAppleBlueprintLibrary.h"

UOnlineSubsystemExtendedAppleBlueprintLibrary::UOnlineSubsystemExtendedAppleBlueprintLibrary() {
}

void UOnlineSubsystemExtendedAppleBlueprintLibrary::ResetActiveWidget() {
}

FString UOnlineSubsystemExtendedAppleBlueprintLibrary::GetUsername() {
    return TEXT("");
}

FString UOnlineSubsystemExtendedAppleBlueprintLibrary::GetUserId() {
    return TEXT("");
}

FAppleProfile UOnlineSubsystemExtendedAppleBlueprintLibrary::GetCachedAppleUserInfo(const FString& UserID) {
    return FAppleProfile{};
}

bool UOnlineSubsystemExtendedAppleBlueprintLibrary::GetAllCachedAppleUsersInfo(TArray<FAppleProfile>& Users) {
    return false;
}

FString UOnlineSubsystemExtendedAppleBlueprintLibrary::GetAccessToken() {
    return TEXT("");
}

bool UOnlineSubsystemExtendedAppleBlueprintLibrary::CheckIfPlayerLoggedIn() {
    return false;
}

void UOnlineSubsystemExtendedAppleBlueprintLibrary::ChangeActiveWidget(UCanvasPanel* ActiveWidget) {
}


