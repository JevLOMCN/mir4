#pragma once
#include "CoreMinimal.h"
#include "EConstraintOffsetOption.generated.h"

UENUM(BlueprintType)
enum class EConstraintOffsetOption : uint8 {
    None,
    Offset_RefPose,
};

