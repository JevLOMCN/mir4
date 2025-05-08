#pragma once
#include "CoreMinimal.h"
#include "NotificationPriority.generated.h"

UENUM(BlueprintType)
enum NotificationPriority {
    PriorityMinimum = -2,
    PriorityLow,
    PriorityDefault = 0,
    PriorityHigh,
    PriorityMaximum,
};

