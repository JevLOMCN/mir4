#pragma once
#include "CoreMinimal.h"
#include "ERuntimeGenerationType.generated.h"

UENUM(BlueprintType)
enum class ERuntimeGenerationType : uint8 {
    Static,
    DynamicModifiersOnly,
    Dynamic,
    LegacyGeneration,
};

