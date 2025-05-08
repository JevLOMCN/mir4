#pragma once
#include "CoreMinimal.h"
#include "ValueEventType.generated.h"

UENUM(BlueprintType)
enum class ValueEventType : uint8 {
    Changed,
    Cancelled,
};

