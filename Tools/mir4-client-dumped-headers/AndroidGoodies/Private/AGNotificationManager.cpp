#include "AGNotificationManager.h"

UAGNotificationManager::UAGNotificationManager() {
}

bool UAGNotificationManager::WasApplicationOpenViaNotification() {
    return false;
}

void UAGNotificationManager::SetCurrentInterruptionFilter(TEnumAsByte<InterruptionFilter> Filter) {
}

void UAGNotificationManager::ScheduleRepeatingNotification(UAGNotification* Notification, int32 ID, FTimespan notifyAfter, FTimespan repeatAfter) {
}

void UAGNotificationManager::ScheduleNotification(UAGNotification* Notification, int32 ID, FTimespan notifyAfter) {
}

void UAGNotificationManager::OpenNotificationChannelSettings(const FString& ChannelId) {
}

void UAGNotificationManager::Notify(UAGNotification* Notification, int32 ID) {
}

FString UAGNotificationManager::GetNotificationDataForKey(const FString& Key) {
    return TEXT("");
}

TArray<UAGNotificationChannel*> UAGNotificationManager::GetNotificationChannels() {
    return TArray<UAGNotificationChannel*>();
}

TArray<UAGNotificationChannelGroup*> UAGNotificationManager::GetNotificationChannelGroups() {
    return TArray<UAGNotificationChannelGroup*>();
}

UAGNotificationChannelGroup* UAGNotificationManager::GetNotificationChannelGroup(const FString& GroupId) {
    return NULL;
}

UAGNotificationChannel* UAGNotificationManager::GetNotificationChannel(const FString& ChannelId) {
    return NULL;
}

TEnumAsByte<InterruptionFilter> UAGNotificationManager::GetCurrentInterruptionFilter() {
    return FilterUnknown;
}

TEnumAsByte<ChannelImportance> UAGNotificationManager::GetCurrentImportance() {
    return ImportanceNone;
}

void UAGNotificationManager::DeleteNotificationChannelGroup(const FString& GroupId) {
}

void UAGNotificationManager::DeleteNotificationChannel(const FString& ChannelId) {
}

void UAGNotificationManager::CreateNotificationChannelGroup(UAGNotificationChannelGroup* Group) {
}

void UAGNotificationManager::CreateNotificationChannel(UAGNotificationChannel* Channel) {
}

void UAGNotificationManager::CancelScheduledNotification(int32 ID) {
}

void UAGNotificationManager::CancelNotification(int32 ID) {
}

void UAGNotificationManager::CancelAllNotifications() {
}

bool UAGNotificationManager::AreNotificationChannelsSupported() {
    return false;
}


