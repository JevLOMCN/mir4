#pragma once
#include "CoreMinimal.h"
#include "ETextKeyOperation.generated.h"

UENUM(BlueprintType)
namespace ETextKeyOperation {
    enum Type {
        Equal,
        NotEqual,
        Contain,
        NotContain,
    };
}

