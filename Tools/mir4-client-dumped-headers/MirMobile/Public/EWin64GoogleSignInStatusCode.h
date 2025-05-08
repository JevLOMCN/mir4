#pragma once
#include "CoreMinimal.h"
#include "EWin64GoogleSignInStatusCode.generated.h"

UENUM()
enum class EWin64GoogleSignInStatusCode {
    SUCCESS,
    ERROR_FAILED = -1,
    ERROR_CANCELED = -2,
};

