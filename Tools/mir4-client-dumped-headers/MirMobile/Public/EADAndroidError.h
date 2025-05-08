#pragma once
#include "CoreMinimal.h"
#include "EADAndroidError.generated.h"

UENUM(BlueprintType)
enum class EADAndroidError : uint8 {
    INTERNAL_ERROR,
    INVALID_REQUEST,
    NETWORK_ERROR,
    NO_FILL,
    NO_FILL_MEDIATION = 9,
};

