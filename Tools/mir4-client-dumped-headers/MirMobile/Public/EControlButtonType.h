#pragma once
#include "CoreMinimal.h"
#include "EControlButtonType.generated.h"

UENUM(BlueprintType)
enum class EControlButtonType : uint8 {
    ControlBtn_Skill,
    ControlBtn_Jump,
    ControlBtn_Avoid,
};

