#pragma once
#include "CoreMinimal.h"
#include "ESoundMode.generated.h"

UENUM(BlueprintType)
enum class ESoundMode : uint8 {
    NONE,
    SCENE,
    OUT_GAME_CONETENT,
    MAX,
};

