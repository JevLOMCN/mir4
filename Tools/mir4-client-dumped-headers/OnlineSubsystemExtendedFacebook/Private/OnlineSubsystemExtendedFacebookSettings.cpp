#include "OnlineSubsystemExtendedFacebookSettings.h"

UOnlineSubsystemExtendedFacebookSettings::UOnlineSubsystemExtendedFacebookSettings() {
    this->FacebookAppId = TEXT("419848625819718");
    this->FacebookDisplayName = TEXT("MirMobile");
    this->InitLoginPermissions = TEXT("email");
    this->FriendsInviteMessage = TEXT("I invite you to play my game!");
    this->bForcePortraitMode = false;
    this->bForceWebBrowserModeAndroid = false;
    this->bForceWebBrowserModeIOS = true;
}


