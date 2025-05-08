#pragma once
#include "CoreMinimal.h"
#include "EHuaweiPushActionCode.generated.h"

UENUM()
enum class EHuaweiPushActionCode {
    INIT_FAILED = 99,
    UN_SUBSCRIBE_FAILED,
    SUBSCRIBE_FAILED,
    DELETE_TOKEN_FAILED,
    GET_TOKEN_FAILED,
    ON_MESSAGE_RECEIVED,
    UNKNOWN_ERROR = 100000,
};

