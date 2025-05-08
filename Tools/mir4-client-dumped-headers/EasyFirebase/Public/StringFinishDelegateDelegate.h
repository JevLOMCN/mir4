#pragma once
#include "CoreMinimal.h"
#include "StringFinishDelegateDelegate.generated.h"

UDELEGATE(BlueprintCallable) DECLARE_DYNAMIC_MULTICAST_DELEGATE_ThreeParams(FStringFinishDelegate, const FString&, Data, int32, ErrorCode, const FString&, errmsg);

