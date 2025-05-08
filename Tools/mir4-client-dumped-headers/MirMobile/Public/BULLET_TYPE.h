#pragma once
#include "CoreMinimal.h"
#include "BULLET_TYPE.generated.h"

UENUM(BlueprintType)
enum class BULLET_TYPE : uint8 {
    None,
    SingleTarget,
    EachTarget,
};

