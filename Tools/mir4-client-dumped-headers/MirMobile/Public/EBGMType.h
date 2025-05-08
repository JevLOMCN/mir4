#pragma once
#include "CoreMinimal.h"
#include "EBGMType.generated.h"

UENUM(BlueprintType)
enum class EBGMType : uint8 {
    NONE,
    FIELD,
    QUEST,
    PHASING,
    EVENT,
    MAX,
};

