#pragma once
#include "CoreMinimal.h"
#include "EDirectiveType.generated.h"

UENUM(BlueprintType)
enum class EDirectiveType : uint8 {
    None,
    Circle,
    Square,
    Triangle,
    Diamond,
    Star,
    One,
    Two,
    Three,
};

