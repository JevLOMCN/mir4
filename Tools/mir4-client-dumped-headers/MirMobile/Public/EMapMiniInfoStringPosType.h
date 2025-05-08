#pragma once
#include "CoreMinimal.h"
#include "EMapMiniInfoStringPosType.generated.h"

UENUM(BlueprintType)
enum class EMapMiniInfoStringPosType : uint8 {
    None,
    Top,
    Bottom,
    Left,
    Right,
};

