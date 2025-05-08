#pragma once
#include "CoreMinimal.h"
#include "ChildEventType.generated.h"

UENUM(BlueprintType)
enum class ChildEventType : uint8 {
    Added,
    Changed,
    Moved,
    Removed,
    Cancelled,
};

