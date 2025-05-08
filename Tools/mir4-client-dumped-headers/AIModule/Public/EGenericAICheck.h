#pragma once
#include "CoreMinimal.h"
#include "EGenericAICheck.generated.h"

UENUM(BlueprintType)
enum class EGenericAICheck : uint8 {
    Less,
    LessOrEqual,
    Equal,
    NotEqual,
    GreaterOrEqual,
    Greater,
    IsTrue,
    MAX,
};

