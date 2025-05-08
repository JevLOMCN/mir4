#pragma once
#include "CoreMinimal.h"
#include "EARJointTransformSpace.generated.h"

UENUM(BlueprintType)
enum class EARJointTransformSpace : uint8 {
    Model,
    ParentJoint,
};

