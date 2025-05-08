#pragma once
#include "CoreMinimal.h"
#include "EConditionType.generated.h"

UENUM(BlueprintType)
enum class EConditionType : uint8 {
    None,
    Less_HP,
    More_HP,
    Less_MP,
    More_MP,
    Less_Distance,
    More_Distance,
    NoEnemyWithin,
    Buff_Exists,
    Buff_NotExists,
    DeadPlayerInParty,
    Less_HPInParty,
};

