#pragma once
#include "CoreMinimal.h"
#include "E_NOTICE_TARGET.generated.h"

UENUM(BlueprintType)
enum class E_NOTICE_TARGET : uint8 {
    None,
    AllUser,
    TargetOnly,
    Party,
};

