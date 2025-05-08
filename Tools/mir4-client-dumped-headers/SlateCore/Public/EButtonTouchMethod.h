#pragma once
#include "CoreMinimal.h"
#include "EButtonTouchMethod.generated.h"

UENUM(BlueprintType)
namespace EButtonTouchMethod {
    enum Type {
        DownAndUp,
        Down,
        PreciseTap,
    };
}

