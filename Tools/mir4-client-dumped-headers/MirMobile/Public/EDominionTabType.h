#pragma once
#include "CoreMinimal.h"
#include "EDominionTabType.generated.h"

UENUM(BlueprintType)
enum class EDominionTabType : uint8 {
    STRONGPOINT,
    CASTLE_MAIN,
    CASTLE_SUB,
    MAX,
};

