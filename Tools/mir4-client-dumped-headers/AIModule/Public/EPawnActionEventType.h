#pragma once
#include "CoreMinimal.h"
#include "EPawnActionEventType.generated.h"

UENUM(BlueprintType)
namespace EPawnActionEventType {
    enum Type {
        Invalid,
        FailedToStart,
        InstantAbort,
        FinishedAborting,
        FinishedExecution,
        Push,
    };
}

