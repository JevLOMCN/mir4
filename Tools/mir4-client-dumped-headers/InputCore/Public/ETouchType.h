#pragma once
#include "CoreMinimal.h"
#include "ETouchType.generated.h"

UENUM(BlueprintType)
namespace ETouchType {
    enum Type {
        Began,
        Moved,
        Stationary,
        ForceChanged,
        FirstMove,
        Ended,
        NumTypes,
    };
}

