#pragma once
#include "CoreMinimal.h"
#include "UpdateCostumeDelegateDelegate.generated.h"

UDELEGATE(BlueprintCallable) DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FUpdateCostumeDelegate, const int32, CostumeID);

