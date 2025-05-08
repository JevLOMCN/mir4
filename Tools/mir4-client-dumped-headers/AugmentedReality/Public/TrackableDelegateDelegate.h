#pragma once
#include "CoreMinimal.h"
#include "TrackableDelegateDelegate.generated.h"

class UARTrackedGeometry;

UDELEGATE(BlueprintCallable) DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FTrackableDelegate, UARTrackedGeometry*, TrackedGeometry);

