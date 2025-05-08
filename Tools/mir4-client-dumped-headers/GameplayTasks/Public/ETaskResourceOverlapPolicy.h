#pragma once
#include "CoreMinimal.h"
#include "ETaskResourceOverlapPolicy.generated.h"

UENUM(BlueprintType)
enum class ETaskResourceOverlapPolicy : uint8 {
    StartOnTop,
    StartAtEnd,
};

