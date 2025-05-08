#pragma once
#include "CoreMinimal.h"
#include "EPoseDriverType.generated.h"

UENUM(BlueprintType)
enum class EPoseDriverType : uint8 {
    SwingAndTwist,
    SwingOnly,
    Translation,
};

