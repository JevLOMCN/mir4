#include "AGNotificationChannelGroup.h"

UAGNotificationChannelGroup::UAGNotificationChannelGroup() {
}

UAGNotificationChannelGroup* UAGNotificationChannelGroup::SetDescription(const FString& Description) {
    return NULL;
}

UAGNotificationChannelGroup* UAGNotificationChannelGroup::NewNotificationChannelGroup(const FString& ID, const FString& Name) {
    return NULL;
}

bool UAGNotificationChannelGroup::IsBlocked() {
    return false;
}

FString UAGNotificationChannelGroup::GetName() {
    return TEXT("");
}

FString UAGNotificationChannelGroup::GetId() {
    return TEXT("");
}

FString UAGNotificationChannelGroup::GetDescription() {
    return TEXT("");
}

TArray<UAGNotificationChannel*> UAGNotificationChannelGroup::GetChannels() {
    return TArray<UAGNotificationChannel*>();
}


