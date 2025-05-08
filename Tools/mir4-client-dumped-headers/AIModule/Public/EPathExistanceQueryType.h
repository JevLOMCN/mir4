#pragma once
#include "CoreMinimal.h"
#include "EPathExistanceQueryType.generated.h"

UENUM(BlueprintType)
namespace EPathExistanceQueryType {
    enum Type {
        NavmeshRaycast2D,
        HierarchicalQuery,
        RegularPathFinding,
    };
}

