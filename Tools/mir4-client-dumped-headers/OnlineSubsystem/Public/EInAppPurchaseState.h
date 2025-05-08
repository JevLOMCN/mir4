#pragma once
#include "CoreMinimal.h"
#include "EInAppPurchaseState.generated.h"

UENUM(BlueprintType)
namespace EInAppPurchaseState {
    enum Type {
        Unknown,
        Success,
        Failed,
        Cancelled,
        Invalid,
        NotAllowed,
        Restored,
        AlreadyOwned,
    };
}

