#pragma once
#include "CoreMinimal.h"
#include "ECountState.generated.h"

UENUM(BlueprintType)
enum class ECountState : uint8 {
    Count,
    Start,
    Name,
    End,
};

