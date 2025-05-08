#pragma once
#include "CoreMinimal.h"
#include "EPathFollowingAction.generated.h"

UENUM(BlueprintType)
namespace EPathFollowingAction {
    enum Type {
        Error,
        NoMove,
        DirectMove,
        PartialPath,
        PathToGoal,
    };
}

