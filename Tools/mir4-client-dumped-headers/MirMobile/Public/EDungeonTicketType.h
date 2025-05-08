#pragma once
#include "CoreMinimal.h"
#include "EDungeonTicketType.generated.h"

UENUM(BlueprintType)
enum class EDungeonTicketType : uint8 {
    TYPE_NONE,
    TYPE_SECRET_TICKET,
    TYPE_SQUARE_TICKET,
    TYPE_INDUN_TICKET,
    TYPE_BOSS_INDUN_TICKET,
    TYPE_WORLD_BOSS_TICKET,
};

