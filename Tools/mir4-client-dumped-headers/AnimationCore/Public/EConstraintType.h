#pragma once
#include "CoreMinimal.h"
#include "EConstraintType.generated.h"

UENUM(BlueprintType)
enum class EConstraintType : uint8 {
    Transform,
    Aim,
    MAX,
};

