#pragma once
#include "CoreMinimal.h"
#include "EADIOSError.generated.h"

UENUM(BlueprintType)
enum class EADIOSError : uint8 {
    INVALID_REQUEST,
    NO_FILL,
    NETWORK_ERROR,
    SERVER_ERROR,
    DEVICE_VERSION_LOW,
    TIMEOUT,
    INTERSTITIAL_ALREADY_USED,
    NO_FILL_MEDIATION = 9,
    INTERNAL_ERROR = 11,
    REWARDED_ALREADY_USED = 14,
};

