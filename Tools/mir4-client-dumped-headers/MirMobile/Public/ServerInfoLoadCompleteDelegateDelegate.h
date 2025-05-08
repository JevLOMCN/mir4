#pragma once
#include "CoreMinimal.h"
#include "ServerInfoLoadCompleteDelegateDelegate.generated.h"

UDELEGATE(BlueprintCallable) DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FServerInfoLoadCompleteDelegate, const bool, SuccessLoad);

