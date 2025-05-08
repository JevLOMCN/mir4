#pragma once
#include "CoreMinimal.h"
#include "EAISenseNotifyType.generated.h"

UENUM(BlueprintType)
enum class EAISenseNotifyType : uint8 {
    OnEveryPerception,
    OnPerceptionChange,
};

