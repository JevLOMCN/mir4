#pragma once
#include "CoreMinimal.h"
#include "ETimeTicketType.generated.h"

UENUM(BlueprintType)
enum class ETimeTicketType : uint8 {
    TYPE_NONE,
    TYPE_ACTION_POINT = 12,
    TYPE_HEART,
    GUILD_DONATE = 15,
};

