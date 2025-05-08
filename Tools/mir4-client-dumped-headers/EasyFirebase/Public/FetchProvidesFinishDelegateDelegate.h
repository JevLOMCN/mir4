#pragma once
#include "CoreMinimal.h"
#include "FetchProvidersResult.h"
#include "FetchProvidesFinishDelegateDelegate.generated.h"

UDELEGATE(BlueprintCallable) DECLARE_DYNAMIC_MULTICAST_DELEGATE_ThreeParams(FFetchProvidesFinishDelegate, bool, IsSuccess, FFetchProvidersResult, fetchProvidesResult, const FString&, errmsg);

