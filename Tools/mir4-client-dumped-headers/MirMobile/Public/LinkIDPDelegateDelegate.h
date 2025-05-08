#pragma once
#include "CoreMinimal.h"
#include "LinkIDPDelegateDelegate.generated.h"

UDELEGATE(BlueprintCallable) DECLARE_DYNAMIC_MULTICAST_DELEGATE_TwoParams(FLinkIDPDelegate, const bool, Success, const FString&, Message);

