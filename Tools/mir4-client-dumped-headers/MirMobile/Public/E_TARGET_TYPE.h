#pragma once
#include "CoreMinimal.h"
#include "E_TARGET_TYPE.generated.h"

UENUM(BlueprintType)
enum class E_TARGET_TYPE : uint8 {
    AnyOne,
    Monter,
    User,
    Npc,
};

