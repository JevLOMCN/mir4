#pragma once
#include "CoreMinimal.h"
#include "CancelParam.h"
#include "ChildEventParam.h"
#include "ChildEventType.h"
#include "ChildListenerDelegateDelegate.generated.h"

class UFirebaseDataSnapshot;

UDELEGATE(BlueprintCallable) DECLARE_DYNAMIC_MULTICAST_DELEGATE_SixParams(FChildListenerDelegate, ChildEventType, eventType, FChildEventParam, addedCtx, FChildEventParam, changedCtx, FChildEventParam, movedCtx, UFirebaseDataSnapshot*, removedCtx, FCancelParam, cancel);

