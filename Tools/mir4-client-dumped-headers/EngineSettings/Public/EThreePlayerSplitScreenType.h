#pragma once
#include "CoreMinimal.h"
#include "EThreePlayerSplitScreenType.generated.h"

UENUM(BlueprintType)
namespace EThreePlayerSplitScreenType {
    enum Type {
        FavorTop,
        FavorBottom,
        Vertical,
        Horizontal,
    };
}

