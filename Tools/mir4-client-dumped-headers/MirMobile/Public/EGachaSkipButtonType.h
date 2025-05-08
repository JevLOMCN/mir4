#pragma once
#include "CoreMinimal.h"
#include "EGachaSkipButtonType.generated.h"

UENUM(BlueprintType)
enum class EGachaSkipButtonType : uint8 {
    None,
    ShowAll,
    ResultImmediately,
};

