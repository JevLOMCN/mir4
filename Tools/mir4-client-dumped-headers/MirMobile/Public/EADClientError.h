#pragma once
#include "CoreMinimal.h"
#include "EADClientError.generated.h"

UENUM()
enum class EADClientError {
    NONE,
    MAKE_REWARDED_AD_FAILED = 900,
    LOADED_AD_OBJECT_NULL,
    AD_VERIFY_RETRY_EMPTY_CLIENT_GUID,
};

