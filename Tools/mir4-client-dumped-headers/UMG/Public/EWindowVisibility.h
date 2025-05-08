#pragma once
#include "CoreMinimal.h"
#include "EWindowVisibility.generated.h"

UENUM(BlueprintType)
enum class EWindowVisibility : uint8 {
    Visible,
    SelfHitTestInvisible,
};

