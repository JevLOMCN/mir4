#pragma once
#include "CoreMinimal.h"
#include "ECommandMarkType.generated.h"

UENUM(BlueprintType)
enum class ECommandMarkType : uint8 {
    POSITION,
    TARGET,
};

