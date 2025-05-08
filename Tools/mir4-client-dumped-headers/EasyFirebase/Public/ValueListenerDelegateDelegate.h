#pragma once
#include "CoreMinimal.h"
#include "CancelParam.h"
#include "ValueEventType.h"
#include "ValueListenerDelegateDelegate.generated.h"

class UFirebaseDataSnapshot;

UDELEGATE(BlueprintCallable) DECLARE_DYNAMIC_MULTICAST_DELEGATE_ThreeParams(FValueListenerDelegate, ValueEventType, eventType, UFirebaseDataSnapshot*, dataSnapshot, FCancelParam, cancel);

