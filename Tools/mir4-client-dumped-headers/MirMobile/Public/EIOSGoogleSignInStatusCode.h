#pragma once
#include "CoreMinimal.h"
#include "EIOSGoogleSignInStatusCode.generated.h"

UENUM()
enum class EIOSGoogleSignInStatusCode {
    SUCCESS,
    ERROR_UNKNOWN = -1,
    ERROR_KEYCHAIN = -2,
    ERROR_HAS_NO_AUTH_IN_KEYCHAIN = -4,
    ERROR_CANCELED = -5,
    ERROR_EMM = -6,
};

