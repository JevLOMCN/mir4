#pragma once
#include "CoreMinimal.h"
#include "EPetGuidePosType.generated.h"

UENUM(BlueprintType)
enum class EPetGuidePosType : uint8 {
    None,
    Left,
    Right,
    Top,
    Bottom,
    Max,
};

