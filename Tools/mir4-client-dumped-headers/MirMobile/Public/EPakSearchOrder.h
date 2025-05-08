#pragma once
#include "CoreMinimal.h"
#include "EPakSearchOrder.generated.h"

UENUM(BlueprintType)
enum class EPakSearchOrder : uint8 {
    DlcPakFirst,
    AppPakFirst,
};

