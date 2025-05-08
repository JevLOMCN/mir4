#pragma once
#include "CoreMinimal.h"
#include "EGeometryCollectionCacheType.generated.h"

UENUM(BlueprintType)
enum class EGeometryCollectionCacheType : uint8 {
    None,
    Record,
    Play,
    RecordAndPlay,
};

