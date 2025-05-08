#pragma once
#include "CoreMinimal.h"
#include "EProgressTextType.generated.h"

UENUM(BlueprintType)
enum class EProgressTextType : uint8 {
    Empty,
    Slash,
    Percent,
};

