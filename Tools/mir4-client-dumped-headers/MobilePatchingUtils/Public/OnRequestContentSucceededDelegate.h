#pragma once
#include "CoreMinimal.h"
#include "OnRequestContentSucceededDelegate.generated.h"

class UMobilePendingContent;

UDELEGATE(BlueprintCallable) DECLARE_DYNAMIC_DELEGATE_OneParam(FOnRequestContentSucceeded, UMobilePendingContent*, MobilePendingContent);

