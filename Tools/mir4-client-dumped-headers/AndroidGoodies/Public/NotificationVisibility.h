#pragma once
#include "CoreMinimal.h"
#include "NotificationVisibility.generated.h"

UENUM(BlueprintType)
enum NotificationVisibility {
    VisibilitySecret = -1,
    VisibilityPrivate = 0,
    VisibilityPublic,
};

