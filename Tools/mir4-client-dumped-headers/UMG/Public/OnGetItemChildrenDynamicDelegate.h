#pragma once
#include "CoreMinimal.h"
#include "OnGetItemChildrenDynamicDelegate.generated.h"

class UObject;

UDELEGATE(BlueprintCallable) DECLARE_DYNAMIC_DELEGATE_TwoParams(FOnGetItemChildrenDynamic, UObject*, Item, TArray<UObject*>&, Children);

