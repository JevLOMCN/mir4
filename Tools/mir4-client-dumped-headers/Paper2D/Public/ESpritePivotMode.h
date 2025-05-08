#pragma once
#include "CoreMinimal.h"
#include "ESpritePivotMode.generated.h"

UENUM(BlueprintType)
namespace ESpritePivotMode {
    enum Type {
        Top_Left,
        Top_Center,
        Top_Right,
        Center_Left,
        Center_Center,
        Center_Right,
        Bottom_Left,
        Bottom_Center,
        Bottom_Right,
        Custom,
    };
}

