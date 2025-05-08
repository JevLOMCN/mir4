#pragma once
#include "CoreMinimal.h"
#include "GogoleServerAuthCodeDelegateDelegate.generated.h"

UDELEGATE(BlueprintCallable) DECLARE_DYNAMIC_MULTICAST_DELEGATE_TwoParams(FGogoleServerAuthCodeDelegate, bool, IsSuccess, const FString&, serverAuthCode);

