#pragma once
#include "CoreMinimal.h"
#include "EPawnActionAbortState.generated.h"

UENUM(BlueprintType)
namespace EPawnActionAbortState {
    enum Type {
        NeverStarted,
        NotBeingAborted,
        MarkPendingAbort,
        LatentAbortInProgress,
        AbortDone,
        MAX,
    };
}

