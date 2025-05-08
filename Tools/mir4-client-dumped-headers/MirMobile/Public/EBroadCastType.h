#pragma once
#include "CoreMinimal.h"
#include "EBroadCastType.generated.h"

UENUM(BlueprintType)
enum class EBroadCastType : uint8 {
    Normal,
    Wide,
    VeryWide,
    NoLimit,
};

