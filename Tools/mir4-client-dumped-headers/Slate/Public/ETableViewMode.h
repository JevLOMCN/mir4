#pragma once
#include "CoreMinimal.h"
#include "ETableViewMode.generated.h"

UENUM(BlueprintType)
namespace ETableViewMode {
    enum Type {
        List,
        Tile,
        Tree,
    };
}

