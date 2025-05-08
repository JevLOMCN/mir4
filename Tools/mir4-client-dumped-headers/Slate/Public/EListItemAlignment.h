#pragma once
#include "CoreMinimal.h"
#include "EListItemAlignment.generated.h"

UENUM(BlueprintType)
enum class EListItemAlignment : uint8 {
    EvenlyDistributed,
    EvenlySize,
    EvenlyWide,
    LeftAligned,
    RightAligned,
    CenterAligned,
    Fill,
};

