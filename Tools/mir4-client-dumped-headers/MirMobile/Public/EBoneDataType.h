#pragma once
#include "CoreMinimal.h"
#include "EBoneDataType.generated.h"

UENUM(BlueprintType)
enum class EBoneDataType : uint8 {
    LOCATION,
    ROTATION,
    SCALE,
};

