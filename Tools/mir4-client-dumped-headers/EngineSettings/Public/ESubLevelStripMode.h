#pragma once
#include "CoreMinimal.h"
#include "ESubLevelStripMode.generated.h"

UENUM(BlueprintType)
enum class ESubLevelStripMode : uint8 {
    ExactClass,
    IsChildOf,
};

