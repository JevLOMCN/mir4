#pragma once
#include "CoreMinimal.h"
#include "ESlateDebuggingNavigationMethod.generated.h"

UENUM(BlueprintType)
enum class ESlateDebuggingNavigationMethod : uint8 {
    Unknown,
    Explicit,
    CustomDelegateBound,
    CustomDelegateUnbound,
    NextOrPrevious,
    HitTestGrid,
};

