#pragma once
#include "CoreMinimal.h"
#include "EGachaResultType.generated.h"

UENUM(BlueprintType)
enum class EGachaResultType : uint8 {
    NONE = 255,
    PET = 0,
    SKILLBOOK,
    DRAGON_HEART,
    DRAGON_SCALE,
    DRAGON_CLAW,
    DRAGON_MATERIAL,
    FIXED_PET,
    DRAGON_TOENAIL,
    DRAGON_EYE,
    MAGIC_STONE,
    SPIRIT_TREASUR,
    CODEX_BADGE,
    MYSTICALPIECE,
    SPECIAL_PAT,
    DRAGON_BEAD,
};

