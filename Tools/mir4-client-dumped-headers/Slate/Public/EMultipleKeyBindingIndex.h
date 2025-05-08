#pragma once
#include "CoreMinimal.h"
#include "EMultipleKeyBindingIndex.generated.h"

UENUM(BlueprintType)
enum class EMultipleKeyBindingIndex : uint8 {
    Primary,
    Secondary,
    NumChords,
};

