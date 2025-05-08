#pragma once
#include "CoreMinimal.h"
#include "EObjectActivateType.generated.h"

UENUM(BlueprintType)
enum class EObjectActivateType : uint8 {
    ALWAYS,
    QUEST,
    CHARLEVEL,
    NEED_GUILD,
    RELATION_QUEST = 7,
    MISSION,
    REPLACE_MISSION,
    REQUEST_MISSION,
    NECESSARY_ITEM,
    SANCTUM,
    PLUNDER,
    ITEM_DISPLAY = 51,
    OBJECT_MON_GEN = 98,
    NOACTIVE,
};

