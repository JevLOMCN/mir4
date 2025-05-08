#pragma once
#include "CoreMinimal.h"
#include "FacebookLeaderboard.h"
#include "ReadLeaderboardDelegateDelegate.generated.h"

UDELEGATE(BlueprintCallable) DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FReadLeaderboardDelegate, const TArray<FFacebookLeaderboard>&, Scores);

