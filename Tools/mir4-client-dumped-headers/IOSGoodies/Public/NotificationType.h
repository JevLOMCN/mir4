#pragma once
#include "CoreMinimal.h"
#include "NotificationType.generated.h"

UENUM(BlueprintType)
enum NotificationType {
    Error,
    Warning,
    Success,
};

