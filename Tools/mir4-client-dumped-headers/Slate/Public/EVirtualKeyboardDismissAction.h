#pragma once
#include "CoreMinimal.h"
#include "EVirtualKeyboardDismissAction.generated.h"

UENUM(BlueprintType)
enum class EVirtualKeyboardDismissAction : uint8 {
    TextChangeOnDismiss,
    TextCommitOnAccept,
    TextCommitOnDismiss,
};

