#pragma once
#include "CoreMinimal.h"
#include "EAndroidGoogleSignInStatusCode.generated.h"

UENUM()
enum class EAndroidGoogleSignInStatusCode {
    SUCCESS,
    ERROR_FAILED = 12500,
    ERROR_CANCELED,
    ERROR_CURRENTLY_IN_PROGRESS,
};

