#include "OnlineSubsystemExtendedFacebookBlueprintLibrary.h"

UOnlineSubsystemExtendedFacebookBlueprintLibrary::UOnlineSubsystemExtendedFacebookBlueprintLibrary() {
}

void UOnlineSubsystemExtendedFacebookBlueprintLibrary::ResetActiveWidget() {
}

FString UOnlineSubsystemExtendedFacebookBlueprintLibrary::GetUsername() {
    return TEXT("");
}

FString UOnlineSubsystemExtendedFacebookBlueprintLibrary::GetUserId() {
    return TEXT("");
}

FFacebookProfile UOnlineSubsystemExtendedFacebookBlueprintLibrary::GetCachedFacebookUserInfo(const FString& UserID) {
    return FFacebookProfile{};
}

FFacebookFriend UOnlineSubsystemExtendedFacebookBlueprintLibrary::GetCachedFacebookFriend(const FString& FriendId) {
    return FFacebookFriend{};
}

bool UOnlineSubsystemExtendedFacebookBlueprintLibrary::GetAllCachedFacebookUsersInfo(TArray<FFacebookProfile>& Users) {
    return false;
}

bool UOnlineSubsystemExtendedFacebookBlueprintLibrary::GetAllCachedFacebookFriends(TArray<FFacebookFriend>& Friends) {
    return false;
}

bool UOnlineSubsystemExtendedFacebookBlueprintLibrary::GetAllCachedFacebookAchievements(TArray<FFacebookAchievement>& Achievements) {
    return false;
}

FString UOnlineSubsystemExtendedFacebookBlueprintLibrary::GetAccessToken() {
    return TEXT("");
}

bool UOnlineSubsystemExtendedFacebookBlueprintLibrary::CheckIfPlayerLoggedIn() {
    return false;
}

void UOnlineSubsystemExtendedFacebookBlueprintLibrary::ChangeActiveWidget(UCanvasPanel* ActiveWidget) {
}


