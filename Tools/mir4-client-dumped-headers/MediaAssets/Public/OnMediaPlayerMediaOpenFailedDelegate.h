#pragma once
#include "CoreMinimal.h"
#include "OnMediaPlayerMediaOpenFailedDelegate.generated.h"

UDELEGATE(BlueprintCallable) DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FOnMediaPlayerMediaOpenFailed, const FString&, FailedUrl);

