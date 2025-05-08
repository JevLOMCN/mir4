#pragma once
#include "CoreMinimal.h"
#include "BlueprintAsyncLoadDelegateDelegate.generated.h"

class UObject;

UDELEGATE(BlueprintCallable) DECLARE_DYNAMIC_MULTICAST_DELEGATE_TwoParams(FBlueprintAsyncLoadDelegate, int32, TaskID, UObject*, LoadFinishAsset);

