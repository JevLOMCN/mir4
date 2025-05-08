#pragma once
#include "CoreMinimal.h"
#include "EPartyHeaderType.generated.h"

UENUM(BlueprintType)
enum class EPartyHeaderType : uint8 {
    eHeaderType_None,
    eHeaderType_Normal,
    eHeaderType_Elite,
    eHeaderType_Labyrinth,
    eHeaderType_UnderWorld,
    eHeaderType_MagicSquare,
    eHeaderType_Secret,
};

