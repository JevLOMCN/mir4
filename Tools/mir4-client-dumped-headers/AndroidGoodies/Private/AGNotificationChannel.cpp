#include "AGNotificationChannel.h"

UAGNotificationChannel::UAGNotificationChannel() {
}

bool UAGNotificationChannel::ShouldVibrate() {
    return false;
}

bool UAGNotificationChannel::ShouldShowLights() {
    return false;
}

UAGNotificationChannel* UAGNotificationChannel::SetVibrationPattern(TArray<float> pattern) {
    return NULL;
}

UAGNotificationChannel* UAGNotificationChannel::SetSound(const FString& FilePath, FAGAudioAttributes Attributes) {
    return NULL;
}

UAGNotificationChannel* UAGNotificationChannel::SetShowBadge(bool Show) {
    return NULL;
}

UAGNotificationChannel* UAGNotificationChannel::SetLockScreenVisibility(TEnumAsByte<NotificationVisibility> Visibility) {
    return NULL;
}

UAGNotificationChannel* UAGNotificationChannel::SetLightColor(FColor Color) {
    return NULL;
}

UAGNotificationChannel* UAGNotificationChannel::SetImportance(TEnumAsByte<ChannelImportance> importance) {
    return NULL;
}

UAGNotificationChannel* UAGNotificationChannel::SetGroup(const FString& GroupId) {
    return NULL;
}

UAGNotificationChannel* UAGNotificationChannel::SetEnableVibration(bool Enable) {
    return NULL;
}

UAGNotificationChannel* UAGNotificationChannel::SetEnableLights(bool Enable) {
    return NULL;
}

UAGNotificationChannel* UAGNotificationChannel::SetDescription(const FString& Description) {
    return NULL;
}

UAGNotificationChannel* UAGNotificationChannel::SetBypassDnd(bool bypass) {
    return NULL;
}

UAGNotificationChannel* UAGNotificationChannel::NewNotificationChannel(const FString& ID, const FString& Name, TEnumAsByte<ChannelImportance> importance) {
    return NULL;
}

TArray<float> UAGNotificationChannel::GetVibrationPattern() {
    return TArray<float>();
}

FString UAGNotificationChannel::GetSoundPath() {
    return TEXT("");
}

FString UAGNotificationChannel::GetName() {
    return TEXT("");
}

TEnumAsByte<NotificationVisibility> UAGNotificationChannel::GetLockScreenVisibility() {
    return VisibilitySecret;
}

FColor UAGNotificationChannel::GetLightColor() {
    return FColor{};
}

TEnumAsByte<ChannelImportance> UAGNotificationChannel::GetImportance() {
    return ImportanceNone;
}

FString UAGNotificationChannel::GetId() {
    return TEXT("");
}

FString UAGNotificationChannel::GetGroupId() {
    return TEXT("");
}

FString UAGNotificationChannel::GetDescription() {
    return TEXT("");
}

FAGAudioAttributes UAGNotificationChannel::GetAudioAttributes() {
    return FAGAudioAttributes{};
}

bool UAGNotificationChannel::CanShowBadge() {
    return false;
}

bool UAGNotificationChannel::CanBypassDnd() {
    return false;
}


