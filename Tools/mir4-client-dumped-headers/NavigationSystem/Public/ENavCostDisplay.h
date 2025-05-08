#pragma once
#include "CoreMinimal.h"
#include "ENavCostDisplay.generated.h"

UENUM(BlueprintType)
namespace ENavCostDisplay {
    enum Type {
        TotalCost,
        HeuristicOnly,
        RealCostOnly,
    };
}

