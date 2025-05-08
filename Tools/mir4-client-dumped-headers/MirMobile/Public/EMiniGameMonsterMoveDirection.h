#pragma once
#include "CoreMinimal.h"
#include "EMiniGameMonsterMoveDirection.generated.h"

UENUM(BlueprintType)
enum class EMiniGameMonsterMoveDirection : uint8 {
    None,
    Left,
    Right,
};

