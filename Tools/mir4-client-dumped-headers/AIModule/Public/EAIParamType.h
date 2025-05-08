#pragma once
#include "CoreMinimal.h"
#include "EAIParamType.generated.h"

UENUM(BlueprintType)
enum class EAIParamType : uint8 {
    Float,
    Int,
    Bool,
    MAX,
};

