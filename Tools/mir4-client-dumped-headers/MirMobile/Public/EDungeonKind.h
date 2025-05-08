#pragma once
#include "CoreMinimal.h"
#include "EDungeonKind.generated.h"

UENUM(BlueprintType)
enum class EDungeonKind : uint8 {
    Normal = 1,
    Boss,
    Hell,
};

