#pragma once
#include "CoreMinimal.h"
#include "EPawnSubActionTriggeringPolicy.generated.h"

UENUM(BlueprintType)
namespace EPawnSubActionTriggeringPolicy {
    enum Type {
        CopyBeforeTriggering,
        ReuseInstances,
    };
}

