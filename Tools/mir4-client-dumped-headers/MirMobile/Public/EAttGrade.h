#pragma once
#include "CoreMinimal.h"
#include "EAttGrade.generated.h"

UENUM(BlueprintType)
enum class EAttGrade : uint8 {
    NONE,
    E,
    D,
    C,
    B,
    A,
    S,
    SS,
    SSS,
};

