#pragma once
#include "CoreMinimal.h"
#include "ETabType.generated.h"

UENUM(BlueprintType)
enum class ETabType : uint8 {
    CHARINFO,
    TAB_MAX UMETA(Hidden),
};

