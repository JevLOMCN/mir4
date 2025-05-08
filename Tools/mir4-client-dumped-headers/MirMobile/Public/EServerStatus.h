#pragma once
#include "CoreMinimal.h"
#include "EServerStatus.generated.h"

UENUM(BlueprintType)
enum class EServerStatus : uint8 {
    None,
    Open,
    Close,
};

