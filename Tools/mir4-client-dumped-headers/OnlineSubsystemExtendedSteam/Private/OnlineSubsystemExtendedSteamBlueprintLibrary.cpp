#include "OnlineSubsystemExtendedSteamBlueprintLibrary.h"

UOnlineSubsystemExtendedSteamBlueprintLibrary::UOnlineSubsystemExtendedSteamBlueprintLibrary() {
}

void UOnlineSubsystemExtendedSteamBlueprintLibrary::ResetActiveWidget() {
}

FString UOnlineSubsystemExtendedSteamBlueprintLibrary::GetUsername() {
    return TEXT("");
}

FString UOnlineSubsystemExtendedSteamBlueprintLibrary::GetUserId() {
    return TEXT("");
}

FSteamProfile UOnlineSubsystemExtendedSteamBlueprintLibrary::GetCachedSteamUserInfo(const FString& UserID) {
    return FSteamProfile{};
}

bool UOnlineSubsystemExtendedSteamBlueprintLibrary::GetAllCachedSteamUsersInfo(TArray<FSteamProfile>& Users) {
    return false;
}

FString UOnlineSubsystemExtendedSteamBlueprintLibrary::GetAccessToken() {
    return TEXT("");
}

bool UOnlineSubsystemExtendedSteamBlueprintLibrary::CheckIfPlayerLoggedIn() {
    return false;
}

void UOnlineSubsystemExtendedSteamBlueprintLibrary::ChangeActiveWidget(UCanvasPanel* ActiveWidget) {
}


