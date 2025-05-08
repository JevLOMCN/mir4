#pragma once
#include "CoreMinimal.h"
#include "EDynamicBoxType.generated.h"

UENUM(BlueprintType)
enum class EDynamicBoxType : uint8 {
    Horizontal,
    Vertical,
    Wrap,
    Overlay,
};

