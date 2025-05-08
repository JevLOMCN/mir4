#pragma once
#include "CoreMinimal.h"
#include "EArithmeticKeyOperation.generated.h"

UENUM(BlueprintType)
namespace EArithmeticKeyOperation {
    enum Type {
        Equal,
        NotEqual,
        Less,
        LessOrEqual,
        Greater,
        GreaterOrEqual,
    };
}

