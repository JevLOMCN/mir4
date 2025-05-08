#pragma once
#include "CoreMinimal.h"
#include "EChaosThreadingMode.generated.h"

UENUM(BlueprintType)
enum class EChaosThreadingMode : uint8 {
    DedicatedThread,
    TaskGraph,
    SingleThread,
    Num,
    Invalid,
};

