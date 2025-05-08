#pragma once
#include "CoreMinimal.h"
#include "MapViewType.generated.h"

UENUM(BlueprintType)
enum MapViewType {
    Standard,
    Satellite,
    Hybrid,
    Transit,
};

