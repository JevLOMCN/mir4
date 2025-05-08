#pragma once
#include "CoreMinimal.h"
#include "EWarpMethodType.generated.h"

UENUM(BlueprintType)
enum class EWarpMethodType : uint8 {
    None,
    Script,
    Fail,
};

