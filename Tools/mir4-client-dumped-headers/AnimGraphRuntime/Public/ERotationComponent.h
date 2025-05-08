#pragma once
#include "CoreMinimal.h"
#include "ERotationComponent.generated.h"

UENUM(BlueprintType)
enum class ERotationComponent : uint8 {
    EulerX,
    EulerY,
    EulerZ,
    QuaternionAngle,
    SwingAngle,
    TwistAngle,
};

