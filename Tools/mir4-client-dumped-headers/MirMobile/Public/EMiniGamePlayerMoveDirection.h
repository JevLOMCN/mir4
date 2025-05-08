#pragma once
#include "CoreMinimal.h"
#include "EMiniGamePlayerMoveDirection.generated.h"

UENUM(BlueprintType)
enum class EMiniGamePlayerMoveDirection : uint8 {
    None,
    Left,
    Right,
};

