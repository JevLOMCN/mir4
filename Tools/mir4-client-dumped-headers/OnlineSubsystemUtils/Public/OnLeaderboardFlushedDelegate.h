#pragma once
#include "CoreMinimal.h"
#include "OnLeaderboardFlushedDelegate.generated.h"

UDELEGATE(BlueprintCallable) DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FOnLeaderboardFlushed, FName, SessionName);

