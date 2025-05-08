#pragma once
#include "CoreMinimal.h"
#include "ChannelImportance.generated.h"

UENUM(BlueprintType)
enum ChannelImportance {
    ImportanceNone,
    ImportanceMin,
    ImportanceLow,
    ImportanceDefault,
    ImportanceHigh,
    ImportanceMax,
    ImportanceUnspecified = -1000,
};

