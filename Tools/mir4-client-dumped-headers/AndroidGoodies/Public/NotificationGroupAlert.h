#pragma once
#include "CoreMinimal.h"
#include "NotificationGroupAlert.generated.h"

UENUM(BlueprintType)
enum NotificationGroupAlert {
    GroupAlertAll,
    GroupAlertSummary,
    GroupAlertChildren,
};

