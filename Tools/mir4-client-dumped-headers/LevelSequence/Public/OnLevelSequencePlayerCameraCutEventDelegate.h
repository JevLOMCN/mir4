#pragma once
#include "CoreMinimal.h"
#include "OnLevelSequencePlayerCameraCutEventDelegate.generated.h"

class UCameraComponent;

UDELEGATE(BlueprintCallable) DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FOnLevelSequencePlayerCameraCutEvent, UCameraComponent*, CameraComponent);

