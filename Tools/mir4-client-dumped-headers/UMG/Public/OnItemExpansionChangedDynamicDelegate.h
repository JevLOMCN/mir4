#pragma once
#include "CoreMinimal.h"
#include "OnItemExpansionChangedDynamicDelegate.generated.h"

class UObject;

UDELEGATE(BlueprintCallable) DECLARE_DYNAMIC_MULTICAST_DELEGATE_TwoParams(FOnItemExpansionChangedDynamic, UObject*, Item, bool, bIsExpanded);

