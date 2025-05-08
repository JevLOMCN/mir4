#pragma once
#include "CoreMinimal.h"
#include "TrackableImageDelegateDelegate.generated.h"

class UARTrackedImage;

UDELEGATE(BlueprintCallable) DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FTrackableImageDelegate, UARTrackedImage*, TrackedImage);

