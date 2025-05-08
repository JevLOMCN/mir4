#pragma once
#include "CoreMinimal.h"
#include "ETapLineMode.generated.h"

UENUM(BlueprintType)
enum class ETapLineMode : uint8 {
    SendToChannel,
    Panning,
    Disabled,
};

