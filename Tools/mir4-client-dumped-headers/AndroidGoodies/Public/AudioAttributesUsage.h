#pragma once
#include "CoreMinimal.h"
#include "AudioAttributesUsage.generated.h"

UENUM(BlueprintType)
enum AudioAttributesUsage {
    NotSpecified,
    Media,
    VoiceCommunication,
    VoiceCommunicationSignalling,
    Alarm,
    Notification,
    NotificationRingtone,
    NotificationCommunicationRequest,
    NotificationCommunicationInstant,
    NotificationCommunicationDelayed,
    NotificationEvent,
    AssistanceAccessibility,
    AssistanceNavigationGuidance,
    AssistanceSonification,
    Game,
    Assistant = 16,
};

