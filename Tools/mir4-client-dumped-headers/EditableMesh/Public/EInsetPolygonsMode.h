#pragma once
#include "CoreMinimal.h"
#include "EInsetPolygonsMode.generated.h"

UENUM(BlueprintType)
enum class EInsetPolygonsMode : uint8 {
    All,
    CenterPolygonOnly,
    SidePolygonsOnly,
};

