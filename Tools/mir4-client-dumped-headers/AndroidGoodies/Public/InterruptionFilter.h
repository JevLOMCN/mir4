#pragma once
#include "CoreMinimal.h"
#include "InterruptionFilter.generated.h"

UENUM(BlueprintType)
enum InterruptionFilter {
    FilterUnknown,
    FIlterAll,
    FilterPriority,
    FilterNone,
    FilterAlarms,
};

