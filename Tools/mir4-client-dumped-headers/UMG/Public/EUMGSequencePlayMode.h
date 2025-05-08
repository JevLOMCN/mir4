#pragma once
#include "CoreMinimal.h"
#include "EUMGSequencePlayMode.generated.h"

UENUM(BlueprintType)
namespace EUMGSequencePlayMode {
    enum Type {
        Forward,
        Reverse,
        PingPong,
    };
}

