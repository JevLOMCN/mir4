#pragma once
#include "CoreMinimal.h"
#include "DataSnapshotFinishDelegateDelegate.generated.h"

class UFirebaseDataSnapshot;

UDELEGATE(BlueprintCallable) DECLARE_DYNAMIC_MULTICAST_DELEGATE_ThreeParams(FDataSnapshotFinishDelegate, UFirebaseDataSnapshot*, dataSnapshot, int32, ErrorCode, const FString&, errmsg);

