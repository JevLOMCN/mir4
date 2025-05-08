#pragma once
#include "CoreMinimal.h"
#include "EStringTableType.generated.h"

UENUM(BlueprintType)
enum class EStringTableType : uint8 {
    NONE,
    STRING_UI,
    STRING_TEMPLATE,
    STRING_BUILTIN,
};

