#pragma once
#include "CoreMinimal.h"
#include "EConditionTarget.generated.h"

UENUM(BlueprintType)
enum class EConditionTarget : uint8 {
    Me,
    Target,
};

