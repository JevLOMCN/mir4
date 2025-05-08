#pragma once
#include "CoreMinimal.h"
#include "ELandscapeClearMode.generated.h"

UENUM(BlueprintType)
enum ELandscapeClearMode {
    Clear_Weightmap = 1,
    Clear_Heightmap,
    Clear_All,
};

