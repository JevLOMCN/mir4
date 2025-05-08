#pragma once
#include "CoreMinimal.h"
#include "EMeshTopologyChange.generated.h"

UENUM(BlueprintType)
enum class EMeshTopologyChange : uint8 {
    NoTopologyChange,
    TopologyChange,
};

