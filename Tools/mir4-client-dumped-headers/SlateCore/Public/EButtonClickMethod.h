#pragma once
#include "CoreMinimal.h"
#include "EButtonClickMethod.generated.h"

UENUM(BlueprintType)
namespace EButtonClickMethod {
    enum Type {
        DownAndUp,
        MouseDown,
        MouseUp,
        PreciseClick,
    };
}

