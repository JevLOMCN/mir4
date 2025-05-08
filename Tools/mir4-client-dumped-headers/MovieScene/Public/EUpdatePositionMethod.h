#pragma once
#include "CoreMinimal.h"
#include "EUpdatePositionMethod.generated.h"

UENUM(BlueprintType)
enum class EUpdatePositionMethod : uint8 {
    Play,
    Jump,
    Scrub,
};

