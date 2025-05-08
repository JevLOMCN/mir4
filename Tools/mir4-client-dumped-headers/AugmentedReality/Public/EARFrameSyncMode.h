#pragma once
#include "CoreMinimal.h"
#include "EARFrameSyncMode.generated.h"

UENUM(BlueprintType)
enum class EARFrameSyncMode : uint8 {
    SyncTickWithCameraImage,
    SyncTickWithoutCameraImage,
};

