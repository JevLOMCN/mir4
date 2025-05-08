#pragma once
#include "CoreMinimal.h"
#include "ETextCommit.generated.h"

UENUM(BlueprintType)
namespace ETextCommit {
    enum Type {
        Default,
        OnEnter,
        OnUserMovedFocus,
        OnCleared,
    };
}

