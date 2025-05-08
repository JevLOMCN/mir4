#pragma once
#include "CoreMinimal.h"
#include "TrackableFaceDelegateDelegate.generated.h"

class UARFaceGeometry;

UDELEGATE(BlueprintCallable) DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FTrackableFaceDelegate, UARFaceGeometry*, TrackedFace);

