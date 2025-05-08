#pragma once
#include "CoreMinimal.h"
#include "EStoreType.generated.h"

UENUM(BlueprintType)
enum class EStoreType : uint8 {
    NONE,
    GOOGLE_PLAY,
    APPLE_STORE,
    ONE_STORE,
    GALAXY_STORE,
    ONE_STORE_PC = 9,
    STEAM = 11,
    XSOLLA,
    MYCARD,
    HYDRA,
    HUAWEI,
};

