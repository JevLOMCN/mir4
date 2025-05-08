#pragma once
#include "CoreMinimal.h"
#include "TrackablePointDelegateDelegate.generated.h"

class UARTrackedPoint;

UDELEGATE(BlueprintCallable) DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FTrackablePointDelegate, UARTrackedPoint*, TrackedPoint);

