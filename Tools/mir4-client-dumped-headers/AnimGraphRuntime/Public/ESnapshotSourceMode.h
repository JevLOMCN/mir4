#pragma once
#include "CoreMinimal.h"
#include "ESnapshotSourceMode.generated.h"

UENUM(BlueprintType)
enum class ESnapshotSourceMode : uint8 {
    NamedSnapshot,
    SnapshotPin,
};

