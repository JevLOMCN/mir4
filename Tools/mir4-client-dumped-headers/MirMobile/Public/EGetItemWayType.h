#pragma once
#include "CoreMinimal.h"
#include "EGetItemWayType.generated.h"

UENUM(BlueprintType)
enum class EGetItemWayType : uint8 {
    None,
    Store,
    Monster,
    NamedMonster,
    Gather,
    Dungeon_Hunt,
    Dungeon_Gather,
    ItemMake,
    Achievement,
    DictionaryMonster = 10,
    OpenBox,
    NPCStore,
    MagicSquare,
    Boss_Monster,
    Quest_Mission,
    Quest_Relation,
    Mine,
    Box_Search,
};

