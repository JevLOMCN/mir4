#pragma once
#include "CoreMinimal.h"
#include "AnimPhysLinearConstraintType.generated.h"

UENUM(BlueprintType)
enum class AnimPhysLinearConstraintType : uint8 {
    Free,
    Limited,
};

