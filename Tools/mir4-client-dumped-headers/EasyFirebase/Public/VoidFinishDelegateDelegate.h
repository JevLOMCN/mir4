#pragma once
#include "CoreMinimal.h"
#include "VoidFinishDelegateDelegate.generated.h"

UDELEGATE(BlueprintCallable) DECLARE_DYNAMIC_MULTICAST_DELEGATE_TwoParams(FVoidFinishDelegate, int32, errcode, const FString&, errmsg);

