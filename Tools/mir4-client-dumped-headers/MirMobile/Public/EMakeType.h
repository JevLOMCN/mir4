#pragma once
#include "CoreMinimal.h"
#include "EMakeType.generated.h"

UENUM()
enum class EMakeType {
    NONE,
    MAKE_UI,
    MAKE_NPC,
    MAKE_NPC_EXCHANGE,
    MAKE_UI_SPECIAL,
    MAKE_NPC_SPECIAL_EXT,
    MAKE_UI_MATERIAL,
    MAKE_UI_USE,
    MAKE_UI_AGENCY,
    MAKE_NPC_SPECIAL = 999,
};

