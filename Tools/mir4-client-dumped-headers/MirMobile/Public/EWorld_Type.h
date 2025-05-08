#pragma once
#include "CoreMinimal.h"
#include "EWorld_Type.generated.h"

UENUM(BlueprintType)
enum class EWorld_Type : uint8 {
    None,
    Game,
    Editor,
    PIE,
    EditorPreview,
    GamePreview,
    GameRPC,
    Inactive,
};

