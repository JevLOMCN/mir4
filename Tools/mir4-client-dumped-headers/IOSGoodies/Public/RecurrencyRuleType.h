#pragma once
#include "CoreMinimal.h"
#include "RecurrencyRuleType.generated.h"

UENUM(BlueprintType)
enum RecurrencyRuleType {
    Daily,
    Weekly,
    Monthly,
    Yearly,
};

