#pragma once
#include "CoreMinimal.h"
#include "EPathFollowingRequestResult.generated.h"

UENUM(BlueprintType)
namespace EPathFollowingRequestResult {
    enum Type {
        Failed,
        AlreadyAtGoal,
        RequestSuccessful,
    };
}

