#pragma once
#include "CoreMinimal.h"
#include "EARSessionStatus.generated.h"

UENUM(BlueprintType)
enum class EARSessionStatus : uint8 {
    NotStarted,
    Running,
    NotSupported,
    FatalError,
    PermissionNotGranted,
    UnsupportedConfiguration,
    Other,
};

