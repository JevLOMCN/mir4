#pragma once
#include "CoreMinimal.h"
#include "ESelectInfo.generated.h"

UENUM(BlueprintType)
namespace ESelectInfo {
    enum Type {
        OnKeyPress,
        OnNavigation,
        OnMouseClick,
        Direct,
    };
}

