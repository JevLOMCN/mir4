#pragma once
#include "CoreMinimal.h"
#include "ETransformConstraintType.generated.h"

UENUM(BlueprintType)
enum class ETransformConstraintType : uint8 {
    Translation,
    Rotation,
    Scale,
    Parent,
};

