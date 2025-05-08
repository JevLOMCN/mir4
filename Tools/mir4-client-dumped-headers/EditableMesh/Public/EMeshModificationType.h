#pragma once
#include "CoreMinimal.h"
#include "EMeshModificationType.generated.h"

UENUM(BlueprintType)
enum class EMeshModificationType : uint8 {
    FirstInterim,
    Interim,
    Final,
};

