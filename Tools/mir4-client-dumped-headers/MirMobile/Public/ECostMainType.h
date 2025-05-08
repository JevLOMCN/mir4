#pragma once
#include "CoreMinimal.h"
#include "ECostMainType.generated.h"

UENUM(BlueprintType)
enum class ECostMainType : uint8 {
    TYPE_NONE,
    TYPE_MONEY,
    TYPE_TIME_TICKET,
    TYPE_DUNGEON_TICKET,
};

